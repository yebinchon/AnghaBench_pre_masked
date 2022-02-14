
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ t_updates; int t_outstanding_credits; int t_tid; int t_handle_lock; TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_12__ {int j_state_lock; int j_wait_updates; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_13__ {int h_buffer_credits; int h_lockdep_map; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int,char*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (int *) ;

int FUNC_10(handle_t *VAR_0, int VAR_1)
{
 transaction_t *VAR_2 = VAR_0->h_transaction;
 journal_t *VAR_3 = VAR_2->t_journal;
 int VAR_4;



 if (FUNC_2(VAR_0))
  return 0;





 FUNC_0(VAR_2->t_updates > 0);
 FUNC_0(FUNC_4() == VAR_0);

 FUNC_6(&VAR_3->j_state_lock);
 FUNC_6(&VAR_2->t_handle_lock);
 VAR_2->t_outstanding_credits -= VAR_0->h_buffer_credits;
 VAR_2->t_updates--;

 if (!VAR_2->t_updates)
  FUNC_9(&VAR_3->j_wait_updates);
 FUNC_7(&VAR_2->t_handle_lock);

 FUNC_3(2, "restarting handle %p\n", VAR_0);
 FUNC_1(VAR_3, VAR_2->t_tid);
 FUNC_7(&VAR_3->j_state_lock);

 FUNC_5(&VAR_0->h_lockdep_map);
 VAR_0->h_buffer_credits = VAR_1;
 VAR_4 = FUNC_8(VAR_3, VAR_0);
 return VAR_4;
}
