
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ixgbe_ring_feature {int offset; int indices; } ;
struct ixgbe_ring {int queue_index; int count; int state; struct ixgbe_q_vector* q_vector; TYPE_4__* netdev; int * dev; } ;
struct TYPE_10__ {int work_limit; } ;
struct ixgbe_q_vector {int numa_node; int cpu; int v_idx; int itr; TYPE_5__ rx; TYPE_5__ tx; struct ixgbe_ring* ring; struct ixgbe_adapter* adapter; int napi; int affinity_mask; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int tx_itr_setting; int rx_itr_setting; struct ixgbe_ring** rx_ring; int rx_ring_count; struct ixgbe_ring_feature* ring_feature; TYPE_4__* netdev; TYPE_3__ hw; TYPE_1__* pdev; struct ixgbe_ring** tx_ring; int tx_ring_count; int tx_work_limit; struct ixgbe_q_vector** q_vector; } ;
struct TYPE_9__ {int features; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct ixgbe_ring*,TYPE_5__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct ixgbe_q_vector* FUNC_4 (int,int ) ;
 struct ixgbe_q_vector* FUNC_5 (int,int ,int) ;
 int FUNC_6 (TYPE_4__*,int *,int ,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ixgbe_adapter *VAR_11,
    int VAR_12, int VAR_13,
    int VAR_14, int VAR_15,
    int VAR_16, int VAR_17)
{
 struct ixgbe_q_vector *VAR_18;
 struct ixgbe_ring *VAR_19;
 int VAR_20 = -1;
 int VAR_21 = -1;
 int VAR_22, VAR_23;

 VAR_22 = VAR_14 + VAR_16;
 VAR_23 = sizeof(struct ixgbe_q_vector) +
        (sizeof(struct ixgbe_ring) * VAR_22);


 if (VAR_11->flags & VAR_4) {
  if (FUNC_0(VAR_13)) {
   VAR_21 = VAR_13;
   VAR_20 = FUNC_1(VAR_21);
  }
 }


 VAR_18 = FUNC_5(VAR_23, VAR_1, VAR_20);
 if (!VAR_18)
  VAR_18 = FUNC_4(VAR_23, VAR_1);
 if (!VAR_18)
  return -VAR_0;


 if (VAR_21 != -1)
  FUNC_2(VAR_21, &VAR_18->affinity_mask);
 VAR_18->numa_node = VAR_20;







 FUNC_6(VAR_11->netdev, &VAR_18->napi,
         VAR_10, 64);


 VAR_11->q_vector[VAR_13] = VAR_18;
 VAR_18->adapter = VAR_11;
 VAR_18->v_idx = VAR_13;


 VAR_18->tx.work_limit = VAR_11->tx_work_limit;


 VAR_19 = VAR_18->ring;


 if (VAR_14 && !VAR_16) {

  if (VAR_11->tx_itr_setting == 1)
   VAR_18->itr = VAR_2;
  else
   VAR_18->itr = VAR_11->tx_itr_setting;
 } else {

  if (VAR_11->rx_itr_setting == 1)
   VAR_18->itr = VAR_3;
  else
   VAR_18->itr = VAR_11->rx_itr_setting;
 }

 while (VAR_14) {

  VAR_19->dev = &VAR_11->pdev->dev;
  VAR_19->netdev = VAR_11->netdev;


  VAR_19->q_vector = VAR_18;


  FUNC_3(VAR_19, &VAR_18->tx);


  VAR_19->count = VAR_11->tx_ring_count;
  VAR_19->queue_index = VAR_15;


  VAR_11->tx_ring[VAR_15] = VAR_19;


  VAR_14--;
  VAR_15 += VAR_12;


  VAR_19++;
 }

 while (VAR_16) {

  VAR_19->dev = &VAR_11->pdev->dev;
  VAR_19->netdev = VAR_11->netdev;


  VAR_19->q_vector = VAR_18;


  FUNC_3(VAR_19, &VAR_18->rx);





  if (VAR_11->hw.mac.type == VAR_9)
   FUNC_7(VAR_7, &VAR_19->state);
  VAR_19->count = VAR_11->rx_ring_count;
  VAR_19->queue_index = VAR_17;


  VAR_11->rx_ring[VAR_17] = VAR_19;


  VAR_16--;
  VAR_17 += VAR_12;


  VAR_19++;
 }

 return 0;
}
