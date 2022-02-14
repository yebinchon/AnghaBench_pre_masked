
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_ring {int next_to_clean; scalar_t__ next_to_use; int * bufinf; scalar_t__ dma; scalar_t__ dmaalloc; int * desc; int * alloc; } ;
struct jme_adapter {int rx_ring_size; TYPE_1__* pdev; struct jme_ring* rxring; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *,scalar_t__) ;
 int FUNC_3 (struct jme_adapter*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct jme_adapter *VAR_0)
{
 int VAR_1;
 struct jme_ring *VAR_2 = &(VAR_0->rxring[0]);

 if (VAR_2->alloc) {
  if (VAR_2->bufinf) {
   for (VAR_1 = 0 ; VAR_1 < VAR_0->rx_ring_size ; ++VAR_1)
    FUNC_3(VAR_0, VAR_1);
   FUNC_4(VAR_2->bufinf);
  }

  FUNC_2(&(VAR_0->pdev->dev),
      FUNC_0(VAR_0->rx_ring_size),
      VAR_2->alloc,
      VAR_2->dmaalloc);
  VAR_2->alloc = ((void*)0);
  VAR_2->desc = ((void*)0);
  VAR_2->dmaalloc = 0;
  VAR_2->dma = 0;
  VAR_2->bufinf = ((void*)0);
 }
 VAR_2->next_to_use = 0;
 FUNC_1(&VAR_2->next_to_clean, 0);
}
