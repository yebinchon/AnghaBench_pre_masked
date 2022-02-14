
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_rx_queue {int lock; scalar_t__ free_count; scalar_t__ write; scalar_t__ read; int rx_used; TYPE_1__* pool; int rx_free; } ;
struct ipw_priv {int pci_dev; } ;
struct TYPE_2__ {int list; int * skb; int dma_addr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ipw_priv *VAR_4,
          struct ipw_rx_queue *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_4(&VAR_5->lock, VAR_6);

 FUNC_0(&VAR_5->rx_free);
 FUNC_0(&VAR_5->rx_used);


 for (VAR_7 = 0; VAR_7 < VAR_2 + VAR_3; VAR_7++) {


  if (VAR_5->pool[VAR_7].skb != ((void*)0)) {
   FUNC_3(VAR_4->pci_dev, VAR_5->pool[VAR_7].dma_addr,
      VAR_0, VAR_1);
   FUNC_1(VAR_5->pool[VAR_7].skb);
   VAR_5->pool[VAR_7].skb = ((void*)0);
  }
  FUNC_2(&VAR_5->pool[VAR_7].list, &VAR_5->rx_used);
 }



 VAR_5->read = VAR_5->write = 0;
 VAR_5->free_count = 0;
 FUNC_5(&VAR_5->lock, VAR_6);
}
