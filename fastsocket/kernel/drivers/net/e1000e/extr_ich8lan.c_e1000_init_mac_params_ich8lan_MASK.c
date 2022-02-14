
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int setup_physical_interface; int rar_set; int led_off; int led_on; int cleanup_led; int setup_led; int id_led_init; int check_mng_mode; int blink_led; } ;
struct e1000_mac_info {int mta_reg_count; int type; int has_fwsm; int arc_subsystem_valid; int adaptive_ifs; TYPE_2__ ops; scalar_t__ rar_entry_count; } ;
struct TYPE_3__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; struct e1000_mac_info mac; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int VAR_19 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_20)
{
 struct e1000_mac_info *VAR_21 = &VAR_20->mac;


 VAR_20->phy.media_type = VAR_12;


 VAR_21->mta_reg_count = 32;

 VAR_21->rar_entry_count = VAR_0;
 if (VAR_21->type == 132)
  VAR_21->rar_entry_count--;

 VAR_21->has_fwsm = 1;

 VAR_21->arc_subsystem_valid = 0;

 VAR_21->adaptive_ifs = 1;


 switch (VAR_21->type) {
 case 132:
 case 131:
 case 133:

  VAR_21->ops.check_mng_mode = VAR_3;

  VAR_21->ops.id_led_init = VAR_18;

  VAR_21->ops.blink_led = VAR_17;

  VAR_21->ops.setup_led = VAR_19;

  VAR_21->ops.cleanup_led = VAR_5;

  VAR_21->ops.led_on = VAR_10;
  VAR_21->ops.led_off = VAR_8;
  break;
 case 130:
  VAR_21->rar_entry_count = VAR_1;
  VAR_21->ops.rar_set = VAR_13;

 case 129:
 case 128:

  VAR_21->ops.check_mng_mode = VAR_4;

  VAR_21->ops.id_led_init = VAR_7;

  VAR_21->ops.setup_led = VAR_16;

  VAR_21->ops.cleanup_led = VAR_6;

  VAR_21->ops.led_on = VAR_11;
  VAR_21->ops.led_off = VAR_9;
  break;
 default:
  break;
 }

 if (VAR_21->type == 129) {
  VAR_21->rar_entry_count = VAR_2;
  VAR_21->ops.rar_set = VAR_14;
  VAR_21->ops.setup_physical_interface =
      VAR_15;
 }


 if (VAR_21->type == 132)
  FUNC_0(VAR_20, 1);

 return 0;
}
