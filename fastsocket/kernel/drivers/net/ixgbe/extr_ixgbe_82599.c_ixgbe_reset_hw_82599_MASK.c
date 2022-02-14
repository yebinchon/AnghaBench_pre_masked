
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ (* stop_adapter ) (struct ixgbe_hw*) ;scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* acquire_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* get_wwn_prefix ) (struct ixgbe_hw*,int *,int *) ;int (* set_rar ) (struct ixgbe_hw*,int,int ,int ,int ) ;int (* get_san_mac_addr ) (struct ixgbe_hw*,int ) ;int (* init_rx_addrs ) (struct ixgbe_hw*) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;int (* release_swfw_sync ) (struct ixgbe_hw*,int ) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_8__ {int cached_autoc; int flags; int orig_link_settings_stored; int orig_autoc; int orig_autoc2; int num_rar_entries; int san_mac_rar_index; int wwpn_prefix; int wwnn_prefix; TYPE_3__ ops; int san_addr; int perm_addr; } ;
struct TYPE_5__ {scalar_t__ (* init ) (struct ixgbe_hw*) ;int (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int sfp_setup_needed; int reset_disable; scalar_t__ multispeed_fiber; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mac; scalar_t__ wol_enabled; scalar_t__ mng_fw_enabled; TYPE_2__ phy; int force_full_reset; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*) ;
 int FUNC_10 (struct ixgbe_hw*,int ) ;
 int FUNC_11 (struct ixgbe_hw*,int,int ,int ,int ) ;
 int FUNC_12 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ FUNC_13 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_14 (struct ixgbe_hw*) ;
 int FUNC_15 (struct ixgbe_hw*) ;
 int FUNC_16 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ FUNC_17 (struct ixgbe_hw*,int ) ;
 int FUNC_18 (struct ixgbe_hw*,int ) ;
 int FUNC_19 (struct ixgbe_hw*,int ) ;
 int FUNC_20 (struct ixgbe_hw*) ;
 int FUNC_21 (int) ;

__attribute__((used)) static s32 FUNC_22(struct ixgbe_hw *VAR_14)
{
 ixgbe_link_speed VAR_15;
 s32 VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 bool VAR_21 = 0;


 VAR_16 = VAR_14->mac.ops.stop_adapter(VAR_14);
 if (VAR_16 != 0)
  goto reset_hw_out;


 FUNC_5(VAR_14);




 VAR_16 = VAR_14->phy.ops.init(VAR_14);

 if (VAR_16 == VAR_10)
  goto reset_hw_out;


 if (VAR_14->phy.sfp_setup_needed) {
  VAR_16 = VAR_14->mac.ops.setup_sfp(VAR_14);
  VAR_14->phy.sfp_setup_needed = 0;
 }

 if (VAR_16 == VAR_10)
  goto reset_hw_out;


 if (VAR_14->phy.reset_disable == 0 && VAR_14->phy.ops.reset != ((void*)0))
  VAR_14->phy.ops.reset(VAR_14);


 if (VAR_14->mac.cached_autoc)
  VAR_20 = VAR_14->mac.cached_autoc & VAR_4;
 else
  VAR_20 = FUNC_0(VAR_14, VAR_0) &
      VAR_4;

mac_reset_top:






 VAR_17 = VAR_6;
 if (!VAR_14->force_full_reset) {
  VAR_14->mac.ops.check_link(VAR_14, &VAR_15, &VAR_21, 0);
  if (VAR_21)
   VAR_17 = VAR_7;
 }

 VAR_17 |= FUNC_0(VAR_14, VAR_5);
 FUNC_2(VAR_14, VAR_5, VAR_17);
 FUNC_1(VAR_14);


 for (VAR_18 = 0; VAR_18 < 10; VAR_18++) {
  FUNC_21(1);
  VAR_17 = FUNC_0(VAR_14, VAR_5);
  if (!(VAR_17 & VAR_8))
   break;
 }

 if (VAR_17 & VAR_8) {
  VAR_16 = VAR_9;
  FUNC_3(VAR_14, "Reset polling failed to complete.\n");
 }

 FUNC_8(50);






 if (VAR_14->mac.flags & VAR_11) {
  VAR_14->mac.flags &= ~VAR_11;
  goto mac_reset_top;
 }






 VAR_14->mac.cached_autoc = FUNC_0(VAR_14, VAR_0);
 VAR_19 = FUNC_0(VAR_14, VAR_1);


 if (VAR_19 & VAR_2) {
  VAR_19 &= ~VAR_2;
  FUNC_2(VAR_14, VAR_1, VAR_19);
  FUNC_1(VAR_14);
 }

 if (VAR_14->mac.orig_link_settings_stored == 0) {
  VAR_14->mac.orig_autoc = VAR_14->mac.cached_autoc;
  VAR_14->mac.orig_autoc2 = VAR_19;
  VAR_14->mac.orig_link_settings_stored = 1;
 } else {







  if ((VAR_14->phy.multispeed_fiber && VAR_14->mng_fw_enabled) ||
      VAR_14->wol_enabled)
   VAR_14->mac.orig_autoc =
    (VAR_14->mac.orig_autoc & ~VAR_4) |
    VAR_20;

  if (VAR_14->mac.cached_autoc != VAR_14->mac.orig_autoc) {




   bool VAR_22 = 0;
   if (FUNC_7(VAR_14)) {
    VAR_16 = VAR_14->mac.ops.acquire_swfw_sync(VAR_14,
       VAR_12);
    if (VAR_16)
     goto reset_hw_out;

    VAR_22 = 1;
   }

   FUNC_2(VAR_14, VAR_0, VAR_14->mac.orig_autoc);
   VAR_14->mac.cached_autoc = VAR_14->mac.orig_autoc;
   FUNC_6(VAR_14);

   if (VAR_22)
    VAR_14->mac.ops.release_swfw_sync(VAR_14,
       VAR_12);
  }

  if ((VAR_19 & VAR_3) !=
      (VAR_14->mac.orig_autoc2 & VAR_3)) {
   VAR_19 &= ~VAR_3;
   VAR_19 |= (VAR_14->mac.orig_autoc2 &
              VAR_3);
   FUNC_2(VAR_14, VAR_1, VAR_19);
  }
 }


 VAR_14->mac.ops.get_mac_addr(VAR_14, VAR_14->mac.perm_addr);






 VAR_14->mac.num_rar_entries = 128;
 VAR_14->mac.ops.init_rx_addrs(VAR_14);


 VAR_14->mac.ops.get_san_mac_addr(VAR_14, VAR_14->mac.san_addr);


 if (FUNC_4(VAR_14->mac.san_addr)) {
  VAR_14->mac.ops.set_rar(VAR_14, VAR_14->mac.num_rar_entries - 1,
                      VAR_14->mac.san_addr, 0, VAR_13);


  VAR_14->mac.san_mac_rar_index = VAR_14->mac.num_rar_entries - 1;


  VAR_14->mac.num_rar_entries--;
 }


 VAR_14->mac.ops.get_wwn_prefix(VAR_14, &VAR_14->mac.wwnn_prefix,
                                &VAR_14->mac.wwpn_prefix);

reset_hw_out:
 return VAR_16;
}
