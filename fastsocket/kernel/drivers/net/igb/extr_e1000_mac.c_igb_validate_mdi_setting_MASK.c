
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mdix; } ;
struct TYPE_3__ {scalar_t__ type; int autoneg; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

s32 FUNC_1(struct e1000_hw *VAR_2)
{
 s32 VAR_3 = 0;


 if (VAR_2->mac.type >= VAR_1)
  goto out;

 if (!VAR_2->mac.autoneg && (VAR_2->phy.mdix == 0 || VAR_2->phy.mdix == 3)) {
  FUNC_0("Invalid MDI setting detected\n");
  VAR_2->phy.mdix = 1;
  VAR_3 = -VAR_0;
  goto out;
 }

out:
 return VAR_3;
}
