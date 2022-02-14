
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* write_analog_reg8 ) (struct ixgbe_hw*,int ,int) ;int (* read_analog_reg8 ) (struct ixgbe_hw*,int ,int*) ;} ;
struct TYPE_8__ {int flags; int orig_link_settings_stored; int orig_autoc; TYPE_3__ ops; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int reset_disable; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,int ) ;
 int FUNC_10 (struct ixgbe_hw*) ;
 int FUNC_11 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_12 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_13 (struct ixgbe_hw*,int ,int) ;
 int FUNC_14 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_15 (struct ixgbe_hw*,int ,int) ;
 int FUNC_16 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_17 (struct ixgbe_hw*,int ,int) ;
 int FUNC_18 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_19 (int) ;

__attribute__((used)) static s32 FUNC_20(struct ixgbe_hw *VAR_16)
{
 s32 VAR_17 = 0;
 s32 VAR_18 = 0;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;
 u8 VAR_23;


 VAR_17 = VAR_16->mac.ops.stop_adapter(VAR_16);
 if (VAR_17 != 0)
  goto reset_hw_out;






 VAR_16->mac.ops.read_analog_reg8(VAR_16, VAR_3, &VAR_23);
 if (VAR_23 & VAR_7) {

  VAR_16->mac.ops.read_analog_reg8(VAR_16, VAR_3,
                               &VAR_23);
  VAR_23 &= ~VAR_7;
  VAR_16->mac.ops.write_analog_reg8(VAR_16, VAR_3,
                                VAR_23);

  VAR_16->mac.ops.read_analog_reg8(VAR_16, VAR_0,
                               &VAR_23);
  VAR_23 &= ~VAR_4;
  VAR_16->mac.ops.write_analog_reg8(VAR_16, VAR_0,
                                VAR_23);

  VAR_16->mac.ops.read_analog_reg8(VAR_16, VAR_1,
                               &VAR_23);
  VAR_23 &= ~VAR_5;
  VAR_16->mac.ops.write_analog_reg8(VAR_16, VAR_1,
                                VAR_23);

  VAR_16->mac.ops.read_analog_reg8(VAR_16, VAR_2,
                               &VAR_23);
  VAR_23 &= ~VAR_6;
  VAR_16->mac.ops.write_analog_reg8(VAR_16, VAR_2,
                                VAR_23);
 }


 if (VAR_16->phy.reset_disable == 0) {



  VAR_18 = VAR_16->phy.ops.init(VAR_16);
  if (VAR_18 == VAR_13)
   goto reset_hw_out;
  if (VAR_18 == VAR_12)
   goto mac_reset_top;

  VAR_16->phy.ops.reset(VAR_16);
 }

mac_reset_top:




 VAR_19 = FUNC_0(VAR_16, VAR_9) | VAR_10;
 FUNC_2(VAR_16, VAR_9, VAR_19);
 FUNC_1(VAR_16);


 for (VAR_21 = 0; VAR_21 < 10; VAR_21++) {
  FUNC_19(1);
  VAR_19 = FUNC_0(VAR_16, VAR_9);
  if (!(VAR_19 & VAR_10))
   break;
 }
 if (VAR_19 & VAR_10) {
  VAR_17 = VAR_11;
  FUNC_3(VAR_16, "Reset polling failed to complete.\n");
 }

 FUNC_4(50);






 if (VAR_16->mac.flags & VAR_14) {
  VAR_16->mac.flags &= ~VAR_14;
  goto mac_reset_top;
 }

 VAR_20 = FUNC_0(VAR_16, VAR_15);
 VAR_20 &= ~((1 << 21) | (1 << 18) | (1 << 9) | (1 << 6));
 FUNC_2(VAR_16, VAR_15, VAR_20);






 VAR_22 = FUNC_0(VAR_16, VAR_8);
 if (VAR_16->mac.orig_link_settings_stored == 0) {
  VAR_16->mac.orig_autoc = VAR_22;
  VAR_16->mac.orig_link_settings_stored = 1;
 } else if (VAR_22 != VAR_16->mac.orig_autoc) {
  FUNC_2(VAR_16, VAR_8, VAR_16->mac.orig_autoc);
 }


 VAR_16->mac.ops.get_mac_addr(VAR_16, VAR_16->mac.perm_addr);





 VAR_16->mac.ops.init_rx_addrs(VAR_16);

reset_hw_out:
 if (VAR_18)
  VAR_17 = VAR_18;

 return VAR_17;
}
