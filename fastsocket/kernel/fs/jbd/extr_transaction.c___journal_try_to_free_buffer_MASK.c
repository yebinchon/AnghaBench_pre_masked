
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct journal_head*,char*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct journal_head*) ;
 int FUNC_3 (struct journal_head*) ;
 struct journal_head* FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(journal_t *VAR_3, struct buffer_head *VAR_4)
{
 struct journal_head *VAR_5;

 VAR_5 = FUNC_4(VAR_4);

 if (FUNC_6(VAR_4) || FUNC_5(VAR_4))
  goto out;

 if (VAR_5->b_next_transaction != ((void*)0))
  goto out;

 FUNC_8(&VAR_3->j_list_lock);
 if (VAR_5->b_transaction != ((void*)0) && VAR_5->b_cp_transaction == ((void*)0)) {
  if (VAR_5->b_jlist == VAR_2 || VAR_5->b_jlist == VAR_0) {

   FUNC_0(VAR_5, "release data");
   FUNC_3(VAR_5);
   FUNC_7(VAR_4);
   FUNC_1(VAR_4);
  }
 } else if (VAR_5->b_cp_transaction != ((void*)0) && VAR_5->b_transaction == ((void*)0)) {

  if (VAR_5->b_jlist == VAR_1) {
   FUNC_0(VAR_5, "remove from checkpoint list");
   FUNC_2(VAR_5);
   FUNC_7(VAR_4);
   FUNC_1(VAR_4);
  }
 }
 FUNC_9(&VAR_3->j_list_lock);
out:
 return;
}
