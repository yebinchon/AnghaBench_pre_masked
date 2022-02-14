
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_rx_queue {int lock; scalar_t__ free_count; scalar_t__ write_actual; scalar_t__ write; scalar_t__ read; int ** queue; int rx_used; TYPE_2__* pool; int rx_free; } ;
struct TYPE_3__ {int rx_page_order; } ;
struct il_priv {TYPE_1__ hw_params; int pci_dev; } ;
struct TYPE_4__ {int list; int * page; int page_dma; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct il_priv *VAR_4, struct il_rx_queue *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 FUNC_4(&VAR_5->lock, VAR_6);
 FUNC_0(&VAR_5->rx_free);
 FUNC_0(&VAR_5->rx_used);

 for (VAR_7 = 0; VAR_7 < VAR_2 + VAR_3; VAR_7++) {


  if (VAR_5->pool[VAR_7].page != ((void*)0)) {
   FUNC_3(VAR_4->pci_dev, VAR_5->pool[VAR_7].page_dma,
           VAR_0 << VAR_4->hw_params.rx_page_order,
           VAR_1);
   FUNC_1(VAR_4, VAR_5->pool[VAR_7].page);
   VAR_5->pool[VAR_7].page = ((void*)0);
  }
  FUNC_2(&VAR_5->pool[VAR_7].list, &VAR_5->rx_used);
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_5->queue[VAR_7] = ((void*)0);



 VAR_5->read = VAR_5->write = 0;
 VAR_5->write_actual = 0;
 VAR_5->free_count = 0;
 FUNC_5(&VAR_5->lock, VAR_6);
}
