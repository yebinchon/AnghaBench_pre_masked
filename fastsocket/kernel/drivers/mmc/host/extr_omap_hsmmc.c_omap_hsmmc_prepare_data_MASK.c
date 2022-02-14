
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int mmc; scalar_t__ use_dma; int base; TYPE_2__* data; } ;
struct mmc_request {TYPE_2__* data; TYPE_1__* cmd; } ;
struct TYPE_4__ {int blksz; int blocks; unsigned int timeout_ns; int timeout_clks; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_hsmmc_host*,struct mmc_request*) ;
 int FUNC_4 (struct omap_hsmmc_host*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_5(struct omap_hsmmc_host *VAR_2, struct mmc_request *VAR_3)
{
 int VAR_4;
 VAR_2->data = VAR_3->data;

 if (VAR_3->data == ((void*)0)) {
  FUNC_0(VAR_2->base, VAR_0, 0);




  if (VAR_3->cmd->flags & VAR_1)
   FUNC_4(VAR_2, 100000000U, 0);
  return 0;
 }

 FUNC_0(VAR_2->base, VAR_0, (VAR_3->data->blksz)
     | (VAR_3->data->blocks << 16));
 FUNC_4(VAR_2, VAR_3->data->timeout_ns, VAR_3->data->timeout_clks);

 if (VAR_2->use_dma) {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4 != 0) {
   FUNC_1(FUNC_2(VAR_2->mmc), "MMC start dma failure\n");
   return VAR_4;
  }
 }
 return 0;
}
