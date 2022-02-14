
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int hotplug_slot; } ;
struct hotplug_slot_info {int adapter_status; int latch_status; int attention_status; int power_status; } ;
struct controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,struct slot*) ;
 int FUNC_1 (struct controller*,struct slot*) ;
 int FUNC_2 (struct controller*,struct slot*) ;
 int FUNC_3 (struct controller*,struct slot*) ;
 int FUNC_4 (struct hotplug_slot_info*) ;
 struct hotplug_slot_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,struct hotplug_slot_info*) ;

__attribute__((used)) static int FUNC_7(struct controller *VAR_2, struct slot *VAR_3)
{
 struct hotplug_slot_info *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->power_status = FUNC_3(VAR_2, VAR_3);
 VAR_4->attention_status = FUNC_0(VAR_2, VAR_3);
 VAR_4->latch_status = FUNC_1(VAR_2, VAR_3);
 VAR_4->adapter_status = FUNC_2(VAR_2, VAR_3);
 VAR_5 = FUNC_6(VAR_3->hotplug_slot, VAR_4);
 FUNC_4 (VAR_4);
 return VAR_5;
}
