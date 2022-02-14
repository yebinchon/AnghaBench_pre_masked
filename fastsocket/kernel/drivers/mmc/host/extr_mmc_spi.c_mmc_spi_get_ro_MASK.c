
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_spi_host {TYPE_1__* pdata; } ;
struct mmc_host {int parent; } ;
struct TYPE_2__ {int (* get_ro ) (int ) ;} ;


 int VAR_0 ;
 struct mmc_spi_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct mmc_spi_host *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->pdata && VAR_2->pdata->get_ro)
  return !!VAR_2->pdata->get_ro(VAR_1->parent);




 return -VAR_0;
}
