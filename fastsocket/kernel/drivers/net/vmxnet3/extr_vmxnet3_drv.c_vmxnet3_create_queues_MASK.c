
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_9__ {void* size; } ;
struct TYPE_8__ {void* size; } ;
struct TYPE_7__ {void* size; } ;
struct vmxnet3_tx_queue {int stopped; int qid; struct vmxnet3_adapter* adapter; int * shared; TYPE_3__ comp_ring; TYPE_2__ data_ring; TYPE_1__ tx_ring; } ;
struct vmxnet3_rx_queue {struct vmxnet3_adapter* adapter; int * shared; TYPE_5__* rx_ring; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; int netdev; TYPE_6__* rqd_start; struct vmxnet3_rx_queue* rx_queue; TYPE_4__* tqd_start; struct vmxnet3_tx_queue* tx_queue; } ;
struct TYPE_12__ {int ctrl; } ;
struct TYPE_11__ {void* size; } ;
struct TYPE_10__ {int ctrl; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct vmxnet3_adapter*) ;
 int FUNC_3 (struct vmxnet3_rx_queue*,struct vmxnet3_adapter*) ;
 int FUNC_4 (struct vmxnet3_tx_queue*,struct vmxnet3_adapter*) ;
 int FUNC_5 (struct vmxnet3_adapter*) ;

int
FUNC_6(struct vmxnet3_adapter *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 0, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_tx_queues; VAR_5++) {
  struct vmxnet3_tx_queue *VAR_6 = &VAR_0->tx_queue[VAR_5];
  VAR_6->tx_ring.size = VAR_1;
  VAR_6->data_ring.size = VAR_1;
  VAR_6->comp_ring.size = VAR_1;
  VAR_6->shared = &VAR_0->tqd_start[VAR_5].ctrl;
  VAR_6->stopped = 1;
  VAR_6->adapter = VAR_0;
  VAR_6->qid = VAR_5;
  VAR_4 = FUNC_4(VAR_6, VAR_0);




  if (VAR_4)
   goto queue_err;
 }

 VAR_0->rx_queue[0].rx_ring[0].size = VAR_2;
 VAR_0->rx_queue[0].rx_ring[1].size = VAR_3;
 FUNC_2(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_0->num_rx_queues; VAR_5++) {
  struct vmxnet3_rx_queue *VAR_7 = &VAR_0->rx_queue[VAR_5];


  VAR_7->shared = &VAR_0->rqd_start[VAR_5].ctrl;
  VAR_7->adapter = VAR_0;
  VAR_4 = FUNC_3(VAR_7, VAR_0);
  if (VAR_4) {
   if (VAR_5 == 0) {
    FUNC_0(VAR_0->netdev,
        "Could not allocate any rx queues. "
        "Aborting.\n");
    goto queue_err;
   } else {
    FUNC_1(VAR_0->netdev,
         "Number of rx queues changed "
         "to : %d.\n", VAR_5);
    VAR_0->num_rx_queues = VAR_5;
    VAR_4 = 0;
    break;
   }
  }
 }
 return VAR_4;
queue_err:
 FUNC_5(VAR_0);
 return VAR_4;
}
