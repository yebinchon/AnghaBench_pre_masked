
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* init_hw ) (struct ixgbe_hw*) ;int (* set_vmdq_san_mac ) (struct ixgbe_hw*,int ) ;int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; scalar_t__ san_mac_rar_index; int addr; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags2; int state; int flags; struct ixgbe_hw hw; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int ,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int,int) ;

void FUNC_11(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 int VAR_8;


 while (FUNC_8(VAR_4, &VAR_6->state))
  FUNC_10(1000, 2000);


 VAR_6->flags2 &= ~(VAR_0 |
        VAR_1);
 VAR_6->flags &= ~VAR_2;

 VAR_8 = VAR_7->mac.ops.init_hw(VAR_7);
 switch (VAR_8) {
 case 0:
 case 129:
 case 128:
  break;
 case 130:
  FUNC_2("master disable timed out\n");
  break;
 case 131:

  FUNC_3("This device is a pre-production adapter/LOM. "
      "Please be aware there may be issues associated with "
      "your hardware.  If you are experiencing problems "
      "please contact your Intel or hardware "
      "representative who provided you with this "
      "hardware.\n");
  break;
 default:
  FUNC_2("Hardware Error: %d\n", VAR_8);
 }

 FUNC_1(VAR_4, &VAR_6->state);


 VAR_7->mac.ops.set_rar(VAR_7, 0, VAR_7->mac.addr, FUNC_0(0), VAR_3);


 if (VAR_7->mac.san_mac_rar_index)
  VAR_7->mac.ops.set_vmdq_san_mac(VAR_7, FUNC_0(0));





}
