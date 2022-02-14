
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int j_commit_interval; int j_max_batch_time; int j_history_lock; int j_flags; scalar_t__ j_min_batch_time; int j_state_lock; int j_list_lock; int j_revoke_lock; int j_checkpoint_mutex; int j_barrier; int j_wait_updates; int j_wait_commit; int j_wait_checkpoint; int j_wait_done_commit; int j_wait_logspace; int j_wait_transaction_locked; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static journal_t * FUNC_6 (void)
{
 journal_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  goto fail;

 FUNC_0(&VAR_5->j_wait_transaction_locked);
 FUNC_0(&VAR_5->j_wait_logspace);
 FUNC_0(&VAR_5->j_wait_done_commit);
 FUNC_0(&VAR_5->j_wait_checkpoint);
 FUNC_0(&VAR_5->j_wait_commit);
 FUNC_0(&VAR_5->j_wait_updates);
 FUNC_4(&VAR_5->j_barrier);
 FUNC_4(&VAR_5->j_checkpoint_mutex);
 FUNC_5(&VAR_5->j_revoke_lock);
 FUNC_5(&VAR_5->j_list_lock);
 FUNC_5(&VAR_5->j_state_lock);

 VAR_5->j_commit_interval = (VAR_1 * VAR_3);
 VAR_5->j_min_batch_time = 0;
 VAR_5->j_max_batch_time = 15000;


 VAR_5->j_flags = VAR_2;


 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_5);
  goto fail;
 }

 FUNC_5(&VAR_5->j_history_lock);

 return VAR_5;
fail:
 return ((void*)0);
}
