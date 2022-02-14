
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int dummy; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct omap_hsmmc_host *VAR_3, struct mmc_data *VAR_4)
{
 if (VAR_4->flags & VAR_2)
  return VAR_1;
 else
  return VAR_0;
}
