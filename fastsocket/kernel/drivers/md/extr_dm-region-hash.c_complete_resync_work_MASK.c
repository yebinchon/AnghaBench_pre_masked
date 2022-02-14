
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_region_hash {int recovery_count; int context; int (* wakeup_all_recovery_waiters ) (int ) ;int recovery_in_flight; int (* dispatch_bios ) (int ,int *) ;TYPE_2__* log; } ;
struct dm_region {int delayed_bios; int key; struct dm_region_hash* rh; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* set_region_sync ) (TYPE_2__*,int ,int) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_region *VAR_0, int VAR_1)
{
 struct dm_region_hash *VAR_2 = VAR_0->rh;

 VAR_2->log->type->set_region_sync(VAR_2->log, VAR_0->key, VAR_1);
 VAR_2->dispatch_bios(VAR_2->context, &VAR_0->delayed_bios);
 if (FUNC_0(&VAR_2->recovery_in_flight))
  VAR_2->wakeup_all_recovery_waiters(VAR_2->context);
 FUNC_4(&VAR_2->recovery_count);
}
