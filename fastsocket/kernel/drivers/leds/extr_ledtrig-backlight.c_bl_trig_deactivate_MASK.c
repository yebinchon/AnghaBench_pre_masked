
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {scalar_t__ trigger_data; } ;
struct bl_trig_notifier {int notifier; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bl_trig_notifier*) ;

__attribute__((used)) static void FUNC_2(struct led_classdev *VAR_0)
{
 struct bl_trig_notifier *VAR_1 =
  (struct bl_trig_notifier *) VAR_0->trigger_data;

 if (VAR_1) {
  FUNC_0(&VAR_1->notifier);
  FUNC_1(VAR_1);
 }
}
