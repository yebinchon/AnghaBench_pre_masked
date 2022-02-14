
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags2; int interrupt_event; int state; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;


 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_7, u32 VAR_8)
{
 if (!(VAR_7->flags2 & VAR_3))
  return;

 switch (VAR_7->hw.mac.type) {
 case 129:




  if (((VAR_8 & VAR_0) || (VAR_8 & VAR_1)) &&
      (!FUNC_2(VAR_5, &VAR_7->state))) {
   VAR_7->interrupt_event = VAR_8;
   VAR_7->flags2 |= VAR_4;
   FUNC_1(VAR_7);
   return;
  }
  return;
 case 128:
  if (!(VAR_8 & VAR_2))
   return;
  break;
 default:
  return;
 }

 FUNC_0(VAR_6,
        "Network adapter has been stopped because it has over heated. "
        "Restart the computer. If the problem persists, "
        "power off the system and replace the adapter\n");
}
