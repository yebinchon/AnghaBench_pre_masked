
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t_handle_lock; int t_updates; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_5__ {int j_barrier; int j_state_lock; int j_wait_updates; TYPE_1__* j_running_transaction; int j_barrier_count; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

void FUNC_7(journal_t *VAR_2)
{
 FUNC_0(VAR_1);

 FUNC_5(&VAR_2->j_state_lock);
 ++VAR_2->j_barrier_count;


 while (1) {
  transaction_t *VAR_3 = VAR_2->j_running_transaction;

  if (!VAR_3)
   break;

  FUNC_5(&VAR_3->t_handle_lock);
  if (!VAR_3->t_updates) {
   FUNC_6(&VAR_3->t_handle_lock);
   break;
  }
  FUNC_3(&VAR_2->j_wait_updates, &VAR_1,
    VAR_0);
  FUNC_6(&VAR_3->t_handle_lock);
  FUNC_6(&VAR_2->j_state_lock);
  FUNC_4();
  FUNC_1(&VAR_2->j_wait_updates, &VAR_1);
  FUNC_5(&VAR_2->j_state_lock);
 }
 FUNC_6(&VAR_2->j_state_lock);







 FUNC_2(&VAR_2->j_barrier);
}
