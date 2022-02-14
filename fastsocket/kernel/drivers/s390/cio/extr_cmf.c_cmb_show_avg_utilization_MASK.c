
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmbdata {unsigned long device_connect_time; unsigned long function_pending_time; unsigned long device_disconnect_time; unsigned long elapsed_time; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cmbdata*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 struct cmbdata VAR_5;
 u64 VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(FUNC_2(VAR_2), &VAR_5);
 if (VAR_9 == -VAR_0 || VAR_9 == -VAR_1)

  return FUNC_1(VAR_4, "n/a\n");
 else if (VAR_9)
  return VAR_9;

 VAR_6 = VAR_5.device_connect_time +
        VAR_5.function_pending_time +
        VAR_5.device_disconnect_time;


 while (-1ul < (VAR_5.elapsed_time | VAR_6)) {
  VAR_6 >>= 8;
  VAR_5.elapsed_time >>= 8;
 }


 VAR_7 = (unsigned long) VAR_5.elapsed_time / 1000;
 VAR_8 = (unsigned long) VAR_6 / VAR_7;

 return FUNC_1(VAR_4, "%02ld.%01ld%%\n", VAR_8/ 10, VAR_8 - (VAR_8/ 10) * 10);
}
