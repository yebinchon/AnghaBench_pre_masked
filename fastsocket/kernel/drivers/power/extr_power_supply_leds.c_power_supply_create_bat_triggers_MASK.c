
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {void* charging_full_trig_name; void* charging_trig_name; int full_trig; void* full_trig_name; int charging_trig; int charging_full_trig; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int *) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->charging_full_trig_name = FUNC_0(VAR_1,
     "%s-charging-or-full", VAR_2->name);
 if (!VAR_2->charging_full_trig_name)
  goto charging_full_failed;

 VAR_2->charging_trig_name = FUNC_0(VAR_1,
     "%s-charging", VAR_2->name);
 if (!VAR_2->charging_trig_name)
  goto charging_failed;

 VAR_2->full_trig_name = FUNC_0(VAR_1, "%s-full", VAR_2->name);
 if (!VAR_2->full_trig_name)
  goto full_failed;

 FUNC_2(VAR_2->charging_full_trig_name,
        &VAR_2->charging_full_trig);
 FUNC_2(VAR_2->charging_trig_name,
        &VAR_2->charging_trig);
 FUNC_2(VAR_2->full_trig_name,
        &VAR_2->full_trig);

 goto success;

full_failed:
 FUNC_1(VAR_2->charging_trig_name);
charging_failed:
 FUNC_1(VAR_2->charging_full_trig_name);
charging_full_failed:
 VAR_3 = -VAR_0;
success:
 return VAR_3;
}
