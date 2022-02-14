
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int set_d3_lplu_state; int set_d0_lplu_state; int release; int acquire; int power_down; int power_up; } ;
struct e1000_phy_info {scalar_t__ media_type; int addr; int reset_delay_us; int id; TYPE_1__ ops; int type; int autoneg_mask; } ;
struct TYPE_4__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_16)
{
 struct e1000_phy_info *VAR_17 = &VAR_16->phy;
 s32 VAR_18;

 if (VAR_16->phy.media_type != VAR_6) {
  VAR_17->type = VAR_10;
  return 0;
 }

 VAR_17->addr = 1;
 VAR_17->autoneg_mask = VAR_0;
 VAR_17->reset_delay_us = 100;

 VAR_17->ops.power_up = VAR_12;
 VAR_17->ops.power_down = VAR_11;

 switch (VAR_16->mac.type) {
 case 132:
 case 131:
  VAR_17->type = VAR_8;
  break;
 case 130:
  VAR_17->type = VAR_9;
  break;
 case 129:
 case 128:
  VAR_17->type = VAR_7;
  VAR_17->ops.acquire = VAR_5;
  VAR_17->ops.release = VAR_13;
  VAR_17->ops.set_d0_lplu_state = VAR_14;
  VAR_17->ops.set_d3_lplu_state = VAR_15;
  break;
 default:
  return -VAR_2;
  break;
 }


 VAR_18 = FUNC_0(VAR_16);
 if (VAR_18) {
  FUNC_1("Error getting PHY ID\n");
  return VAR_18;
 }


 switch (VAR_16->mac.type) {
 case 132:
 case 131:
  if (VAR_17->id != VAR_3)
   VAR_18 = -VAR_2;
  break;
 case 130:
  if (VAR_17->id != VAR_4)
   VAR_18 = -VAR_2;
  break;
 case 129:
 case 128:
  if (VAR_17->id != VAR_1)
   VAR_18 = -VAR_2;
  break;
 default:
  VAR_18 = -VAR_2;
  break;
 }

 if (VAR_18)
  FUNC_1("PHY ID unknown: type = 0x%08x\n", VAR_17->id);

 return VAR_18;
}
