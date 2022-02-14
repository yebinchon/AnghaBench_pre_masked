
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {scalar_t__ power_mode; int mmc; int dpm_state; int fclk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_5(struct omap_hsmmc_host *VAR_3)
{
 FUNC_4(VAR_3);
 FUNC_0(VAR_3->fclk);
 VAR_3->dpm_state = VAR_0;

 FUNC_1(FUNC_2(VAR_3->mmc), "ENABLED -> DISABLED\n");

 if (VAR_3->power_mode == VAR_1)
  return 0;

 return FUNC_3(VAR_2);
}
