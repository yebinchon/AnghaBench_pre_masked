
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* get_ro ) (int ,int ) ;} ;


 int VAR_0 ;
 struct omap_hsmmc_host* FUNC_0 (struct mmc_host*) ;
 TYPE_1__ FUNC_1 (struct omap_hsmmc_host*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 struct omap_hsmmc_host *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_2).get_ro)
  return -VAR_0;
 return FUNC_1(VAR_2).get_ro(VAR_2->dev, 0);
}
