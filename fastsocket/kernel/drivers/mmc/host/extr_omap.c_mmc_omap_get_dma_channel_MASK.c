
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int dma_ch; int dma_is_read; scalar_t__ id; int mmc; int dma_timer; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char const*,int ,struct mmc_omap_host*,int*) ;

__attribute__((used)) static int FUNC_5(struct mmc_omap_host *VAR_6, struct mmc_data *VAR_7)
{
 const char *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_11 = !(VAR_7->flags & VAR_0);
 FUNC_0(&VAR_6->dma_timer);
 if (VAR_6->dma_ch >= 0) {
  if (VAR_11 == VAR_6->dma_is_read)
   return 0;
  FUNC_3(VAR_6->dma_ch);
  VAR_6->dma_ch = -1;
 }

 if (VAR_11) {
  if (VAR_6->id == 0) {
   VAR_9 = VAR_3;
   VAR_8 = "MMC1 read";
  } else {
   VAR_9 = VAR_1;
   VAR_8 = "MMC2 read";
  }
 } else {
  if (VAR_6->id == 0) {
   VAR_9 = VAR_4;
   VAR_8 = "MMC1 write";
  } else {
   VAR_9 = VAR_2;
   VAR_8 = "MMC2 write";
  }
 }
 VAR_12 = FUNC_4(VAR_9, VAR_8, VAR_5,
        VAR_6, &VAR_10);
 if (VAR_12 != 0) {
  FUNC_1(FUNC_2(VAR_6->mmc), "omap_request_dma() failed with %d\n", VAR_12);
  return VAR_12;
 }
 VAR_6->dma_ch = VAR_10;
 VAR_6->dma_is_read = VAR_11;

 return 0;
}
