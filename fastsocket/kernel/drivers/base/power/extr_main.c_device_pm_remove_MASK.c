
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
struct device {TYPE_1__ power; int kobj; TYPE_2__* bus; } ;
struct dev_pm_info_entry {int entry; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dev_pm_info_entry* FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct dev_pm_info_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (char*,char*,int ) ;

void FUNC_9(struct device *VAR_2)
{




 FUNC_8("PM: Removing info for %s:%s\n",
   VAR_2->bus ? VAR_2->bus->name : "No Bus",
   FUNC_3(&VAR_2->kobj));
 FUNC_5(&VAR_1);
 FUNC_4(&VAR_2->power.entry);


 FUNC_6(&VAR_1);
 FUNC_7(VAR_2);
}
