
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ t_tid; int t_expires; } ;
typedef TYPE_1__ transaction_t ;
struct TYPE_5__ {int j_flags; scalar_t__ j_commit_sequence; scalar_t__ j_commit_request; int j_wait_done_commit; int * j_task; int j_commit_timer; int j_state_lock; TYPE_1__* j_running_transaction; int j_wait_commit; } ;
typedef TYPE_2__ journal_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(void *VAR_6)
{
 journal_t *VAR_7 = VAR_6;
 transaction_t *VAR_8;





 FUNC_9(&VAR_7->j_commit_timer, VAR_2,
   (unsigned long)VAR_3);


 VAR_7->j_task = VAR_3;
 FUNC_13(&VAR_7->j_wait_done_commit);




 FUNC_10(&VAR_7->j_state_lock);

loop:
 if (VAR_7->j_flags & VAR_0)
  goto end_loop;

 FUNC_5(1, "commit_sequence=%d, commit_request=%d\n",
  VAR_7->j_commit_sequence, VAR_7->j_commit_request);

 if (VAR_7->j_commit_sequence != VAR_7->j_commit_request) {
  FUNC_5(1, "OK, requests differ\n");
  FUNC_11(&VAR_7->j_state_lock);
  FUNC_1(&VAR_7->j_commit_timer);
  FUNC_4(VAR_7);
  FUNC_10(&VAR_7->j_state_lock);
  goto loop;
 }

 FUNC_13(&VAR_7->j_wait_done_commit);
 if (FUNC_3(VAR_3)) {





  FUNC_5(1, "Now suspending kjournald2\n");
  FUNC_11(&VAR_7->j_state_lock);
  FUNC_7();
  FUNC_10(&VAR_7->j_state_lock);
 } else {




  FUNC_0(VAR_5);
  int VAR_9 = 1;

  FUNC_6(&VAR_7->j_wait_commit, &VAR_5,
    VAR_1);
  if (VAR_7->j_commit_sequence != VAR_7->j_commit_request)
   VAR_9 = 0;
  VAR_8 = VAR_7->j_running_transaction;
  if (VAR_8 && FUNC_12(VAR_4,
      VAR_8->t_expires))
   VAR_9 = 0;
  if (VAR_7->j_flags & VAR_0)
   VAR_9 = 0;
  if (VAR_9) {
   FUNC_11(&VAR_7->j_state_lock);
   FUNC_8();
   FUNC_10(&VAR_7->j_state_lock);
  }
  FUNC_2(&VAR_7->j_wait_commit, &VAR_5);
 }

 FUNC_5(1, "kjournald2 wakes\n");




 VAR_8 = VAR_7->j_running_transaction;
 if (VAR_8 && FUNC_12(VAR_4, VAR_8->t_expires)) {
  VAR_7->j_commit_request = VAR_8->t_tid;
  FUNC_5(1, "woke because of timeout\n");
 }
 goto loop;

end_loop:
 FUNC_11(&VAR_7->j_state_lock);
 FUNC_1(&VAR_7->j_commit_timer);
 VAR_7->j_task = ((void*)0);
 FUNC_13(&VAR_7->j_wait_done_commit);
 FUNC_5(1, "Journal thread exiting.\n");
 return 0;
}
