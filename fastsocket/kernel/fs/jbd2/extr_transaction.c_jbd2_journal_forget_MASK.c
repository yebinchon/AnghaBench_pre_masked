
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {int b_modified; TYPE_1__* b_next_transaction; TYPE_1__* b_transaction; scalar_t__ b_cp_transaction; int b_frozen_data; int b_committed_data; } ;
struct buffer_head {int dummy; } ;
struct TYPE_7__ {int j_list_lock; TYPE_1__* j_committing_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_8__ {int h_buffer_credits; TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct journal_head*,int) ;
 int FUNC_4 (struct journal_head*,int,char*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct journal_head*,TYPE_1__*,int ) ;
 int FUNC_8 (struct journal_head*) ;
 int FUNC_9 (struct journal_head*) ;
 struct journal_head* FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int FUNC_19 (handle_t *VAR_2, struct buffer_head *VAR_3)
{
 transaction_t *VAR_4 = VAR_2->h_transaction;
 journal_t *VAR_5 = VAR_4->t_journal;
 struct journal_head *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_0(VAR_3, "entry");

 FUNC_15(VAR_3);
 FUNC_17(&VAR_5->j_list_lock);

 if (!FUNC_11(VAR_3))
  goto not_jbd;
 VAR_6 = FUNC_10(VAR_3);



 if (!FUNC_4(VAR_6, !VAR_6->b_committed_data,
    "inconsistent data on disk")) {
  VAR_8 = -VAR_1;
  goto not_jbd;
 }


 VAR_9 = VAR_6->b_modified;





 VAR_6->b_modified = 0;

 if (VAR_6->b_transaction == VAR_2->h_transaction) {
  FUNC_3(VAR_6, !VAR_6->b_frozen_data);




  FUNC_12(VAR_3);
  FUNC_13(VAR_3);

  FUNC_1(VAR_6, "belongs to current transaction: unfile");





  if (VAR_9)
   VAR_7 = 1;
  if (VAR_6->b_cp_transaction) {
   FUNC_8(VAR_6);
   FUNC_7(VAR_6, VAR_4, VAR_0);
  } else {
   FUNC_9(VAR_6);
   FUNC_14(VAR_3);
   FUNC_6(VAR_3);
   if (!FUNC_11(VAR_3)) {
    FUNC_18(&VAR_5->j_list_lock);
    FUNC_16(VAR_3);
    FUNC_5(VAR_3);
    goto drop;
   }
  }
 } else if (VAR_6->b_transaction) {
  FUNC_3(VAR_6, (VAR_6->b_transaction ==
     VAR_5->j_committing_transaction));


  FUNC_1(VAR_6, "belongs to older transaction");



  if (VAR_6->b_next_transaction) {
   FUNC_2(VAR_6->b_next_transaction == VAR_4);
   VAR_6->b_next_transaction = ((void*)0);





   if (VAR_9)
    VAR_7 = 1;
  }
 }

not_jbd:
 FUNC_18(&VAR_5->j_list_lock);
 FUNC_16(VAR_3);
 FUNC_6(VAR_3);
drop:
 if (VAR_7) {

  VAR_2->h_buffer_credits++;
 }
 return VAR_8;
}
