
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_dmae_regs {int dummy; } ;
struct list_head {struct list_head* next; } ;
struct sh_dmae_chan {struct list_head ld_queue; } ;
struct TYPE_2__ {scalar_t__ mark; struct sh_dmae_regs hw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct sh_dmae_chan*) ;
 int FUNC_2 (struct sh_dmae_chan*,struct sh_dmae_regs) ;
 int FUNC_3 (struct sh_dmae_chan*) ;
 TYPE_1__* FUNC_4 (struct list_head*) ;

__attribute__((used)) static void FUNC_5(struct sh_dmae_chan *VAR_1)
{
 struct list_head *VAR_2;
 struct sh_dmae_regs VAR_3;


 if (FUNC_1(VAR_1))
  return;


 for (VAR_2 = VAR_1->ld_queue.next;
  (VAR_2 != &VAR_1->ld_queue)
   && (FUNC_4(VAR_2)->mark == VAR_0);
  VAR_2 = VAR_2->next)
  FUNC_0();

 if (VAR_2 != &VAR_1->ld_queue) {

  VAR_3 = FUNC_4(VAR_2)->hw;
  FUNC_2(VAR_1, VAR_3);
  FUNC_3(VAR_1);
 }
}
