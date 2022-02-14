
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_2);
 VAR_5 = FUNC_0(&VAR_4->time);
 if (VAR_5 == 0) {
  if (VAR_4->enabled)
   VAR_0 |= VAR_1;
  else
   VAR_0 &= ~VAR_1;
 }
 FUNC_2(&VAR_2);

 return VAR_5;
}
