
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct journal_head {scalar_t__ b_jlist; TYPE_5__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_6__ {int j_list_lock; TYPE_5__* j_committing_transaction; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_7__ {TYPE_5__* h_transaction; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_8__ {int t_tid; TYPE_1__* t_journal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct journal_head*,char*) ;
 int FUNC_2 (struct journal_head*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct journal_head*,TYPE_5__*,scalar_t__) ;
 int FUNC_5 (struct journal_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int,char*,struct journal_head*,int ) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 struct journal_head* FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct journal_head*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct buffer_head*) ;
 scalar_t__ FUNC_19 (int) ;

int FUNC_20(handle_t *VAR_5, struct buffer_head *VAR_6)
{
 journal_t *VAR_7 = VAR_5->h_transaction->t_journal;
 int VAR_8 = 0;
 struct journal_head *VAR_9;
 int VAR_10 = 0;

 if (FUNC_10(VAR_5))
  return VAR_10;

 VAR_9 = FUNC_14(VAR_6);
 FUNC_1(VAR_9, "entry");





 FUNC_11(4, "jh: %p, tid:%d\n", VAR_9, VAR_5->h_transaction->t_tid);
 FUNC_12(VAR_6);
 FUNC_16(&VAR_7->j_list_lock);


 if (!FUNC_7(VAR_6)) {
  FUNC_1(VAR_9, "unmapped buffer, bailing out");
  goto no_journal;
 }

 if (VAR_9->b_transaction) {
  FUNC_1(VAR_9, "has transaction");
  if (VAR_9->b_transaction != VAR_5->h_transaction) {
   FUNC_1(VAR_9, "belongs to older transaction");
   FUNC_2(VAR_9, VAR_9->b_transaction ==
     VAR_7->j_committing_transaction);
   if (VAR_9->b_jlist != VAR_1 &&
     VAR_9->b_jlist != VAR_3 &&
     VAR_9->b_jlist != VAR_0) {
    FUNC_1(VAR_9, "Not stealing");
    goto no_journal;
   }







   if (FUNC_6(VAR_6)) {
    FUNC_9(VAR_6);
    FUNC_17(&VAR_7->j_list_lock);
    FUNC_13(VAR_6);
    VAR_8 = 1;
    FUNC_18(VAR_6);
    FUNC_12(VAR_6);
    FUNC_16(&VAR_7->j_list_lock);

    if (!FUNC_7(VAR_6)) {
     FUNC_1(VAR_9, "buffer got unmapped");
     goto no_journal;
    }


   }






   if (FUNC_19(!FUNC_8(VAR_6))) {
    VAR_10 = -VAR_4;
    goto no_journal;
   }

   if (VAR_9->b_transaction != ((void*)0)) {
    FUNC_1(VAR_9, "unfile from commit");
    FUNC_5(VAR_9);




    VAR_9->b_transaction = VAR_5->h_transaction;
   }


  }






  if (VAR_9->b_jlist != VAR_3 && VAR_9->b_jlist != VAR_0) {
   FUNC_1(VAR_9, "not on correct data list: unfile");
   FUNC_2(VAR_9, VAR_9->b_jlist != VAR_2);
   FUNC_5(VAR_9);
   VAR_9->b_transaction = VAR_5->h_transaction;
   FUNC_1(VAR_9, "file as data");
   FUNC_4(VAR_9, VAR_5->h_transaction,
      VAR_3);
  }
 } else {
  FUNC_1(VAR_9, "not on a transaction");
  FUNC_4(VAR_9, VAR_5->h_transaction, VAR_3);
 }
no_journal:
 FUNC_17(&VAR_7->j_list_lock);
 FUNC_13(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_6, "brelse");
  FUNC_3(VAR_6);
 }
 FUNC_1(VAR_9, "exit");
 FUNC_15(VAR_9);
 return VAR_10;
}
