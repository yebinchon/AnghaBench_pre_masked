
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {struct jbd2_buffer_trigger_type* b_triggers; } ;
struct jbd2_buffer_trigger_type {int dummy; } ;
struct buffer_head {int dummy; } ;


 struct journal_head* FUNC_0 (struct buffer_head*) ;

void FUNC_1(struct buffer_head *VAR_0,
          struct jbd2_buffer_trigger_type *VAR_1)
{
 struct journal_head *VAR_2 = FUNC_0(VAR_0);

 VAR_2->b_triggers = VAR_1;
}
