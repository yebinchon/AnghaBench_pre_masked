
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int force_speed_duplex; int check_polarity; int get_info; int commit; void* write_reg; void* read_reg; int write_reg_locked; int read_reg_locked; int power_down; int power_up; } ;
struct e1000_phy_info {int addr; int reset_delay_us; int id; TYPE_1__ ops; void* autoneg_mask; int type; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 void* VAR_0 ;

 void* VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_23)
{
 struct e1000_phy_info *VAR_24 = &VAR_23->phy;
 s32 VAR_25;
 u16 VAR_26 = 0;

 VAR_24->addr = 1;
 VAR_24->reset_delay_us = 100;

 VAR_24->ops.power_up = VAR_13;
 VAR_24->ops.power_down = VAR_12;




 VAR_25 = FUNC_0(VAR_23);
 if (VAR_25) {
  VAR_24->ops.write_reg = VAR_21;
  VAR_24->ops.read_reg = VAR_19;
  VAR_25 = FUNC_0(VAR_23);
  if (VAR_25) {
   FUNC_3("Cannot determine PHY addr. Erroring out\n");
   return VAR_25;
  }
 }

 VAR_24->id = 0;
 while ((VAR_11 == FUNC_2(VAR_24->id)) &&
        (VAR_26++ < 100)) {
  FUNC_4(1000, 2000);
  VAR_25 = FUNC_1(VAR_23);
  if (VAR_25)
   return VAR_25;
 }


 switch (VAR_24->id) {
 case 128:
  VAR_24->type = VAR_10;
  VAR_24->autoneg_mask = VAR_0;
  VAR_24->ops.read_reg_locked = VAR_20;
  VAR_24->ops.write_reg_locked = VAR_22;
  VAR_24->ops.get_info = VAR_14;
  VAR_24->ops.check_polarity = VAR_4;
  VAR_24->ops.force_speed_duplex = VAR_16;
  break;
 case 130:
 case 129:
 case 131:
  VAR_24->type = VAR_9;
  VAR_24->autoneg_mask = VAR_1;
  VAR_24->ops.get_info = VAR_6;
  VAR_24->ops.check_polarity = VAR_3;
  VAR_24->ops.force_speed_duplex = VAR_8;
  break;
 case 132:
  VAR_24->type = VAR_7;
  VAR_24->autoneg_mask = VAR_0;
  VAR_24->ops.read_reg = VAR_19;
  VAR_24->ops.write_reg = VAR_21;
  VAR_24->ops.commit = VAR_18;
  VAR_24->ops.get_info = VAR_15;
  VAR_24->ops.check_polarity = VAR_5;
  VAR_24->ops.force_speed_duplex = VAR_17;
  break;
 default:
  return -VAR_2;
  break;
 }

 return 0;
}
