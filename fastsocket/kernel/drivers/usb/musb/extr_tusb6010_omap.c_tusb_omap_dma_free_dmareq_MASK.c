
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tusb_omap_dma_ch {int dmareq; int sync_dev; int tbase; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct tusb_omap_dma_ch *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1 || VAR_1->dmareq < 0)
  return;

 VAR_2 = FUNC_0(VAR_1->tbase, VAR_0);
 VAR_2 &= ~(0x1f << (VAR_1->dmareq * 5));
 FUNC_1(VAR_1->tbase, VAR_0, VAR_2);

 VAR_1->dmareq = -1;
 VAR_1->sync_dev = -1;
}
