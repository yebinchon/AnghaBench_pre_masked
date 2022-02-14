
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_ring {int dma; int count; int state; scalar_t__ atr_sample_rate; scalar_t__ atr_count; TYPE_1__* q_vector; scalar_t__ tail; int reg_idx; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_2__ mac; scalar_t__ hw_addr; } ;
struct ixgbe_adapter {int flags; scalar_t__ atr_sample_rate; struct ixgbe_hw hw; } ;
struct TYPE_3__ {int itr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,scalar_t__,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int *) ;
 int VAR_6 ;
 int FUNC_11 (int ,char*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int,int) ;

void FUNC_14(struct ixgbe_adapter *VAR_8,
        struct ixgbe_ring *VAR_9)
{
 struct ixgbe_hw *VAR_10 = &VAR_8->hw;
 u64 VAR_11 = VAR_9->dma;
 int VAR_12 = 10;
 u32 VAR_13 = VAR_3;
 u8 VAR_14 = VAR_9->reg_idx;


 FUNC_9(VAR_10, FUNC_7(VAR_14), 0);
 FUNC_8(VAR_10);

 FUNC_9(VAR_10, FUNC_3(VAR_14),
   (VAR_11 & FUNC_0(32)));
 FUNC_9(VAR_10, FUNC_2(VAR_14), (VAR_11 >> 32));
 FUNC_9(VAR_10, FUNC_5(VAR_14),
   VAR_9->count * sizeof(union ixgbe_adv_tx_desc));
 FUNC_9(VAR_10, FUNC_4(VAR_14), 0);
 FUNC_9(VAR_10, FUNC_6(VAR_14), 0);
 VAR_9->tail = VAR_10->hw_addr + FUNC_6(VAR_14);
 if (!VAR_9->q_vector || (VAR_9->q_vector->itr < 8))
  VAR_13 |= (1 << 16);
 else
  VAR_13 |= (8 << 16);





 VAR_13 |= (1 << 8) |
     32;


 if (VAR_8->flags & VAR_0) {
  VAR_9->atr_sample_rate = VAR_8->atr_sample_rate;
  VAR_9->atr_count = 0;
  FUNC_12(VAR_5, &VAR_9->state);
 } else {
  VAR_9->atr_sample_rate = 0;
 }

 FUNC_10(VAR_4, &VAR_9->state);


 FUNC_9(VAR_10, FUNC_7(VAR_14), VAR_13);


 if (VAR_10->mac.type == VAR_7 &&
     !(FUNC_1(VAR_10, VAR_1) & VAR_2))
  return;


 do {
  FUNC_13(1000, 2000);
  VAR_13 = FUNC_1(VAR_10, FUNC_7(VAR_14));
 } while (--VAR_12 && !(VAR_13 & VAR_3));
 if (!VAR_12)
  FUNC_11(VAR_6, "Could not enable Tx Queue %d\n", VAR_14);
}
