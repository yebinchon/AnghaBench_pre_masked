
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct bfin_rtc {int rtc_wrote_regs; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct bfin_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct rtc_time*,unsigned long*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct bfin_rtc *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;
 unsigned long VAR_4;

 FUNC_2(VAR_0);

 VAR_3 = FUNC_5(VAR_1, &VAR_4);
 if (VAR_3 == 0) {
  if (VAR_2->rtc_wrote_regs & 0x1)
   FUNC_0(VAR_0);
  FUNC_1(FUNC_4(VAR_4));
  VAR_2->rtc_wrote_regs = 0x1;
 }

 return VAR_3;
}
