
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int (* check_overtemp ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int*,int*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_4__ phy; TYPE_2__ mac; } ;
struct ixgbe_adapter {int interrupt_event; int flags2; int state; struct ixgbe_hw hw; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int*,int*,int) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9 = VAR_7->interrupt_event;

 if (FUNC_3(VAR_5, &VAR_7->state))
  return;

 if (!(VAR_7->flags2 & VAR_3) &&
     !(VAR_7->flags2 & VAR_4))
  return;

 VAR_7->flags2 &= ~VAR_4;

 switch (VAR_8->device_id) {
 case 128:







  if (!(VAR_9 & VAR_0) &&
      !(VAR_9 & VAR_1))
   return;

  if (!(VAR_9 & VAR_1) && VAR_8->mac.ops.check_link) {
   u32 VAR_10;
   bool VAR_11 = 0;

   VAR_8->mac.ops.check_link(VAR_8, &VAR_10, &VAR_11, 0);

   if (VAR_11)
    return;
  }


  if (VAR_8->phy.ops.check_overtemp(VAR_8) != VAR_2)
   return;

  break;
 default:
  if (!(VAR_9 & VAR_0))
   return;
  break;
 }
 FUNC_0(VAR_6,
        "Network adapter has been stopped because it has over heated. "
        "Restart the computer. If the problem persists, "
        "power off the system and replace the adapter\n");

 VAR_7->interrupt_event = 0;
}
