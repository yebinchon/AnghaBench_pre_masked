
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct journal_head {scalar_t__ b_jlist; int * b_transaction; int * b_cp_transaction; int * b_next_transaction; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int j_list_lock; } ;
typedef TYPE_1__ journal_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct journal_head*) ;
 struct journal_head* FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(journal_t *VAR_1, struct buffer_head *VAR_2)
{
 struct journal_head *VAR_3;

 VAR_3 = FUNC_3(VAR_2);

 if (FUNC_5(VAR_2) || FUNC_4(VAR_2))
  goto out;

 if (VAR_3->b_next_transaction != ((void*)0))
  goto out;

 FUNC_7(&VAR_1->j_list_lock);
 if (VAR_3->b_cp_transaction != ((void*)0) && VAR_3->b_transaction == ((void*)0)) {

  if (VAR_3->b_jlist == VAR_0) {
   FUNC_0(VAR_3, "remove from checkpoint list");
   FUNC_2(VAR_3);
   FUNC_6(VAR_2);
   FUNC_1(VAR_2);
  }
 }
 FUNC_8(&VAR_1->j_list_lock);
out:
 return;
}
