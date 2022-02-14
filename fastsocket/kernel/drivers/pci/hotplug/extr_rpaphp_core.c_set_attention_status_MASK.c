
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slot {int index; } ;
struct hotplug_slot {TYPE_1__* info; scalar_t__ private; } ;
struct TYPE_2__ {int attention_status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hotplug_slot *VAR_1, u8 VAR_2)
{
 int VAR_3;
 struct slot *VAR_4 = (struct slot *)VAR_1->private;

 switch (VAR_2) {
 case 0:
 case 1:
 case 2:
  break;
 default:
  VAR_2 = 1;
  break;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_4->index, VAR_2);
 if (!VAR_3)
  VAR_1->info->attention_status = VAR_2;

 return VAR_3;
}
