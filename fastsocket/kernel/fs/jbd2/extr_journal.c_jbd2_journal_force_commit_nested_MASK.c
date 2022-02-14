
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_tid; } ;
typedef TYPE_1__ transaction_t ;
typedef int tid_t ;
struct TYPE_8__ {int j_state_lock; TYPE_1__* j_committing_transaction; TYPE_1__* j_running_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_9__ {int journal_info; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(journal_t *VAR_1)
{
 transaction_t *VAR_2 = ((void*)0);
 tid_t VAR_3;

 FUNC_2(&VAR_1->j_state_lock);
 if (VAR_1->j_running_transaction && !VAR_0->journal_info) {
  VAR_2 = VAR_1->j_running_transaction;
  FUNC_0(VAR_1, VAR_2->t_tid);
 } else if (VAR_1->j_committing_transaction)
  VAR_2 = VAR_1->j_committing_transaction;

 if (!VAR_2) {
  FUNC_3(&VAR_1->j_state_lock);
  return 0;
 }

 VAR_3 = VAR_2->t_tid;
 FUNC_3(&VAR_1->j_state_lock);
 FUNC_1(VAR_1, VAR_3);
 return 1;
}
