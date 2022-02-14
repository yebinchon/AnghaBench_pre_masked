
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct igb_q_vector {int napi; } ;
struct TYPE_3__ {int doosync; } ;
struct TYPE_4__ {int get_link_status; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct igb_adapter {int ptp_tx_work; int watchdog_timer; int state; TYPE_1__ stats; int reset_task; struct e1000_hw hw; struct igb_q_vector** q_vector; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct igb_q_vector*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_11, void *VAR_12)
{
 struct igb_adapter *VAR_13 = VAR_12;
 struct igb_q_vector *VAR_14 = VAR_13->q_vector[0];
 struct e1000_hw *VAR_15 = &VAR_13->hw;

 u32 VAR_16 = FUNC_3(VAR_0);

 FUNC_0(VAR_14);

 if (VAR_16 & VAR_2)
  FUNC_4(&VAR_13->reset_task);

 if (VAR_16 & VAR_1) {

  VAR_13->stats.doosync++;
 }

 if (VAR_16 & (VAR_4 | VAR_3)) {
  VAR_15->mac.get_link_status = 1;
  if (!FUNC_5(VAR_9, &VAR_13->state))
   FUNC_1(&VAR_13->watchdog_timer, VAR_10 + 1);
 }

 if (VAR_16 & VAR_5) {
  u32 VAR_17 = FUNC_3(VAR_6);

  if (VAR_17 & VAR_7) {

   FUNC_6(VAR_6, VAR_7);

   FUNC_4(&VAR_13->ptp_tx_work);
  }
 }

 FUNC_2(&VAR_14->napi);

 return VAR_8;
}
