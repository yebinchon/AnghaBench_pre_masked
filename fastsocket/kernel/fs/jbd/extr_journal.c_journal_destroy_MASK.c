
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* j_wbuf; scalar_t__ j_revoke; scalar_t__ j_inode; scalar_t__ j_sb_buffer; scalar_t__ j_transaction_sequence; scalar_t__ j_tail_sequence; scalar_t__ j_tail; int j_list_lock; int * j_checkpoint_transactions; int * j_committing_transaction; int * j_running_transaction; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(journal_t *VAR_1)
{
 int VAR_2 = 0;


 FUNC_6(VAR_1);


 if (VAR_1->j_running_transaction)
  FUNC_4(VAR_1);




 FUNC_10(&VAR_1->j_list_lock);
 while (VAR_1->j_checkpoint_transactions != ((void*)0)) {
  FUNC_11(&VAR_1->j_list_lock);
  FUNC_9(VAR_1);
  FUNC_10(&VAR_1->j_list_lock);
 }

 FUNC_0(VAR_1->j_running_transaction == ((void*)0));
 FUNC_0(VAR_1->j_committing_transaction == ((void*)0));
 FUNC_0(VAR_1->j_checkpoint_transactions == ((void*)0));
 FUNC_11(&VAR_1->j_list_lock);

 if (VAR_1->j_sb_buffer) {
  if (!FUNC_3(VAR_1)) {

   VAR_1->j_tail = 0;
   VAR_1->j_tail_sequence =
    ++VAR_1->j_transaction_sequence;
   FUNC_7(VAR_1, 1);
  } else {
   VAR_2 = -VAR_0;
  }
  FUNC_1(VAR_1->j_sb_buffer);
 }

 if (VAR_1->j_inode)
  FUNC_2(VAR_1->j_inode);
 if (VAR_1->j_revoke)
  FUNC_5(VAR_1);
 FUNC_8(VAR_1->j_wbuf);
 FUNC_8(VAR_1);

 return VAR_2;
}
