
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * external_power_changed; int get_property; int num_properties; int properties; int type; } ;
struct bq27x00_device_info {TYPE_1__ bat; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct bq27x00_device_info *VAR_3)
{
 VAR_3->bat.type = VAR_0;
 VAR_3->bat.properties = VAR_2;
 VAR_3->bat.num_properties = FUNC_0(VAR_2);
 VAR_3->bat.get_property = VAR_1;
 VAR_3->bat.external_power_changed = ((void*)0);
}
