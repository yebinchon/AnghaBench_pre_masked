
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sfp_type; } ;
struct TYPE_4__ {int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;


 int VAR_1 ;
 int FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_2)
{
 s32 VAR_3 = VAR_0;

 switch (VAR_2->mac.ops.get_media_type(VAR_2)) {
 case 129:
  VAR_3 = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_2);
  break;
 default:
  VAR_2->phy.sfp_type = VAR_1;
  VAR_3 = VAR_0;
  break;
 }

 return VAR_3;
}
