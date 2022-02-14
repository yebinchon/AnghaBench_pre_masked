
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct omap_hsmmc_host {int dma_ch; TYPE_1__* data; scalar_t__ mapbase; } ;
struct mmc_data {int flags; } ;
struct TYPE_2__ {int blksz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_1 (int,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int,int ,int,int,int ,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_7(struct omap_hsmmc_host *VAR_6,
           struct mmc_data *VAR_7,
           struct scatterlist *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_6->dma_ch;
 if (VAR_7->flags & VAR_0) {
  FUNC_1(VAR_11, 0, VAR_1,
   (VAR_6->mapbase + VAR_5), 0, 0);
  FUNC_2(VAR_11, 0, VAR_2,
   FUNC_5(VAR_8), 0, 0);
 } else {
  FUNC_2(VAR_11, 0, VAR_1,
   (VAR_6->mapbase + VAR_5), 0, 0);
  FUNC_1(VAR_11, 0, VAR_2,
   FUNC_5(VAR_8), 0, 0);
 }

 VAR_9 = VAR_6->data->blksz;
 VAR_10 = FUNC_6(VAR_8) / VAR_9;

 FUNC_3(VAR_11, VAR_3,
   VAR_9 / 4, VAR_10, VAR_4,
   FUNC_0(VAR_6, VAR_7),
   !(VAR_7->flags & VAR_0));

 FUNC_4(VAR_11);
}
