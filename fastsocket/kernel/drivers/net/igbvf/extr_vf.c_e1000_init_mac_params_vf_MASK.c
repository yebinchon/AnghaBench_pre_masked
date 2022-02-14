
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int set_vfta; int read_mac_addr; int rar_set; int update_mc_addr_list; int get_link_up_info; int check_for_link; int init_hw; int reset_hw; } ;
struct e1000_mac_info {int mta_reg_count; int rar_entry_count; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static s32 FUNC_0(struct e1000_hw *VAR_9)
{
 struct e1000_mac_info *VAR_10 = &VAR_9->mac;


 VAR_10->mta_reg_count = 128;

 VAR_10->rar_entry_count = 1;



 VAR_10->ops.reset_hw = VAR_6;

 VAR_10->ops.init_hw = VAR_3;

 VAR_10->ops.check_for_link = VAR_1;

 VAR_10->ops.get_link_up_info = VAR_2;

 VAR_10->ops.update_mc_addr_list = VAR_8;

 VAR_10->ops.rar_set = VAR_4;

 VAR_10->ops.read_mac_addr = VAR_5;

 VAR_10->ops.set_vfta = VAR_7;

 return VAR_0;
}
