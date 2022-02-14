
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {unsigned long data; int function; } ;
struct TYPE_6__ {TYPE_1__* bte_if; TYPE_3__ bte_recovery_timer; int bte_recovery_lock; } ;
typedef TYPE_2__ nodepda_t ;
typedef int cnodeid_t ;
struct TYPE_5__ {int bte_num; scalar_t__ bh_error; scalar_t__ cleanup_active; scalar_t__ bte_error_count; int bte_cnode; int spinlock; int notify; int * most_rcnt_na; int bte_notify_addr; int bte_control_addr; int bte_destination_addr; int bte_source_addr; int * bte_base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;

void FUNC_9(nodepda_t * VAR_3, cnodeid_t VAR_4)
{
 int VAR_5;
 FUNC_8(&VAR_3->bte_recovery_lock);
 FUNC_7(&VAR_3->bte_recovery_timer);
 VAR_3->bte_recovery_timer.function = VAR_2;
 VAR_3->bte_recovery_timer.data = (unsigned long)VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  u64 *VAR_6;


  VAR_6 = (u64 *)
      FUNC_5(FUNC_6(VAR_4), FUNC_0(VAR_5));
  VAR_3->bte_if[VAR_5].bte_base_addr = VAR_6;
  VAR_3->bte_if[VAR_5].bte_source_addr = FUNC_4(VAR_6);
  VAR_3->bte_if[VAR_5].bte_destination_addr = FUNC_2(VAR_6);
  VAR_3->bte_if[VAR_5].bte_control_addr = FUNC_1(VAR_6);
  VAR_3->bte_if[VAR_5].bte_notify_addr = FUNC_3(VAR_6);





  VAR_3->bte_if[VAR_5].most_rcnt_na =
      &(VAR_3->bte_if[VAR_5].notify);
  VAR_3->bte_if[VAR_5].notify = VAR_1;
  FUNC_8(&VAR_3->bte_if[VAR_5].spinlock);

  VAR_3->bte_if[VAR_5].bte_cnode = VAR_4;
  VAR_3->bte_if[VAR_5].bte_error_count = 0;
  VAR_3->bte_if[VAR_5].bte_num = VAR_5;
  VAR_3->bte_if[VAR_5].cleanup_active = 0;
  VAR_3->bte_if[VAR_5].bh_error = 0;
 }

}
