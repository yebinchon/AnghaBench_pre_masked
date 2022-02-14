
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int dpm_state; int mmc; } ;
struct mmc_host {int dummy; } ;




 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct omap_hsmmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct omap_hsmmc_host*) ;
 int FUNC_4 (struct omap_hsmmc_host*) ;
 int FUNC_5 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_1)
{
 struct omap_hsmmc_host *VAR_2 = FUNC_2(VAR_1);

 switch (VAR_2->dpm_state) {
 case 130:
  return FUNC_3(VAR_2);
 case 131:
 case 128:
  return FUNC_5(VAR_2);
 case 129:
  return FUNC_4(VAR_2);
 default:
  FUNC_0(FUNC_1(VAR_2->mmc), "UNKNOWN state\n");
  return -VAR_0;
 }
}
