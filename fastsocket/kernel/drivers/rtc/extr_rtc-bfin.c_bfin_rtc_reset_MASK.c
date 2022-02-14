
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct device {int dummy; } ;
struct bfin_rtc {scalar_t__ rtc_wrote_regs; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*) ;
 struct bfin_rtc* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0, u16 VAR_1)
{
 struct bfin_rtc *VAR_2 = FUNC_6(VAR_0);
 FUNC_5(VAR_0);
 FUNC_0(VAR_0);
 FUNC_4(0x1);
 FUNC_2(VAR_1);
 FUNC_1(0);
 FUNC_3(0xFFFF);
 VAR_2->rtc_wrote_regs = 0;
}
