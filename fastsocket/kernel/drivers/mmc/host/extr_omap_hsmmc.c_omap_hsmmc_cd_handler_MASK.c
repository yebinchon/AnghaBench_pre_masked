
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int mmc_carddetect_work; scalar_t__ suspended; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct omap_hsmmc_host *VAR_3 = (struct omap_hsmmc_host *)VAR_2;

 if (VAR_3->suspended)
  return VAR_0;
 FUNC_0(&VAR_3->mmc_carddetect_work);

 return VAR_0;
}
