
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* set_rar ) (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_4__ {int flags; int wwpn_prefix; int wwnn_prefix; TYPE_1__ ops; scalar_t__ num_rar_entries; scalar_t__ san_mac_rar_index; int san_addr; int perm_addr; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*) ;
 int FUNC_11 (struct ixgbe_hw*,int ) ;
 int FUNC_12 (struct ixgbe_hw*,scalar_t__,int ,int ,int ) ;
 int FUNC_13 (struct ixgbe_hw*,int *,int *) ;
 int FUNC_14 (int) ;

__attribute__((used)) static s32 FUNC_15(struct ixgbe_hw *VAR_8)
{
 s32 VAR_9;
 u32 VAR_10, VAR_11;


 VAR_9 = VAR_8->mac.ops.stop_adapter(VAR_8);
 if (VAR_9 != 0)
  goto reset_hw_out;


 FUNC_6(VAR_8);

mac_reset_top:
 VAR_10 = VAR_1;
 VAR_10 |= FUNC_0(VAR_8, VAR_0);
 FUNC_3(VAR_8, VAR_0, VAR_10);
 FUNC_2(VAR_8);


 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  FUNC_14(1);
  VAR_10 = FUNC_0(VAR_8, VAR_0);
  if (!(VAR_10 & VAR_2))
   break;
 }

 if (VAR_10 & VAR_2) {
  VAR_9 = VAR_3;
  FUNC_4(VAR_8, "Reset polling failed to complete.\n");
 }
 FUNC_7(100);






 if (VAR_8->mac.flags & VAR_4) {
  VAR_8->mac.flags &= ~VAR_4;
  goto mac_reset_top;
 }


 FUNC_3(VAR_8, FUNC_1(0), 384 << VAR_6);


 VAR_8->mac.ops.get_mac_addr(VAR_8, VAR_8->mac.perm_addr);






 VAR_8->mac.num_rar_entries = VAR_7;
 VAR_8->mac.ops.init_rx_addrs(VAR_8);


 VAR_8->mac.ops.get_san_mac_addr(VAR_8, VAR_8->mac.san_addr);


 if (FUNC_5(VAR_8->mac.san_addr)) {
  VAR_8->mac.ops.set_rar(VAR_8, VAR_8->mac.num_rar_entries - 1,
                      VAR_8->mac.san_addr, 0, VAR_5);


  VAR_8->mac.san_mac_rar_index = VAR_8->mac.num_rar_entries - 1;


  VAR_8->mac.num_rar_entries--;
 }


 VAR_8->mac.ops.get_wwn_prefix(VAR_8, &VAR_8->mac.wwnn_prefix,
                            &VAR_8->mac.wwpn_prefix);

reset_hw_out:
 return VAR_9;
}
