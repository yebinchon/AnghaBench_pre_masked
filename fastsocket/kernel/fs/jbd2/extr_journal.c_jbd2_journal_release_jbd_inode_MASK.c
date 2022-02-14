
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct jbd2_inode {int * i_transaction; int i_list; int i_flags; } ;
struct TYPE_5__ {int j_list_lock; int * j_committing_transaction; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {int wait; } ;


 int FUNC_0 (TYPE_2__,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 TYPE_2__ VAR_2 ;

void FUNC_10(journal_t *VAR_3,
        struct jbd2_inode *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3)
  return;
restart:
 FUNC_7(&VAR_3->j_list_lock);

 if (FUNC_9(VAR_1, &VAR_4->i_flags)) {
  wait_queue_head_t *VAR_6;
  FUNC_0(VAR_2, &VAR_4->i_flags, VAR_1);
  FUNC_6();
  VAR_6 = FUNC_1(&VAR_4->i_flags, VAR_1);
  FUNC_4(VAR_6, &VAR_2.wait, VAR_0);
  FUNC_8(&VAR_3->j_list_lock);
  FUNC_5();
  FUNC_2(VAR_6, &VAR_2.wait);
  goto restart;
 }


 if (VAR_3->j_committing_transaction == VAR_4->i_transaction)
  VAR_5 = 1;
 if (VAR_4->i_transaction) {
  FUNC_3(&VAR_4->i_list);
  VAR_4->i_transaction = ((void*)0);
 }
 FUNC_8(&VAR_3->j_list_lock);
}
