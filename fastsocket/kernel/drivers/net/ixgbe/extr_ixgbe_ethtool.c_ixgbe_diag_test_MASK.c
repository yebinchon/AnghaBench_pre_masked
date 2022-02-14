
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* disable_tx_laser ) (struct ixgbe_hw*) ;int (* enable_tx_laser ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int flags; int num_vfs; int state; TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct ethtool_test {int flags; } ;
struct TYPE_4__ {scalar_t__ clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_7 (struct ixgbe_adapter*,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_adapter*,int*) ;
 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (int) ;
 struct ixgbe_adapter* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,char*,char*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct ixgbe_hw*) ;
 int FUNC_16 (struct ixgbe_hw*) ;
 int FUNC_17 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_18(struct net_device *VAR_5,
                            struct ethtool_test *VAR_6, u64 *VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_11(VAR_5);
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;
 bool VAR_10 = FUNC_13(VAR_5);

 FUNC_14(VAR_4, &VAR_8->state);
 if (VAR_6->flags == VAR_1) {
  if (VAR_8->flags & VAR_2) {
   int VAR_11;
   for (VAR_11 = 0; VAR_11 < VAR_8->num_vfs; VAR_11++) {
    if (VAR_8->vfinfo[VAR_11].clear_to_send) {
     FUNC_12(VAR_5, "%s",
          "offline diagnostic is not "
          "supported when VFs are "
          "present\n");
     VAR_7[0] = 1;
     VAR_7[1] = 1;
     VAR_7[2] = 1;
     VAR_7[3] = 1;
     VAR_6->flags |= VAR_0;
     FUNC_0(VAR_4,
        &VAR_8->state);
     goto skip_ol_tests;
    }
   }
  }


  FUNC_3(VAR_9, "offline testing starting\n");

  if (VAR_10)

   FUNC_1(VAR_5);


  if (VAR_9->mac.ops.enable_tx_laser)
   VAR_9->mac.ops.enable_tx_laser(VAR_9);




  if (FUNC_6(VAR_8, &VAR_7[4]))
   VAR_6->flags |= VAR_0;

  FUNC_9(VAR_8);
  FUNC_3(VAR_9, "register testing starting\n");
  if (FUNC_8(VAR_8, &VAR_7[0]))
   VAR_6->flags |= VAR_0;

  FUNC_9(VAR_8);
  FUNC_3(VAR_9, "eeprom testing starting\n");
  if (FUNC_4(VAR_8, &VAR_7[1]))
   VAR_6->flags |= VAR_0;

  FUNC_9(VAR_8);
  FUNC_3(VAR_9, "interrupt testing starting\n");
  if (FUNC_5(VAR_8, &VAR_7[2]))
   VAR_6->flags |= VAR_0;



  if (VAR_8->flags & (VAR_2 |
          VAR_3)) {
   FUNC_3(VAR_9, "Skip MAC loopback diagnostic in VT "
          "mode\n");
   VAR_7[3] = 0;
   goto skip_loopback;
  }

  FUNC_9(VAR_8);
  FUNC_3(VAR_9, "loopback testing starting\n");
  if (FUNC_7(VAR_8, &VAR_7[3]))
   VAR_6->flags |= VAR_0;

skip_loopback:
  FUNC_9(VAR_8);


  FUNC_0(VAR_4, &VAR_8->state);
  if (VAR_10)
   FUNC_2(VAR_5);
 } else {
  FUNC_3(VAR_9, "online testing starting\n");


  if (!VAR_10 && VAR_9->mac.ops.enable_tx_laser)
   VAR_9->mac.ops.enable_tx_laser(VAR_9);


  if (FUNC_6(VAR_8, &VAR_7[4]))
   VAR_6->flags |= VAR_0;


  VAR_7[0] = 0;
  VAR_7[1] = 0;
  VAR_7[2] = 0;
  VAR_7[3] = 0;

  FUNC_0(VAR_4, &VAR_8->state);
 }


 if (!VAR_10 && VAR_9->mac.ops.disable_tx_laser)
  VAR_9->mac.ops.disable_tx_laser(VAR_9);
skip_ol_tests:
 FUNC_10(4 * 1000);
}
