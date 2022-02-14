
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slot {int hotplug_slot; TYPE_1__* hpc_ops; } ;
struct hotplug_slot_info {int adapter_status; int latch_status; int attention_status; int power_status; } ;
struct TYPE_2__ {int (* get_adapter_status ) (struct slot*,int *) ;int (* get_latch_status ) (struct slot*,int *) ;int (* get_attention_status ) (struct slot*,int *) ;int (* get_power_status ) (struct slot*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hotplug_slot_info*) ;
 struct hotplug_slot_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct hotplug_slot_info*) ;
 int FUNC_3 (struct slot*,int *) ;
 int FUNC_4 (struct slot*,int *) ;
 int FUNC_5 (struct slot*,int *) ;
 int FUNC_6 (struct slot*,int *) ;

__attribute__((used)) static int FUNC_7 (struct slot *VAR_2)
{
 struct hotplug_slot_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->hpc_ops->get_power_status(VAR_2, &(VAR_3->power_status));
 VAR_2->hpc_ops->get_attention_status(VAR_2, &(VAR_3->attention_status));
 VAR_2->hpc_ops->get_latch_status(VAR_2, &(VAR_3->latch_status));
 VAR_2->hpc_ops->get_adapter_status(VAR_2, &(VAR_3->adapter_status));

 VAR_4 = FUNC_2(VAR_2->hotplug_slot, VAR_3);
 FUNC_0 (VAR_3);
 return VAR_4;
}
