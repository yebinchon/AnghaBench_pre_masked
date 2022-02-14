
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {scalar_t__ dma_ch; int sg_len; int mmc; int dma_timer; } ;
struct mmc_data {int flags; int sg; scalar_t__ error; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct mmc_omap_host *VAR_5, struct mmc_data *VAR_6,
       int VAR_7)
{
 enum dma_data_direction VAR_8;

 FUNC_0(VAR_5->dma_ch < 0);
 if (VAR_6->error)
  FUNC_4(VAR_5->dma_ch);

 FUNC_3(&VAR_5->dma_timer, VAR_4 + VAR_2);
 if (VAR_6->flags & VAR_3)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;
 FUNC_1(FUNC_2(VAR_5->mmc), VAR_6->sg, VAR_5->sg_len,
       VAR_8);
}
