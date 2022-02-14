
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct rtc_time *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_2);
}
