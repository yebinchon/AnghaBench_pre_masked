
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* init_uta_tables ) (struct ixgbe_hw*) ;int (* clear_vmdq ) (struct ixgbe_hw*,int ,int ) ;int (* set_rar ) (struct ixgbe_hw*,int ,int ,int ,int ) ;int (* get_mac_addr ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_6__ {int num_rar_entries; int mcft_size; TYPE_2__ ops; int mc_filter_type; int addr; } ;
struct TYPE_4__ {int rar_used_count; scalar_t__ mta_in_use; scalar_t__ overflow_promisc; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ addr_ctrl; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_4 (struct ixgbe_hw*,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int ,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_9 (struct ixgbe_hw*) ;

s32 FUNC_10(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = VAR_3->mac.num_rar_entries;






 if (!FUNC_5(VAR_3->mac.addr)) {

  VAR_3->mac.ops.get_mac_addr(VAR_3, VAR_3->mac.addr);

  FUNC_4(VAR_3, " Keeping Current RAR0 Addr =%pM\n", VAR_3->mac.addr);
 } else {

  FUNC_4(VAR_3, "Overriding MAC Address in RAR[0]\n");
  FUNC_4(VAR_3, " New MAC Addr =%pM\n", VAR_3->mac.addr);

  VAR_3->mac.ops.set_rar(VAR_3, 0, VAR_3->mac.addr, 0, VAR_2);


  VAR_3->mac.ops.clear_vmdq(VAR_3, 0, VAR_0);
 }
 VAR_3->addr_ctrl.overflow_promisc = 0;

 VAR_3->addr_ctrl.rar_used_count = 1;


 FUNC_4(VAR_3, "Clearing RAR[1-%d]\n", VAR_5 - 1);
 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++) {
  FUNC_3(VAR_3, FUNC_2(VAR_4), 0);
  FUNC_3(VAR_3, FUNC_1(VAR_4), 0);
 }


 VAR_3->addr_ctrl.mta_in_use = 0;
 FUNC_3(VAR_3, VAR_1, VAR_3->mac.mc_filter_type);

 FUNC_4(VAR_3, " Clearing MTA\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->mac.mcft_size; VAR_4++)
  FUNC_3(VAR_3, FUNC_0(VAR_4), 0);

 if (VAR_3->mac.ops.init_uta_tables)
  VAR_3->mac.ops.init_uta_tables(VAR_3);

 return 0;
}
