
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_ring {unsigned long dmaalloc; int * bufinf; scalar_t__ dma; int * desc; scalar_t__ alloc; int next_to_clean; scalar_t__ next_to_use; } ;
struct jme_buffer_info {int dummy; } ;
struct jme_adapter {int rx_ring_size; TYPE_1__* pdev; struct jme_ring* rxring; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,unsigned long*,int ) ;
 int FUNC_4 (int *,int ,scalar_t__,unsigned long) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*,int) ;
 int FUNC_7 (struct jme_adapter*,int) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int ,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct jme_adapter *VAR_3)
{
 int VAR_4;
 struct jme_ring *VAR_5 = &(VAR_3->rxring[0]);

 VAR_5->alloc = FUNC_3(&(VAR_3->pdev->dev),
       FUNC_1(VAR_3->rx_ring_size),
       &(VAR_5->dmaalloc),
       VAR_1);
 if (!VAR_5->alloc)
  goto err_set_null;




 VAR_5->desc = (void *)FUNC_0((unsigned long)(VAR_5->alloc),
      VAR_2);
 VAR_5->dma = FUNC_0(VAR_5->dmaalloc, VAR_2);
 VAR_5->next_to_use = 0;
 FUNC_2(&VAR_5->next_to_clean, 0);

 VAR_5->bufinf = FUNC_8(sizeof(struct jme_buffer_info) *
     VAR_3->rx_ring_size, VAR_1);
 if (FUNC_10(!(VAR_5->bufinf)))
  goto err_free_rxring;




 FUNC_9(VAR_5->bufinf, 0,
  sizeof(struct jme_buffer_info) * VAR_3->rx_ring_size);
 for (VAR_4 = 0 ; VAR_4 < VAR_3->rx_ring_size ; ++VAR_4) {
  if (FUNC_10(FUNC_6(VAR_3, VAR_4))) {
   FUNC_5(VAR_3);
   return -VAR_0;
  }

  FUNC_7(VAR_3, VAR_4);
 }

 return 0;

err_free_rxring:
 FUNC_4(&(VAR_3->pdev->dev),
     FUNC_1(VAR_3->rx_ring_size),
     VAR_5->alloc,
     VAR_5->dmaalloc);
err_set_null:
 VAR_5->desc = ((void*)0);
 VAR_5->dmaalloc = 0;
 VAR_5->dma = 0;
 VAR_5->bufinf = ((void*)0);

 return -VAR_0;
}
