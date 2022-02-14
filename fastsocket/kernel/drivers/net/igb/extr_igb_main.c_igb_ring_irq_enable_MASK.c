
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ring; } ;
struct igb_q_vector {int eims_value; TYPE_1__ rx; struct igb_adapter* adapter; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int rx_itr_setting; int tx_itr_setting; int num_q_vectors; scalar_t__ msix_entries; int state; int vf_data; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct igb_adapter*) ;
 int FUNC_1 (struct igb_q_vector*) ;
 int FUNC_2 (struct igb_q_vector*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct igb_q_vector *VAR_2)
{
 struct igb_adapter *VAR_3 = VAR_2->adapter;
 struct e1000_hw *VAR_4 = &VAR_3->hw;

 if ((VAR_2->rx.ring && (VAR_3->rx_itr_setting & 3)) ||
     (!VAR_2->rx.ring && (VAR_3->tx_itr_setting & 3))) {
  if ((VAR_3->num_q_vectors == 1) && !VAR_3->vf_data)
   FUNC_1(VAR_2);
  else
   FUNC_2(VAR_2);
 }

 if (!FUNC_3(VAR_1, &VAR_3->state)) {
  if (VAR_3->msix_entries)
   FUNC_4(VAR_0, VAR_2->eims_value);
  else
   FUNC_0(VAR_3);
 }
}
