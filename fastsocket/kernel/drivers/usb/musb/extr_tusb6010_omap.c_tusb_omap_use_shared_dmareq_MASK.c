
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tusb_omap_dma_ch {int epnum; int tbase; scalar_t__ tx; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct tusb_omap_dma_ch *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2->tbase, VAR_1);

 if (VAR_3 != 0) {
  FUNC_0(3, "ep%i dmareq0 is busy for ep%i\n",
   VAR_2->epnum, VAR_3 & 0xf);
  return -VAR_0;
 }

 if (VAR_2->tx)
  VAR_3 = (1 << 4) | VAR_2->epnum;
 else
  VAR_3 = VAR_2->epnum;

 FUNC_2(VAR_2->tbase, VAR_1, VAR_3);

 return 0;
}
