
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tusb_omap_dma_ch {struct tusb_omap_dma* tusb_dma; } ;
struct tusb_omap_dma {int ch; int dmareq; int sync_dev; int multichannel; } ;
struct dma_channel {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct tusb_omap_dma_ch* FUNC_2 (struct dma_channel*) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_1)
{
 struct tusb_omap_dma_ch *VAR_2 = FUNC_2(VAR_1);
 struct tusb_omap_dma *VAR_3 = VAR_2->tusb_dma;

 if (!VAR_3->multichannel) {
  if (VAR_3->ch >= 0) {
   FUNC_1(VAR_3->ch);
   FUNC_0(VAR_3->ch);
   VAR_3->ch = -1;
  }

  VAR_3->dmareq = -1;
  VAR_3->sync_dev = -1;
 }

 VAR_1->status = VAR_0;

 return 0;
}
