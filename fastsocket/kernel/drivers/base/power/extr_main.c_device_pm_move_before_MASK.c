
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {struct list_head entry; } ;
struct device {TYPE_2__ power; int kobj; TYPE_1__* bus; } ;
struct dev_pm_info_entry {struct list_head entry; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 struct dev_pm_info_entry* FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct list_head*,struct list_head*) ;
 int FUNC_4 (char*,char*,int ,char*,int ) ;

void FUNC_5(struct device *VAR_1, struct device *VAR_2)
{
 struct list_head *VAR_3, *VAR_4;




 FUNC_4("PM: Moving %s:%s before %s:%s\n",
   VAR_1->bus ? VAR_1->bus->name : "No Bus",
   FUNC_2(&VAR_1->kobj),
   VAR_2->bus ? VAR_2->bus->name : "No Bus",
   FUNC_2(&VAR_2->kobj));
 VAR_3 = &VAR_1->power.entry;
 VAR_4 = &VAR_2->power.entry;



 FUNC_3(VAR_3, VAR_4);
}
