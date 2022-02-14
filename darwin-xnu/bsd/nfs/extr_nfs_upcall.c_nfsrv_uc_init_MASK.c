
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ucq_flags; int ucq_thd; void* ucq_lock; int ucq_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 void* VAR_6 ;

void
FUNC_3(void)
{
 int VAR_7;

 VAR_4 = FUNC_1("nfs_upcall_locks", VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_0(VAR_5[VAR_7].ucq_queue);
  VAR_5[VAR_7].ucq_lock = FUNC_2(VAR_4, VAR_0);
  VAR_5[VAR_7].ucq_thd = VAR_3;
  VAR_5[VAR_7].ucq_flags = 0;
 }
 VAR_6 = FUNC_2(VAR_4, VAR_0);
}
