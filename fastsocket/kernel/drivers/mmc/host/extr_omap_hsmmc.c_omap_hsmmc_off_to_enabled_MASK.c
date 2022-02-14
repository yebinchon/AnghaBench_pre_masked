
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int mmc; int dpm_state; int fclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_hsmmc_host*) ;
 int FUNC_5 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_6(struct omap_hsmmc_host *VAR_1)
{
 FUNC_0(VAR_1->fclk);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1->mmc);

 VAR_1->dpm_state = VAR_0;

 FUNC_1(FUNC_2(VAR_1->mmc), "OFF -> ENABLED\n");

 return 0;
}
