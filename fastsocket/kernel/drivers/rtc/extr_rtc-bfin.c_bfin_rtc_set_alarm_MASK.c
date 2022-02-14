
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;
struct bfin_rtc {int rtc_alarm; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfin_rtc*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct bfin_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int *,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct bfin_rtc *VAR_3 = FUNC_4(VAR_1);
 unsigned long VAR_4;

 FUNC_3(VAR_1);

 if (FUNC_6(&VAR_2->time, &VAR_4))
  return -VAR_0;

 VAR_3->rtc_alarm = VAR_2->time;

 FUNC_1(VAR_1);
 FUNC_2(FUNC_5(VAR_4));
 if (VAR_2->enabled)
  FUNC_0(VAR_3);

 return 0;
}
