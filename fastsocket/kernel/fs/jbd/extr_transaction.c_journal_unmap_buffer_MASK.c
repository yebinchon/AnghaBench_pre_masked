
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int transaction_t ;
struct journal_head {scalar_t__ b_jlist; int * b_next_transaction; int b_cp_transaction; int * b_transaction; } ;
struct buffer_head {int * b_bdev; } ;
struct TYPE_3__ {int j_state_lock; int j_list_lock; int * j_running_transaction; int * j_committing_transaction; } ;
typedef TYPE_1__ journal_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct buffer_head*,int) ;
 int FUNC_4 (struct journal_head*,int) ;
 int FUNC_5 (struct journal_head*,int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 struct journal_head* FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct journal_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(journal_t *VAR_1, struct buffer_head *VAR_2)
{
 transaction_t *VAR_3;
 struct journal_head *VAR_4;
 int VAR_5 = 1;
 int VAR_6;

 FUNC_0(VAR_2, "entry");







 if (!FUNC_7(VAR_2))
  goto zap_buffer_unlocked;

 FUNC_19(&VAR_1->j_state_lock);
 FUNC_14(VAR_2);
 FUNC_19(&VAR_1->j_list_lock);

 VAR_4 = FUNC_16(VAR_2);
 if (!VAR_4)
  goto zap_buffer_no_jh;

 VAR_3 = VAR_4->b_transaction;
 if (VAR_3 == ((void*)0)) {




  if (!VAR_4->b_cp_transaction) {
   FUNC_1(VAR_4, "not on any transaction: zap");
   goto zap_buffer;
  }

  if (!FUNC_6(VAR_2)) {

   goto zap_buffer;
  }





  if (VAR_1->j_running_transaction) {



   FUNC_1(VAR_4, "checkpointed: add to BJ_Forget");
   VAR_6 = FUNC_5(VAR_4,
     VAR_1->j_running_transaction);
   FUNC_17(VAR_4);
   FUNC_20(&VAR_1->j_list_lock);
   FUNC_15(VAR_2);
   FUNC_20(&VAR_1->j_state_lock);
   return VAR_6;
  } else {




   if (VAR_1->j_committing_transaction) {
    FUNC_1(VAR_4, "give to committing trans");
    VAR_6 = FUNC_5(VAR_4,
     VAR_1->j_committing_transaction);
    FUNC_17(VAR_4);
    FUNC_20(&VAR_1->j_list_lock);
    FUNC_15(VAR_2);
    FUNC_20(&VAR_1->j_state_lock);
    return VAR_6;
   } else {


    FUNC_10(VAR_2);
    goto zap_buffer;
   }
  }
 } else if (VAR_3 == VAR_1->j_committing_transaction) {
  FUNC_1(VAR_4, "on committing transaction");
  if (VAR_4->b_jlist == VAR_0) {





   VAR_5 = FUNC_5(VAR_4, VAR_3);
   goto zap_buffer;
  }





  FUNC_18(VAR_2);
  if (VAR_4->b_next_transaction) {
   FUNC_2(VAR_4->b_next_transaction ==
     VAR_1->j_running_transaction);
   VAR_4->b_next_transaction = ((void*)0);
  }
  FUNC_17(VAR_4);
  FUNC_20(&VAR_1->j_list_lock);
  FUNC_15(VAR_2);
  FUNC_20(&VAR_1->j_state_lock);
  return 0;
 } else {






  FUNC_4(VAR_4, VAR_3 == VAR_1->j_running_transaction);
  FUNC_1(VAR_4, "on running transaction");
  VAR_5 = FUNC_5(VAR_4, VAR_3);
 }

zap_buffer:
 FUNC_17(VAR_4);
zap_buffer_no_jh:
 FUNC_20(&VAR_1->j_list_lock);
 FUNC_15(VAR_2);
 FUNC_20(&VAR_1->j_state_lock);
zap_buffer_unlocked:
 FUNC_9(VAR_2);
 FUNC_3(VAR_2, !FUNC_8(VAR_2));
 FUNC_11(VAR_2);
 FUNC_13(VAR_2);
 FUNC_12(VAR_2);
 VAR_2->b_bdev = ((void*)0);
 return VAR_5;
}
