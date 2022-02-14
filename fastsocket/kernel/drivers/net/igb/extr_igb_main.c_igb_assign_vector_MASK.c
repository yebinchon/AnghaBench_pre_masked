
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {TYPE_3__* ring; } ;
struct TYPE_7__ {TYPE_1__* ring; } ;
struct igb_q_vector {int eims_value; int set_itr; TYPE_4__ tx; TYPE_2__ rx; struct igb_adapter* adapter; } ;
struct TYPE_10__ {int type; } ;
struct e1000_hw {TYPE_5__ mac; } ;
struct igb_adapter {int eims_enable_mask; int msix_entries; struct e1000_hw hw; } ;
struct TYPE_8__ {int reg_idx; } ;
struct TYPE_6__ {int reg_idx; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int) ;







 int FUNC_3 (struct e1000_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct igb_q_vector *VAR_4, int VAR_5)
{
 struct igb_adapter *VAR_6 = VAR_4->adapter;
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 int VAR_8 = VAR_3;
 int VAR_9 = VAR_3;
 u32 VAR_10 = 0;

 if (VAR_4->rx.ring)
  VAR_8 = VAR_4->rx.ring->reg_idx;
 if (VAR_4->tx.ring)
  VAR_9 = VAR_4->tx.ring->reg_idx;

 switch (VAR_7->mac.type) {
 case 134:





  if (VAR_8 > VAR_3)
   VAR_10 = VAR_0 << VAR_8;
  if (VAR_9 > VAR_3)
   VAR_10 |= VAR_1 << VAR_9;
  if (!VAR_6->msix_entries && VAR_5 == 0)
   VAR_10 |= VAR_2;
  FUNC_2(FUNC_1(0), VAR_5, VAR_10);
  VAR_4->eims_value = VAR_10;
  break;
 case 133:





  if (VAR_8 > VAR_3)
   FUNC_3(VAR_7, VAR_5,
           VAR_8 & 0x7,
           (VAR_8 & 0x8) << 1);
  if (VAR_9 > VAR_3)
   FUNC_3(VAR_7, VAR_5,
           VAR_9 & 0x7,
           ((VAR_9 & 0x8) << 1) + 8);
  VAR_4->eims_value = 1 << VAR_5;
  break;
 case 132:
 case 129:
 case 128:
 case 131:
 case 130:






  if (VAR_8 > VAR_3)
   FUNC_3(VAR_7, VAR_5,
           VAR_8 >> 1,
           (VAR_8 & 0x1) << 4);
  if (VAR_9 > VAR_3)
   FUNC_3(VAR_7, VAR_5,
           VAR_9 >> 1,
           ((VAR_9 & 0x1) << 4) + 8);
  VAR_4->eims_value = 1 << VAR_5;
  break;
 default:
  FUNC_0();
  break;
 }


 VAR_6->eims_enable_mask |= VAR_4->eims_value;


 VAR_4->set_itr = 1;
}
