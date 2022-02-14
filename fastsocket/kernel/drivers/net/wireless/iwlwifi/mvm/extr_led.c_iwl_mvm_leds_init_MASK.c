
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int max_brightness; int name; int default_trigger; int brightness_set; } ;
struct iwl_mvm {TYPE_2__ led; TYPE_1__* trans; TYPE_4__* hw; } ;
struct TYPE_8__ {int wiphy; } ;
struct TYPE_7__ {int led_mode; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;



 int FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct iwl_mvm *VAR_4)
{
 int VAR_5 = VAR_3.led_mode;
 int VAR_6;

 switch (VAR_5) {
 case 130:
 case 128:
  VAR_5 = 128;
  break;
 case 129:
  FUNC_0(VAR_4, "Led disabled\n");
  return 0;
 default:
  return -VAR_0;
 };

 VAR_4->led.name = FUNC_2(VAR_1, "%s-led",
       FUNC_5(VAR_4->hw->wiphy));
 VAR_4->led.brightness_set = VAR_2;
 VAR_4->led.max_brightness = 1;

 if (VAR_5 == 128)
  VAR_4->led.default_trigger =
   FUNC_1(VAR_4->hw);

 VAR_6 = FUNC_4(VAR_4->trans->dev, &VAR_4->led);
 if (VAR_6) {
  FUNC_3(VAR_4->led.name);
  FUNC_0(VAR_4, "Failed to enable led\n");
  return VAR_6;
 }

 return 0;
}
