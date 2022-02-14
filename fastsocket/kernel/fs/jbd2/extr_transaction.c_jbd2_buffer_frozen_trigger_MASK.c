
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_head {int dummy; } ;
struct jbd2_buffer_trigger_type {int (* t_frozen ) (struct jbd2_buffer_trigger_type*,struct buffer_head*,void*,int ) ;} ;
struct buffer_head {int b_size; } ;


 struct buffer_head* FUNC_0 (struct journal_head*) ;
 int FUNC_1 (struct jbd2_buffer_trigger_type*,struct buffer_head*,void*,int ) ;

void FUNC_2(struct journal_head *VAR_0, void *VAR_1,
    struct jbd2_buffer_trigger_type *VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_0(VAR_0);

 if (!VAR_2 || !VAR_2->t_frozen)
  return;

 VAR_2->t_frozen(VAR_2, VAR_3, VAR_1, VAR_3->b_size);
}
