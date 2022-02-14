
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; int features; } ;
struct TYPE_5__ {int (* update_mc_addr_list ) (struct ixgbe_hw*,struct net_device*) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {int user_set_promisc; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ addr_ctrl; } ;
struct ixgbe_adapter {int flags; scalar_t__ num_vfs; struct ixgbe_hw hw; } ;


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
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_15 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 int FUNC_9 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct ixgbe_hw*,struct net_device*) ;

void FUNC_12(struct net_device *VAR_17)
{
 struct ixgbe_adapter *VAR_18 = FUNC_10(VAR_17);
 struct ixgbe_hw *VAR_19 = &VAR_18->hw;
 u32 VAR_20, VAR_21 = VAR_11 | VAR_10;
 int VAR_22;



 VAR_20 = FUNC_0(VAR_19, VAR_2);


 VAR_20 |= VAR_3;
 VAR_20 |= VAR_4;
 VAR_20 |= VAR_6;


 VAR_20 &= ~(VAR_7 | VAR_5);

 if (VAR_17->flags & VAR_1) {
  VAR_19->addr_ctrl.user_set_promisc = 1;
  VAR_20 |= (VAR_7 | VAR_5);
  VAR_21 |= (VAR_14 | VAR_12);




  if (!(VAR_18->flags & (VAR_9 |
     VAR_8)))
   FUNC_5(VAR_18);
  else
   FUNC_6(VAR_18);
 } else {
  if (VAR_17->flags & VAR_0) {
   VAR_20 |= VAR_5;
   VAR_21 |= VAR_12;
  }
  FUNC_6(VAR_18);
  VAR_19->addr_ctrl.user_set_promisc = 0;
 }






 VAR_22 = FUNC_9(VAR_17);
 if (VAR_22 < 0) {
  VAR_20 |= VAR_7;
  VAR_21 |= VAR_14;
 }





 VAR_19->mac.ops.update_mc_addr_list(VAR_19, VAR_17);
 VAR_21 |= VAR_13;

 if (VAR_18->num_vfs)
  FUNC_4(VAR_18);

 if (VAR_19->mac.type != VAR_16) {
  VAR_21 |= FUNC_0(VAR_19, FUNC_1(FUNC_3(0))) &
    ~(VAR_12 | VAR_13 |
      VAR_14);
  FUNC_2(VAR_19, FUNC_1(FUNC_3(0)), VAR_21);
 }

 FUNC_2(VAR_19, VAR_2, VAR_20);

 if (VAR_17->features & VAR_15)
  FUNC_8(VAR_18);
 else
  FUNC_7(VAR_18);
}
