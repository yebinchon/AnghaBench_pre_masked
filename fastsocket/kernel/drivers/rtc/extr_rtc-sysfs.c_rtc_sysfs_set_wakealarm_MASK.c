
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct rtc_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_device*,struct rtc_wkalrm*) ;
 scalar_t__ FUNC_1 (struct rtc_device*,int *) ;
 scalar_t__ FUNC_2 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_3 (unsigned long,int *) ;
 int FUNC_4 (int *,unsigned long*) ;
 unsigned long FUNC_5 (char*,int *,int ) ;
 struct rtc_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 unsigned long VAR_6, VAR_7;
 struct rtc_wkalrm VAR_8;
 struct rtc_device *VAR_9 = FUNC_6(VAR_1);
 char *VAR_10;
 int VAR_11 = 0;




 VAR_5 = FUNC_1(VAR_9, &VAR_8.time);
 if (VAR_5 < 0)
  return VAR_5;
 FUNC_4(&VAR_8.time, &VAR_6);

 VAR_10 = (char *)VAR_3;
 if (*VAR_10 == '+') {
  VAR_10++;
  VAR_11 = 1;
 }
 VAR_7 = FUNC_5(VAR_10, ((void*)0), 0);
 if (VAR_11) {
  VAR_7 += VAR_6;
 }
 if (VAR_7 > VAR_6) {




  VAR_5 = FUNC_0(VAR_9, &VAR_8);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_8.enabled)
   return -VAR_0;

  VAR_8.enabled = 1;
 } else {
  VAR_8.enabled = 0;




  VAR_7 = VAR_6 + 300;
 }
 FUNC_3(VAR_7, &VAR_8.time);

 VAR_5 = FUNC_2(VAR_9, &VAR_8);
 return (VAR_5 < 0) ? VAR_5 : VAR_4;
}
