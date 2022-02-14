
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {struct desc_struct* idt; } ;
struct lg_cpu {TYPE_4__* lg; int irqs_pending; TYPE_2__ arch; scalar_t__ halted; TYPE_1__* regs; } ;
struct desc_struct {int b; int a; } ;
struct TYPE_8__ {scalar_t__ noirq_start; scalar_t__ noirq_end; TYPE_3__* lguest_data; } ;
struct TYPE_7__ {int irq_pending; int irq_enabled; } ;
struct TYPE_5__ {scalar_t__ eip; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct lg_cpu*,char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct lg_cpu*,int ,int ,int) ;
 int FUNC_7 (struct lg_cpu*) ;

void FUNC_8(struct lg_cpu *VAR_3, unsigned int VAR_4, bool VAR_5)
{
 struct desc_struct *VAR_6;

 FUNC_0(VAR_4 >= VAR_1);





 if (VAR_3->regs->eip >= VAR_3->lg->noirq_start &&
    (VAR_3->regs->eip < VAR_3->lg->noirq_end))
  return;


 if (VAR_3->halted) {

  if (FUNC_5(VAR_2, &VAR_3->lg->lguest_data->irq_enabled))
   FUNC_4(VAR_3, "Re-enabling interrupts");
  VAR_3->halted = 0;
 } else {

  u32 VAR_7;
  if (FUNC_2(VAR_7, &VAR_3->lg->lguest_data->irq_enabled))
   VAR_7 = 0;
  if (!VAR_7) {

   FUNC_5(VAR_2,
     &VAR_3->lg->lguest_data->irq_pending);
   return;
  }
 }






 VAR_6 = &VAR_3->arch.idt[VAR_0+VAR_4];

 if (FUNC_3(VAR_6->a, VAR_6->b)) {

  FUNC_1(VAR_4, VAR_3->irqs_pending);





  FUNC_6(VAR_3, VAR_6->a, VAR_6->b, 0);
 }
 FUNC_7(VAR_3);





 if (!VAR_5)
  FUNC_5(0, &VAR_3->lg->lguest_data->irq_pending);
}
