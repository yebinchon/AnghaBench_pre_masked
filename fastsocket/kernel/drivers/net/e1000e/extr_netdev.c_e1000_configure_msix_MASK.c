
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_ring {int itr_val; int ims_val; scalar_t__ itr_register; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {scalar_t__ hw_addr; TYPE_1__ mac; } ;
struct e1000_adapter {int eiac_mask; struct e1000_ring* tx_ring; struct e1000_ring* rx_ring; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_13)
{
 struct e1000_hw *VAR_14 = &VAR_13->hw;
 struct e1000_ring *VAR_15 = VAR_13->rx_ring;
 struct e1000_ring *VAR_16 = VAR_13->tx_ring;
 int VAR_17 = 0;
 u32 VAR_18, VAR_19 = 0;

 VAR_13->eiac_mask = 0;


 if (VAR_14->mac.type == VAR_12) {
  u32 VAR_20 = FUNC_2(VAR_11);
  VAR_20 |= VAR_8;
  FUNC_3(VAR_11, VAR_20);
 }


 VAR_15->ims_val = VAR_5;
 VAR_13->eiac_mask |= VAR_15->ims_val;
 if (VAR_15->itr_val)
  FUNC_4(1000000000 / (VAR_15->itr_val * 256),
         VAR_15->itr_register);
 else
  FUNC_4(1, VAR_15->itr_register);
 VAR_19 = VAR_7 | VAR_17;


 VAR_16->ims_val = VAR_6;
 VAR_17++;
 if (VAR_16->itr_val)
  FUNC_4(1000000000 / (VAR_16->itr_val * 256),
         VAR_16->itr_register);
 else
  FUNC_4(1, VAR_16->itr_register);
 VAR_13->eiac_mask |= VAR_16->ims_val;
 VAR_19 |= ((VAR_7 | VAR_17) << 8);


 VAR_17++;
 VAR_19 |= ((VAR_7 | VAR_17) << 16);
 if (VAR_15->itr_val)
  FUNC_4(1000000000 / (VAR_15->itr_val * 256),
         VAR_14->hw_addr + FUNC_0(VAR_17));
 else
  FUNC_4(1, VAR_14->hw_addr + FUNC_0(VAR_17));


 VAR_19 |= (1 << 31);

 FUNC_3(VAR_10, VAR_19);


 VAR_18 = FUNC_2(VAR_0);
 VAR_18 |= VAR_2;


 FUNC_3(VAR_9, ~VAR_3 | VAR_4);
 VAR_18 |= VAR_1;
 FUNC_3(VAR_0, VAR_18);
 FUNC_1();
}
