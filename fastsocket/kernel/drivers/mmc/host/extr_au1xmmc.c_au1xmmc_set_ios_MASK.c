
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {scalar_t__ power_mode; scalar_t__ clock; int bus_width; } ;
struct mmc_host {int dummy; } ;
struct au1xmmc_host {scalar_t__ clock; } ;


 int FUNC_0 (struct au1xmmc_host*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct au1xmmc_host*,scalar_t__) ;
 int FUNC_2 (struct au1xmmc_host*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 struct au1xmmc_host* FUNC_6 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_7(struct mmc_host *VAR_3, struct mmc_ios *VAR_4)
{
 struct au1xmmc_host *VAR_5 = FUNC_6(VAR_3);
 u32 VAR_6;

 if (VAR_4->power_mode == VAR_0)
  FUNC_2(VAR_5, 0);
 else if (VAR_4->power_mode == VAR_1) {
  FUNC_2(VAR_5, 1);
 }

 if (VAR_4->clock && VAR_4->clock != VAR_5->clock) {
  FUNC_1(VAR_5, VAR_4->clock);
  VAR_5->clock = VAR_4->clock;
 }

 VAR_6 = FUNC_3(FUNC_0(VAR_5));
 switch (VAR_4->bus_width) {
 case 128:
  VAR_6 |= VAR_2;
  break;
 case 129:
  VAR_6 &= ~VAR_2;
  break;
 }
 FUNC_5(VAR_6, FUNC_0(VAR_5));
 FUNC_4();
}
