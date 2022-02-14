
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jme_ring {unsigned long dmaalloc; int * bufinf; scalar_t__ dma; int * desc; int * alloc; int nr_free; int next_to_clean; scalar_t__ next_to_use; } ;
struct jme_buffer_info {int dummy; } ;
struct jme_adapter {int tx_ring_size; TYPE_1__* pdev; struct jme_ring* txring; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int,unsigned long*,int ) ;
 int FUNC_4 (int *,int,int *,unsigned long) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct jme_adapter *VAR_3)
{
 struct jme_ring *VAR_4 = &(VAR_3->txring[0]);

 VAR_4->alloc = FUNC_3(&(VAR_3->pdev->dev),
       FUNC_1(VAR_3->tx_ring_size),
       &(VAR_4->dmaalloc),
       VAR_1);

 if (!VAR_4->alloc)
  goto err_set_null;




 VAR_4->desc = (void *)FUNC_0((unsigned long)(VAR_4->alloc),
      VAR_2);
 VAR_4->dma = FUNC_0(VAR_4->dmaalloc, VAR_2);
 VAR_4->next_to_use = 0;
 FUNC_2(&VAR_4->next_to_clean, 0);
 FUNC_2(&VAR_4->nr_free, VAR_3->tx_ring_size);

 VAR_4->bufinf = FUNC_5(sizeof(struct jme_buffer_info) *
     VAR_3->tx_ring_size, VAR_1);
 if (FUNC_7(!(VAR_4->bufinf)))
  goto err_free_txring;




 FUNC_6(VAR_4->alloc, 0, FUNC_1(VAR_3->tx_ring_size));
 FUNC_6(VAR_4->bufinf, 0,
  sizeof(struct jme_buffer_info) * VAR_3->tx_ring_size);

 return 0;

err_free_txring:
 FUNC_4(&(VAR_3->pdev->dev),
     FUNC_1(VAR_3->tx_ring_size),
     VAR_4->alloc,
     VAR_4->dmaalloc);

err_set_null:
 VAR_4->desc = ((void*)0);
 VAR_4->dmaalloc = 0;
 VAR_4->dma = 0;
 VAR_4->bufinf = ((void*)0);

 return -VAR_0;
}
