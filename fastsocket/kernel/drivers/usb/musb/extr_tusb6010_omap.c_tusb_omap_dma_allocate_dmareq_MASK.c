
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tusb_omap_dma_ch {int epnum; int dmareq; int sync_dev; int tbase; scalar_t__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct tusb_omap_dma_ch *VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_9->tbase, VAR_8);
 int VAR_11, VAR_12 = -1;

 const int VAR_13[6] = {
  VAR_6,
  VAR_7,
  VAR_2,
  VAR_3,
  VAR_4,
  VAR_5,
 };

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  int VAR_14 = (VAR_10 & (0xf << (VAR_11 * 5))) >> (VAR_11 * 5);
  if (VAR_14 == 0) {
   VAR_12 = VAR_11;
   break;
  }
 }

 if (VAR_12 == -1)
  return -VAR_0;

 VAR_10 |= (VAR_9->epnum << (VAR_12 * 5));
 if (VAR_9->tx)
  VAR_10 |= ((1 << 4) << (VAR_12 * 5));
 FUNC_1(VAR_9->tbase, VAR_8, VAR_10);

 VAR_9->dmareq = VAR_12;
 VAR_9->sync_dev = VAR_13[VAR_9->dmareq];

 return 0;
}
