
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct rtc_time *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 & VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_3);
}
