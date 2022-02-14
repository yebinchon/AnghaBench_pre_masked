
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int j_state_lock; int * j_task; int j_wait_done_commit; int j_wait_commit; int j_flags; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(journal_t *VAR_1)
{
 FUNC_0(&VAR_1->j_state_lock);
 VAR_1->j_flags |= VAR_0;

 while (VAR_1->j_task) {
  FUNC_3(&VAR_1->j_wait_commit);
  FUNC_1(&VAR_1->j_state_lock);
  FUNC_2(VAR_1->j_wait_done_commit,
    VAR_1->j_task == ((void*)0));
  FUNC_0(&VAR_1->j_state_lock);
 }
 FUNC_1(&VAR_1->j_state_lock);
}
