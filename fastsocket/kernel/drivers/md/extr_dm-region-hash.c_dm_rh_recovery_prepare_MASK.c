
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_region_hash {int context; int (* wakeup_all_recovery_waiters ) (int ) ;int recovery_in_flight; int recovery_count; } ;


 scalar_t__ FUNC_0 (struct dm_region_hash*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dm_region_hash *VAR_0)
{

 FUNC_3(&VAR_0->recovery_in_flight);

 while (!FUNC_4(&VAR_0->recovery_count)) {
  FUNC_3(&VAR_0->recovery_in_flight);
  if (FUNC_0(VAR_0) <= 0) {
   FUNC_1(&VAR_0->recovery_in_flight);
   FUNC_6(&VAR_0->recovery_count);
   break;
  }
 }


 if (FUNC_2(&VAR_0->recovery_in_flight))
  VAR_0->wakeup_all_recovery_waiters(VAR_0->context);
}
