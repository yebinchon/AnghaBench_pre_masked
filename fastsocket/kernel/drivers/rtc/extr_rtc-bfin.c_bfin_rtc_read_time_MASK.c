
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct bfin_rtc {int rtc_wrote_regs; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct bfin_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct bfin_rtc *VAR_2 = FUNC_3(VAR_0);

 FUNC_2(VAR_0);

 if (VAR_2->rtc_wrote_regs & 0x1)
  FUNC_1(VAR_0);

 FUNC_4(FUNC_0(), VAR_1);

 return 0;
}
