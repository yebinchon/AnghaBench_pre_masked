
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {scalar_t__ b_jlist; TYPE_1__* b_next_transaction; scalar_t__ b_modified; TYPE_1__* b_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_9__ {int j_list_lock; TYPE_1__* j_committing_transaction; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_10__ {TYPE_1__* h_transaction; } ;
typedef TYPE_3__ handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct journal_head*,int) ;
 int FUNC_2 (struct journal_head*,TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int,char*,struct journal_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct journal_head*) ;
 struct journal_head* FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (TYPE_3__*,struct journal_head*) ;
 int FUNC_12 (struct journal_head*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(handle_t *VAR_3, struct buffer_head *VAR_4)
{
 transaction_t *VAR_5 = VAR_3->h_transaction;
 journal_t *VAR_6 = VAR_5->t_journal;
 struct journal_head *VAR_7 = FUNC_10(VAR_4);
 int VAR_8;

 FUNC_6(5, "journal_head %p\n", VAR_7);
 VAR_8 = -VAR_2;
 if (FUNC_5(VAR_3))
  goto out;
 VAR_8 = 0;

 FUNC_0(VAR_7, "entry");







 FUNC_7(VAR_4);
 FUNC_13(&VAR_6->j_list_lock);
 FUNC_1(VAR_7, (VAR_7->b_transaction == VAR_5 ||
  VAR_7->b_transaction == ((void*)0) ||
  (VAR_7->b_transaction == VAR_6->j_committing_transaction &&
     VAR_7->b_jlist == VAR_0)));

 FUNC_1(VAR_7, VAR_7->b_next_transaction == ((void*)0));
 FUNC_1(VAR_7, FUNC_3(FUNC_9(VAR_7)));

 if (VAR_7->b_transaction == ((void*)0)) {
  FUNC_4(FUNC_9(VAR_7));
  VAR_7->b_transaction = VAR_5;


  VAR_7->b_modified = 0;

  FUNC_0(VAR_7, "file as BJ_Reserved");
  FUNC_2(VAR_7, VAR_5, VAR_1);
 } else if (VAR_7->b_transaction == VAR_6->j_committing_transaction) {

  VAR_7->b_modified = 0;

  FUNC_0(VAR_7, "set next transaction");
  VAR_7->b_next_transaction = VAR_5;
 }
 FUNC_14(&VAR_6->j_list_lock);
 FUNC_8(VAR_4);
 FUNC_0(VAR_7, "cancelling revoke");
 FUNC_11(VAR_3, VAR_7);
 FUNC_12(VAR_7);
out:
 return VAR_8;
}
