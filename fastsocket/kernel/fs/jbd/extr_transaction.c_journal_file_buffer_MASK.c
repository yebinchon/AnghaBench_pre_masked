
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* t_journal; } ;
typedef TYPE_2__ transaction_t ;
struct journal_head {int dummy; } ;
struct TYPE_5__ {int j_list_lock; } ;


 int FUNC_0 (struct journal_head*,TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct journal_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct journal_head *VAR_0,
    transaction_t *VAR_1, int VAR_2)
{
 FUNC_1(FUNC_3(VAR_0));
 FUNC_4(&VAR_1->t_journal->j_list_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_1->t_journal->j_list_lock);
 FUNC_2(FUNC_3(VAR_0));
}
