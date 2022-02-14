
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dev; int brightness; struct bl_trig_notifier* trigger_data; } ;
struct TYPE_2__ {int notifier_call; } ;
struct bl_trig_notifier {TYPE_1__ notifier; int old_status; int brightness; struct led_classdev* led; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 struct bl_trig_notifier* FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_3)
{
 int VAR_4;

 struct bl_trig_notifier *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct bl_trig_notifier), VAR_0);
 VAR_3->trigger_data = VAR_5;
 if (!VAR_5) {
  FUNC_0(VAR_3->dev, "unable to allocate backlight trigger\n");
  return;
 }

 VAR_5->led = VAR_3;
 VAR_5->brightness = VAR_3->brightness;
 VAR_5->old_status = VAR_1;
 VAR_5->notifier.notifier_call = VAR_2;

 VAR_4 = FUNC_1(&VAR_5->notifier);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "unable to register backlight trigger\n");
}
