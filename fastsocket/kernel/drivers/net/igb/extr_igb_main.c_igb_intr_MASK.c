
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct igb_q_vector*) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_13, void *VAR_14)
{
 struct igb_adapter *VAR_15 = VAR_14;
 struct igb_q_vector *VAR_16 = VAR_15->q_vector[0];
 struct e1000_hw *VAR_17 = &VAR_15->hw;



 u32 VAR_18 = FUNC_3(VAR_0);




 if (!(VAR_18 & VAR_3))
  return VAR_10;

 FUNC_0(VAR_16);

 if (VAR_18 & VAR_2)
  FUNC_4(&VAR_15->reset_task);

 if (VAR_18 & VAR_1) {

  VAR_15->stats.doosync++;
 }

 if (VAR_18 & (VAR_5 | VAR_4)) {
  VAR_17->mac.get_link_status = 1;

  if (!FUNC_5(VAR_11, &VAR_15->state))
   FUNC_1(&VAR_15->watchdog_timer, VAR_12 + 1);
 }

 if (VAR_18 & VAR_6) {
  u32 VAR_19 = FUNC_3(VAR_7);

  if (VAR_19 & VAR_8) {

   FUNC_6(VAR_7, VAR_8);

   FUNC_4(&VAR_15->ptp_tx_work);
  }
 }

 FUNC_2(&VAR_16->napi);

 return VAR_9;
}
