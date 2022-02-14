
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct igb_ring {int queue_index; int count; int flags; struct igb_q_vector* q_vector; int netdev; int * dev; } ;
struct TYPE_8__ {int work_limit; } ;
struct igb_q_vector {int itr_val; TYPE_4__ rx; TYPE_4__ tx; struct igb_ring* ring; scalar_t__ itr_register; struct igb_adapter* adapter; int napi; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_2__ mac; scalar_t__ hw_addr; } ;
struct igb_adapter {int rx_itr_setting; int tx_itr_setting; struct igb_ring** rx_ring; int rx_ring_count; TYPE_3__ hw; int netdev; TYPE_1__* pdev; struct igb_ring** tx_ring; int tx_ring_count; int tx_work_limit; struct igb_q_vector** q_vector; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct igb_ring*,TYPE_4__*) ;
 int VAR_10 ;
 struct igb_q_vector* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct igb_adapter *VAR_11,
         int VAR_12, int VAR_13,
         int VAR_14, int VAR_15,
         int VAR_16, int VAR_17)
{
 struct igb_q_vector *VAR_18;
 struct igb_ring *VAR_19;
 int VAR_20, VAR_21;


 if (VAR_14 > 1 || VAR_16 > 1)
  return -VAR_0;

 VAR_20 = VAR_14 + VAR_16;
 VAR_21 = sizeof(struct igb_q_vector) +
        (sizeof(struct igb_ring) * VAR_20);


 VAR_18 = FUNC_2(VAR_21, VAR_1);
 if (!VAR_18)
  return -VAR_0;


 FUNC_3(VAR_11->netdev, &VAR_18->napi,
         VAR_10, 64);


 VAR_11->q_vector[VAR_13] = VAR_18;
 VAR_18->adapter = VAR_11;


 VAR_18->tx.work_limit = VAR_11->tx_work_limit;


 VAR_18->itr_register = VAR_11->hw.hw_addr + FUNC_0(0);
 VAR_18->itr_val = VAR_6;


 VAR_19 = VAR_18->ring;


 if (VAR_16) {

  if (!VAR_11->rx_itr_setting || VAR_11->rx_itr_setting > 3)
   VAR_18->itr_val = VAR_11->rx_itr_setting;
 } else {

  if (!VAR_11->tx_itr_setting || VAR_11->tx_itr_setting > 3)
   VAR_18->itr_val = VAR_11->tx_itr_setting;
 }

 if (VAR_14) {

  VAR_19->dev = &VAR_11->pdev->dev;
  VAR_19->netdev = VAR_11->netdev;


  VAR_19->q_vector = VAR_18;


  FUNC_1(VAR_19, &VAR_18->tx);


  if (VAR_11->hw.mac.type == VAR_7)
   FUNC_4(VAR_5, &VAR_19->flags);


  VAR_19->count = VAR_11->tx_ring_count;
  VAR_19->queue_index = VAR_15;


  VAR_11->tx_ring[VAR_15] = VAR_19;


  VAR_19++;
 }

 if (VAR_16) {

  VAR_19->dev = &VAR_11->pdev->dev;
  VAR_19->netdev = VAR_11->netdev;


  VAR_19->q_vector = VAR_18;


  FUNC_1(VAR_19, &VAR_18->rx);


  FUNC_4(VAR_2, &VAR_19->flags);


  if (VAR_11->hw.mac.type >= VAR_8)
   FUNC_4(VAR_4, &VAR_19->flags);





  if (VAR_11->hw.mac.type >= VAR_9)
   FUNC_4(VAR_3, &VAR_19->flags);


  VAR_19->count = VAR_11->rx_ring_count;
  VAR_19->queue_index = VAR_17;


  VAR_11->rx_ring[VAR_17] = VAR_19;
 }

 return 0;
}
