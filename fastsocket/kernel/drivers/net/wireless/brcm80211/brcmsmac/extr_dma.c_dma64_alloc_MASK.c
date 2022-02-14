
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u16 ;
struct dma_info {scalar_t__ ntxd; scalar_t__ nrxd; int dmadesc_align; scalar_t__ rxdalloc; scalar_t__ rxdalign; scalar_t__ rxdpaorig; scalar_t__ rxdpa; struct dma64desc* rxd64; int name; int core; scalar_t__ txdalloc; scalar_t__ txdalign; scalar_t__ txdpaorig; scalar_t__ txdpa; struct dma64desc* txd64; } ;
struct dma64desc {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (struct dma_info*,int ,int,int*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (unsigned long,int) ;

__attribute__((used)) static bool FUNC_3(struct dma_info *VAR_2, uint VAR_3)
{
 u16 VAR_4;
 uint VAR_5;
 void *VAR_6;
 uint VAR_7 = 0;
 u16 VAR_8;
 u16 VAR_9;

 VAR_5 = sizeof(struct dma64desc);

 VAR_4 = (VAR_3 == VAR_1) ? (VAR_2->ntxd * VAR_5) : (VAR_2->nrxd * VAR_5);
 VAR_9 = VAR_2->dmadesc_align;
 VAR_8 = (1 << VAR_9);

 if (VAR_3 == VAR_1) {
  VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_4, &VAR_9,
   &VAR_7, &VAR_2->txdpaorig);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_2->core,
          "%s: DMA_ALLOC_CONSISTENT(ntxd) failed\n",
          VAR_2->name);
   return 0;
  }
  VAR_8 = (1 << VAR_9);
  VAR_2->txd64 = (struct dma64desc *)
     FUNC_2((unsigned long)VAR_6, VAR_8);
  VAR_2->txdalign = (uint) ((s8 *)VAR_2->txd64 - (s8 *) VAR_6);
  VAR_2->txdpa = VAR_2->txdpaorig + VAR_2->txdalign;
  VAR_2->txdalloc = VAR_7;
 } else {
  VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_4, &VAR_9,
   &VAR_7, &VAR_2->rxdpaorig);
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_2->core,
          "%s: DMA_ALLOC_CONSISTENT(nrxd) failed\n",
          VAR_2->name);
   return 0;
  }
  VAR_8 = (1 << VAR_9);
  VAR_2->rxd64 = (struct dma64desc *)
     FUNC_2((unsigned long)VAR_6, VAR_8);
  VAR_2->rxdalign = (uint) ((s8 *)VAR_2->rxd64 - (s8 *) VAR_6);
  VAR_2->rxdpa = VAR_2->rxdpaorig + VAR_2->rxdalign;
  VAR_2->rxdalloc = VAR_7;
 }

 return 1;
}
