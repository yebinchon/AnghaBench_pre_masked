
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc9420_pdata {scalar_t__ tx_ring_tail; scalar_t__ tx_ring_head; TYPE_2__* tx_buffers; TYPE_1__* tx_ring; int pdev; } ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int mapping; struct sk_buff* skb; } ;
struct TYPE_3__ {scalar_t__ buffer2; scalar_t__ buffer1; scalar_t__ length; scalar_t__ status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct smsc9420_pdata *VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_2->tx_ring);

 if (!VAR_2->tx_buffers)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct sk_buff *VAR_4 = VAR_2->tx_buffers[VAR_3].skb;

  if (VAR_4) {
   FUNC_0(!VAR_2->tx_buffers[VAR_3].mapping);
   FUNC_3(VAR_2->pdev, VAR_2->tx_buffers[VAR_3].mapping,
      VAR_4->len, VAR_0);
   FUNC_1(VAR_4);
  }

  VAR_2->tx_ring[VAR_3].status = 0;
  VAR_2->tx_ring[VAR_3].length = 0;
  VAR_2->tx_ring[VAR_3].buffer1 = 0;
  VAR_2->tx_ring[VAR_3].buffer2 = 0;
 }
 FUNC_4();

 FUNC_2(VAR_2->tx_buffers);
 VAR_2->tx_buffers = ((void*)0);

 VAR_2->tx_ring_head = 0;
 VAR_2->tx_ring_tail = 0;
}
