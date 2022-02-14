
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ next2proc; void* gen; } ;
struct TYPE_4__ {scalar_t__ next2comp; scalar_t__ next2fill; int size; void* gen; } ;
struct vmxnet3_tx_queue {TYPE_1__ comp_ring; TYPE_2__ tx_ring; struct vmxnet3_tx_buf_info* buf_info; } ;
struct vmxnet3_tx_buf_info {scalar_t__ map_type; int * skb; } ;
struct vmxnet3_adapter {int pdev; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct vmxnet3_tx_buf_info*,int ) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_tx_queue *VAR_2,
     struct vmxnet3_adapter *VAR_3)
{
 int VAR_4;

 while (VAR_2->tx_ring.next2comp != VAR_2->tx_ring.next2fill) {
  struct vmxnet3_tx_buf_info *VAR_5;

  VAR_5 = VAR_2->buf_info + VAR_2->tx_ring.next2comp;

  FUNC_3(VAR_5, VAR_3->pdev);
  if (VAR_5->skb) {
   FUNC_1(VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }
  FUNC_2(&VAR_2->tx_ring);
 }


 for (VAR_4 = 0; VAR_4 < VAR_2->tx_ring.size; VAR_4++) {
  FUNC_0(VAR_2->buf_info[VAR_4].skb != ((void*)0) ||
         VAR_2->buf_info[VAR_4].map_type != VAR_1);
 }

 VAR_2->tx_ring.gen = VAR_0;
 VAR_2->tx_ring.next2fill = VAR_2->tx_ring.next2comp = 0;

 VAR_2->comp_ring.gen = VAR_0;
 VAR_2->comp_ring.next2proc = 0;
}
