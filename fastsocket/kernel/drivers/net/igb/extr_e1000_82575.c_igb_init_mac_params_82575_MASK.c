
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int setup_physical_interface; int release_swfw_sync; int acquire_swfw_sync; int reset_hw; } ;
struct e1000_mac_info {int mta_reg_count; int type; int asf_firmware_present; int arc_subsystem_valid; TYPE_2__ ops; int rar_entry_count; } ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct e1000_dev_spec_82575 {int eee_disable; int clear_semaphore_once; } ;
struct TYPE_4__ {struct e1000_dev_spec_82575 _82575; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ dev_spec; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int const VAR_6 ;


 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_16)
{
 struct e1000_mac_info *VAR_17 = &VAR_16->mac;
 struct e1000_dev_spec_82575 *VAR_18 = &VAR_16->dev_spec._82575;


 VAR_17->mta_reg_count = 128;

 switch (VAR_17->type) {
 case 131:
  VAR_17->rar_entry_count = VAR_3;
  break;
 case 130:
  VAR_17->rar_entry_count = VAR_4;
  break;
 case 129:
 case 128:
  VAR_17->rar_entry_count = VAR_5;
  break;
 default:
  VAR_17->rar_entry_count = VAR_2;
  break;
 }

 if (VAR_17->type >= 130)
  VAR_17->ops.reset_hw = VAR_13;
 else
  VAR_17->ops.reset_hw = VAR_12;

 if (VAR_17->type >= VAR_6) {
  VAR_17->ops.acquire_swfw_sync = VAR_9;
  VAR_17->ops.release_swfw_sync = VAR_11;

 } else {
  VAR_17->ops.acquire_swfw_sync = VAR_8;
  VAR_17->ops.release_swfw_sync = VAR_10;
 }


 VAR_17->asf_firmware_present = 1;

 VAR_17->arc_subsystem_valid =
  (FUNC_0(VAR_0) & VAR_1)
   ? 1 : 0;

 if (VAR_17->type >= 129)
  VAR_18->eee_disable = 0;
 else
  VAR_18->eee_disable = 1;

 if (VAR_17->type >= VAR_6)
  VAR_18->clear_semaphore_once = 1;

 VAR_17->ops.setup_physical_interface =
  (VAR_16->phy.media_type == VAR_7)
   ? VAR_14
   : VAR_15;

 return 0;
}
