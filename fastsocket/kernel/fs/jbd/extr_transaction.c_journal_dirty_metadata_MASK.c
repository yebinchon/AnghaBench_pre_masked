
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {int b_modified; scalar_t__ b_jlist; int * b_frozen_data; TYPE_1__* b_next_transaction; TYPE_1__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {int j_list_lock; TYPE_1__* j_committing_transaction; TYPE_1__* j_running_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_9__ {scalar_t__ h_buffer_credits; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*,int) ;
 int FUNC_2 (struct journal_head*,TYPE_1__*,scalar_t__) ;
 struct journal_head* FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,char*,struct journal_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(handle_t *VAR_1, struct buffer_head *VAR_2)
{
 transaction_t *VAR_3 = VAR_1->h_transaction;
 journal_t *VAR_4 = VAR_3->t_journal;
 struct journal_head *VAR_5 = FUNC_3(VAR_2);

 FUNC_5(5, "journal_head %p\n", VAR_5);
 FUNC_0(VAR_5, "entry");
 if (FUNC_4(VAR_1))
  goto out;

 FUNC_6(VAR_2);

 if (VAR_5->b_modified == 0) {





  VAR_5->b_modified = 1;
  FUNC_1(VAR_5, VAR_1->h_buffer_credits > 0);
  VAR_1->h_buffer_credits--;
 }
 if (VAR_5->b_transaction == VAR_3 && VAR_5->b_jlist == VAR_0) {
  FUNC_0(VAR_5, "fastpath");
  FUNC_1(VAR_5, VAR_5->b_transaction ==
     VAR_4->j_running_transaction);
  goto out_unlock_bh;
 }

 FUNC_8(VAR_2);







 if (VAR_5->b_transaction != VAR_3) {
  FUNC_0(VAR_5, "already on other transaction");
  FUNC_1(VAR_5, VAR_5->b_transaction ==
     VAR_4->j_committing_transaction);
  FUNC_1(VAR_5, VAR_5->b_next_transaction == VAR_3);


  goto out_unlock_bh;
 }


 FUNC_1(VAR_5, VAR_5->b_frozen_data == ((void*)0));

 FUNC_0(VAR_5, "file as BJ_Metadata");
 FUNC_9(&VAR_4->j_list_lock);
 FUNC_2(VAR_5, VAR_1->h_transaction, VAR_0);
 FUNC_10(&VAR_4->j_list_lock);
out_unlock_bh:
 FUNC_7(VAR_2);
out:
 FUNC_0(VAR_5, "exit");
 return 0;
}
