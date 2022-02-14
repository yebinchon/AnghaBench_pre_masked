
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int mmc; int fclk; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct omap_hsmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_0)
{
 struct omap_hsmmc_host *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->fclk);
 if (VAR_2)
  return VAR_2;
 FUNC_1(FUNC_2(VAR_1->mmc), "mmc_fclk: enabled\n");
 FUNC_4(VAR_1);
 return 0;
}
