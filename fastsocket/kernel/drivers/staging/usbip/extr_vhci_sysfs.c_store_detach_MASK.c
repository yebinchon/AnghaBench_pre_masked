
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ __u32 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*,scalar_t__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 __u32 VAR_7 = 0;

 FUNC_0(VAR_4, "%u", &VAR_7);


 if (VAR_7 >= VAR_1) {
  FUNC_2("invalid port %u\n", VAR_7);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6 < 0)
  return -VAR_0;

 FUNC_1("Leave\n");
 return VAR_5;
}
