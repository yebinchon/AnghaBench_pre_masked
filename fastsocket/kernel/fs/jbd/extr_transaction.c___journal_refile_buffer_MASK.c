
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {TYPE_2__* b_transaction; scalar_t__ b_modified; TYPE_2__* b_next_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ t_state; TYPE_1__* t_journal; } ;
struct TYPE_3__ {int j_list_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct journal_head*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct journal_head*,TYPE_2__*,int ) ;
 int FUNC_2 (struct journal_head*) ;
 int FUNC_3 (struct journal_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 struct buffer_head* FUNC_6 (struct journal_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

void FUNC_9(struct journal_head *VAR_3)
{
 int VAR_4;
 struct buffer_head *VAR_5 = FUNC_6(VAR_3);

 FUNC_0(VAR_3, FUNC_5(VAR_5));
 if (VAR_3->b_transaction)
  FUNC_4(&VAR_3->b_transaction->t_journal->j_list_lock);


 if (VAR_3->b_next_transaction == ((void*)0)) {
  FUNC_3(VAR_3);
  return;
 }






 VAR_4 = FUNC_8(VAR_5);
 FUNC_2(VAR_3);
 VAR_3->b_transaction = VAR_3->b_next_transaction;
 VAR_3->b_next_transaction = ((void*)0);
 FUNC_1(VAR_3, VAR_3->b_transaction,
    VAR_3->b_modified ? VAR_0 : VAR_1);
 FUNC_0(VAR_3, VAR_3->b_transaction->t_state == VAR_2);

 if (VAR_4)
  FUNC_7(VAR_5);
}
