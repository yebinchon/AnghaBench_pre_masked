
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int mmc; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct omap_hsmmc_host *VAR_2)
{
 FUNC_1(VAR_2->base, VAR_1,
  FUNC_0(VAR_2->base, VAR_1) & ~VAR_0);
 if ((FUNC_0(VAR_2->base, VAR_1) & VAR_0) != 0x0)
  FUNC_2(FUNC_3(VAR_2->mmc), "MMC Clock is not stoped\n");
}
