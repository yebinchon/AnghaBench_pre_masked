
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int leg_failure; int trigger_event; int in_sync; } ;
struct mirror {TYPE_1__* dev; int error_type; int error_count; struct mirror_set* ms; } ;
typedef enum dm_raid1_error { ____Placeholder_dm_raid1_error } dm_raid1_error ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mirror_set*) ;
 struct mirror* FUNC_4 (struct mirror_set*) ;
 struct mirror* FUNC_5 (struct mirror_set*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mirror*) ;
 scalar_t__ FUNC_8 (int,int *) ;

__attribute__((used)) static void FUNC_9(struct mirror *VAR_0, enum dm_raid1_error VAR_1)
{
 struct mirror_set *VAR_2 = VAR_0->ms;
 struct mirror *VAR_3;

 VAR_2->leg_failure = 1;






 FUNC_2(&VAR_0->error_count);

 if (FUNC_8(VAR_1, &VAR_0->error_type))
  return;

 if (!FUNC_3(VAR_2))
  return;

 if (VAR_0 != FUNC_4(VAR_2))
  goto out;

 if (!VAR_2->in_sync) {




  FUNC_0("Primary mirror (%s) failed while out-of-sync: "
        "Reads may fail.", VAR_0->dev->name);
  goto out;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  FUNC_7(VAR_3);
 else
  FUNC_1("All sides of mirror have failed.");

out:
 FUNC_6(&VAR_2->trigger_event);
}
