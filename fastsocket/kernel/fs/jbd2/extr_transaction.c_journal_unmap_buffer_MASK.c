
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int transaction_t ;
struct journal_head {int * b_next_transaction; int b_cp_transaction; int * b_transaction; } ;
struct buffer_head {int * b_bdev; } ;
struct TYPE_3__ {int j_state_lock; int j_list_lock; int * j_running_transaction; int * j_committing_transaction; } ;
typedef TYPE_1__ journal_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (struct buffer_head*,int) ;
 int FUNC_3 (struct journal_head*,int) ;
 int FUNC_4 (struct journal_head*,int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 struct journal_head* FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct journal_head*) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (struct buffer_head*) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(journal_t *VAR_0, struct buffer_head *VAR_1)
{
 transaction_t *VAR_2;
 struct journal_head *VAR_3;
 int VAR_4 = 1;
 int VAR_5;

 FUNC_0(VAR_1, "entry");







 if (!FUNC_6(VAR_1))
  goto zap_buffer_unlocked;


 FUNC_20(&VAR_0->j_state_lock);
 FUNC_17(VAR_1);
 FUNC_20(&VAR_0->j_list_lock);

 VAR_3 = FUNC_15(VAR_1);
 if (!VAR_3)
  goto zap_buffer_no_jh;
 VAR_2 = VAR_3->b_transaction;
 if (VAR_2 == ((void*)0)) {




  if (!VAR_3->b_cp_transaction) {
   FUNC_1(VAR_3, "not on any transaction: zap");
   goto zap_buffer;
  }

  if (!FUNC_5(VAR_1)) {

   goto zap_buffer;
  }





  if (VAR_0->j_running_transaction) {



   FUNC_1(VAR_3, "checkpointed: add to BJ_Forget");
   VAR_5 = FUNC_4(VAR_3,
     VAR_0->j_running_transaction);
   FUNC_16(VAR_3);
   FUNC_21(&VAR_0->j_list_lock);
   FUNC_18(VAR_1);
   FUNC_21(&VAR_0->j_state_lock);
   return VAR_5;
  } else {




   if (VAR_0->j_committing_transaction) {
    FUNC_1(VAR_3, "give to committing trans");
    VAR_5 = FUNC_4(VAR_3,
     VAR_0->j_committing_transaction);
    FUNC_16(VAR_3);
    FUNC_21(&VAR_0->j_list_lock);
    FUNC_18(VAR_1);
    FUNC_21(&VAR_0->j_state_lock);
    return VAR_5;
   } else {


    FUNC_10(VAR_1);
    goto zap_buffer;
   }
  }
 } else if (VAR_2 == VAR_0->j_committing_transaction) {
  FUNC_1(VAR_3, "on committing transaction");







  FUNC_19(VAR_1);
  if (VAR_0->j_running_transaction && FUNC_7(VAR_1))
   VAR_3->b_next_transaction = VAR_0->j_running_transaction;
  FUNC_16(VAR_3);
  FUNC_21(&VAR_0->j_list_lock);
  FUNC_18(VAR_1);
  FUNC_21(&VAR_0->j_state_lock);
  return 0;
 } else {






  FUNC_3(VAR_3, VAR_2 == VAR_0->j_running_transaction);
  FUNC_1(VAR_3, "on running transaction");
  VAR_4 = FUNC_4(VAR_3, VAR_2);
 }

zap_buffer:
 FUNC_16(VAR_3);
zap_buffer_no_jh:
 FUNC_21(&VAR_0->j_list_lock);
 FUNC_18(VAR_1);
 FUNC_21(&VAR_0->j_state_lock);
zap_buffer_unlocked:
 FUNC_9(VAR_1);
 FUNC_2(VAR_1, !FUNC_7(VAR_1));
 FUNC_11(VAR_1);
 FUNC_13(VAR_1);
 FUNC_12(VAR_1);
 FUNC_8(VAR_1);
 FUNC_14(VAR_1);
 VAR_1->b_bdev = ((void*)0);
 return VAR_4;
}
