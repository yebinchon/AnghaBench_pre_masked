
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int dummy; } ;
struct irq_fd {scalar_t__ current_events; int irq; struct irq_fd* next; } ;


 int VAR_0 ;
 struct irq_fd* VAR_1 ;
 int FUNC_0 (int ,struct uml_pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct irq_fd*) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(int VAR_2, struct uml_pt_regs *VAR_3)
{
 struct irq_fd *VAR_4;
 int VAR_5;

 if (FUNC_3())
  return;

 while (1) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 <= 0) {
   if (VAR_5 == -VAR_0)
    continue;
   else break;
  }

  for (VAR_4 = VAR_1; VAR_4 != ((void*)0);
       VAR_4 = VAR_4->next) {
   if (VAR_4->current_events != 0) {
    VAR_4->current_events = 0;
    FUNC_0(VAR_4->irq, VAR_3);
   }
  }
 }

 FUNC_1();
}
