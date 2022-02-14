
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mmc_omap_host {scalar_t__ dma_ch; scalar_t__ sg_idx; scalar_t__ sg_len; struct mmc_data* data; scalar_t__ dma_len; int mmc; } ;
struct mmc_data {int bytes_xfered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_omap_host*,struct mmc_data*) ;
 int FUNC_3 (struct mmc_omap_host*,struct mmc_data*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(int VAR_3, u16 VAR_4, void *VAR_5)
{
 struct mmc_omap_host *VAR_6 = (struct mmc_omap_host *) VAR_5;
 struct mmc_data *VAR_7 = VAR_6->data;

 if (FUNC_5(VAR_6->dma_ch < 0)) {
  FUNC_0(FUNC_1(VAR_6->mmc),
   "DMA callback while DMA not enabled\n");
  return;
 }

 if (VAR_4 & VAR_0) {
  FUNC_0(FUNC_1(VAR_6->mmc),"DMA timeout\n");
  return;
 }
 if (VAR_4 & VAR_2) {
  FUNC_0(FUNC_1(VAR_6->mmc), "DMA sync error\n");
  return;
 }
 if (!(VAR_4 & VAR_1)) {
  return;
 }
 VAR_7->bytes_xfered += VAR_6->dma_len;
 VAR_6->sg_idx++;
 if (VAR_6->sg_idx < VAR_6->sg_len) {
  FUNC_3(VAR_6, VAR_6->data);
  FUNC_4(VAR_6->dma_ch);
 } else
  FUNC_2(VAR_6, VAR_6->data);
}
