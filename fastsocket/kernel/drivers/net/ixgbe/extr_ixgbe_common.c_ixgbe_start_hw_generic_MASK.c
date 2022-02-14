
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* clear_hw_cntrs ) (struct ixgbe_hw*) ;int (* clear_vfta ) (struct ixgbe_hw*) ;int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_7__ {int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; int media_type; } ;
struct ixgbe_hw {int adapter_stopped; TYPE_2__ mac; TYPE_4__ phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;

s32 FUNC_8(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;


 VAR_2->phy.media_type = VAR_2->mac.ops.get_media_type(VAR_2);


 VAR_2->phy.ops.identify(VAR_2);


 VAR_2->mac.ops.clear_vfta(VAR_2);


 VAR_2->mac.ops.clear_hw_cntrs(VAR_2);


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 |= VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_1(VAR_2);


 FUNC_3(VAR_2);


 VAR_2->adapter_stopped = 0;

 return 0;
}
