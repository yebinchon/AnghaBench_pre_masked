
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ptp_clock_event {int type; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int ptp_clock; struct ixgbe_hw hw; } ;


 int VAR_0 ;

 int FUNC_0 (int ,struct ptp_clock_event*) ;

void FUNC_1(struct ixgbe_adapter *VAR_1, u32 VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 struct ptp_clock_event VAR_4;

 VAR_4.type = VAR_0;





 if (!VAR_1->ptp_clock)
  return;

 switch (VAR_3->mac.type) {
 case 128:
  FUNC_0(VAR_1->ptp_clock, &VAR_4);
  break;
 default:
  break;
 }
}
