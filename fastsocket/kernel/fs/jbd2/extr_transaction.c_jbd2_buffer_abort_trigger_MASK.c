
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int dummy; } ;
struct jbd2_buffer_trigger_type {int (* t_abort ) (struct jbd2_buffer_trigger_type*,int ) ;} ;


 int FUNC_0 (struct journal_head*) ;
 int FUNC_1 (struct jbd2_buffer_trigger_type*,int ) ;

void FUNC_2(struct journal_head *VAR_0,
          struct jbd2_buffer_trigger_type *VAR_1)
{
 if (!VAR_1 || !VAR_1->t_abort)
  return;

 VAR_1->t_abort(VAR_1, FUNC_0(VAR_0));
}
