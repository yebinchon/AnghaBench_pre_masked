
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct journal_head* t_checkpoint_io_list; } ;
typedef TYPE_1__ transaction_t ;
struct journal_head {struct journal_head* b_cpprev; struct journal_head* b_cpnext; TYPE_1__* b_cp_transaction; } ;


 int FUNC_0 (struct journal_head*) ;

__attribute__((used)) static inline void FUNC_1(struct journal_head *VAR_0)
{
 transaction_t *VAR_1 = VAR_0->b_cp_transaction;

 FUNC_0(VAR_0);

 if (!VAR_1->t_checkpoint_io_list) {
  VAR_0->b_cpnext = VAR_0->b_cpprev = VAR_0;
 } else {
  VAR_0->b_cpnext = VAR_1->t_checkpoint_io_list;
  VAR_0->b_cpprev = VAR_1->t_checkpoint_io_list->b_cpprev;
  VAR_0->b_cpprev->b_cpnext = VAR_0;
  VAR_0->b_cpnext->b_cpprev = VAR_0;
 }
 VAR_1->t_checkpoint_io_list = VAR_0;
}
