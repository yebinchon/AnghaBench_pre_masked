
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fc_was_autonegged; int requested_mode; int current_mode; scalar_t__ disable_fc_autoneg; } ;
struct TYPE_7__ {int media_type; } ;
struct TYPE_5__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ fc; TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;




 int FUNC_4 (struct ixgbe_hw*,int *,int*,int) ;

void FUNC_5(struct ixgbe_hw *VAR_2)
{
 s32 VAR_3 = VAR_0;
 ixgbe_link_speed VAR_4;
 bool VAR_5;
 if (VAR_2->fc.disable_fc_autoneg)
  goto out;

 VAR_2->mac.ops.check_link(VAR_2, &VAR_4, &VAR_5, 0);
 if (!VAR_5)
  goto out;

 switch (VAR_2->phy.media_type) {

 case 128:
 case 129:
  if (VAR_4 == VAR_1)
   VAR_3 = FUNC_3(VAR_2);
  break;


 case 131:
  VAR_3 = FUNC_1(VAR_2);
  break;


 case 130:
  if (FUNC_0(VAR_2))
   VAR_3 = FUNC_2(VAR_2);
  break;

 default:
  break;
 }

out:
 if (VAR_3 == 0) {
  VAR_2->fc.fc_was_autonegged = 1;
 } else {
  VAR_2->fc.fc_was_autonegged = 0;
  VAR_2->fc.current_mode = VAR_2->fc.requested_mode;
 }
}
