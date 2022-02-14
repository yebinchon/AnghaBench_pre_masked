
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;
struct bfin_rtc {int rtc_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct bfin_rtc* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct bfin_rtc *VAR_4 = FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 VAR_3->time = VAR_4->rtc_alarm;
 FUNC_1(VAR_2);
 VAR_3->enabled = !!(FUNC_0() & (VAR_0 | VAR_1));
 return 0;
}
