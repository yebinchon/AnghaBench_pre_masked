
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, struct rtc_time *VAR_2)
{
 if (FUNC_0(VAR_2) < 0)
  return -VAR_0;

 return 0;
}
