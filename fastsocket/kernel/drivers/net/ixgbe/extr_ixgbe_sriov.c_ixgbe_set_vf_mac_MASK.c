
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* set_rar ) (struct ixgbe_hw*,int,unsigned char*,int,int ) ;} ;
struct TYPE_6__ {int num_rar_entries; TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int vf_mac_addresses; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (struct ixgbe_hw*,int,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_1,
       int VAR_2, unsigned char *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_1->hw;
 int VAR_5 = VAR_4->mac.num_rar_entries - (VAR_2 + 1);

 FUNC_0(VAR_1->vfinfo[VAR_2].vf_mac_addresses, VAR_3, 6);
 VAR_4->mac.ops.set_rar(VAR_4, VAR_5, VAR_3, VAR_2, VAR_0);

 return 0;
}
