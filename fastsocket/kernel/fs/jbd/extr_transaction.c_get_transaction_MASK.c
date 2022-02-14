
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ t_expires; int t_handle_lock; scalar_t__ t_tid; int t_start_time; int t_state; TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_9__ {int expires; } ;
struct TYPE_8__ {TYPE_1__* j_running_transaction; TYPE_6__ j_commit_timer; scalar_t__ j_commit_interval; int j_transaction_sequence; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static transaction_t *
FUNC_5(journal_t *VAR_2, transaction_t *VAR_3)
{
 VAR_3->t_journal = VAR_2;
 VAR_3->t_state = VAR_0;
 VAR_3->t_start_time = FUNC_2();
 VAR_3->t_tid = VAR_2->j_transaction_sequence++;
 VAR_3->t_expires = VAR_1 + VAR_2->j_commit_interval;
 FUNC_4(&VAR_3->t_handle_lock);


 VAR_2->j_commit_timer.expires =
    FUNC_3(VAR_3->t_expires);
 FUNC_1(&VAR_2->j_commit_timer);

 FUNC_0(VAR_2->j_running_transaction == ((void*)0));
 VAR_2->j_running_transaction = VAR_3;

 return VAR_3;
}
