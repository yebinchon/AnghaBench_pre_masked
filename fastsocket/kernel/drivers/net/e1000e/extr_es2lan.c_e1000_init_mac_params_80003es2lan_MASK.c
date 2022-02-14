
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int (* set_lan_id ) (struct e1000_hw*) ;int setup_physical_interface; int check_for_link; } ;
struct e1000_mac_info {int mta_reg_count; int has_fwsm; int arc_subsystem_valid; int adaptive_ifs; TYPE_4__ ops; int rar_entry_count; } ;
struct TYPE_7__ {int media_type; } ;
struct e1000_hw {struct e1000_mac_info mac; TYPE_3__ phy; TYPE_2__* adapter; } ;
typedef int s32 ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int device; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;


 switch (VAR_9->adapter->pdev->device) {
 case 128:
  VAR_9->phy.media_type = VAR_4;
  VAR_10->ops.check_for_link = VAR_7;
  VAR_10->ops.setup_physical_interface =
      VAR_8;
  break;
 default:
  VAR_9->phy.media_type = VAR_3;
  VAR_10->ops.check_for_link = VAR_6;
  VAR_10->ops.setup_physical_interface =
      VAR_5;
  break;
 }


 VAR_10->mta_reg_count = 128;

 VAR_10->rar_entry_count = VAR_1;

 VAR_10->has_fwsm = 1;

 VAR_10->arc_subsystem_valid = !!(FUNC_0(VAR_2) & VAR_0);

 VAR_10->adaptive_ifs = 0;


 VAR_9->mac.ops.set_lan_id(VAR_9);

 return 0;
}
