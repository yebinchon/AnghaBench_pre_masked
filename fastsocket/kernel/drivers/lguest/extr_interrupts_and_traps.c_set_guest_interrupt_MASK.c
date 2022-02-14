
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct lg_cpu {unsigned long esp1; int ss1; TYPE_3__* lg; TYPE_1__* regs; } ;
struct TYPE_6__ {TYPE_2__* lguest_data; } ;
struct TYPE_5__ {int irq_enabled; } ;
struct TYPE_4__ {int ss; int esp; int eflags; int cs; int eip; int errcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 unsigned long FUNC_1 (struct lg_cpu*,unsigned long) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct lg_cpu*,char*) ;
 int FUNC_5 (struct lg_cpu*,unsigned long*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct lg_cpu *VAR_3, u32 VAR_4, u32 VAR_5,
    bool VAR_6)
{
 unsigned long VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12;






 if ((VAR_3->regs->ss&0x3) != VAR_0) {




  VAR_12 = VAR_3->esp1;
  VAR_10 = VAR_3->ss1;

  VAR_8 = VAR_7 = FUNC_1(VAR_3, VAR_12);






  FUNC_5(VAR_3, &VAR_7, VAR_3->regs->ss);
  FUNC_5(VAR_3, &VAR_7, VAR_3->regs->esp);
 } else {

  VAR_12 = VAR_3->regs->esp;
  VAR_10 = VAR_3->regs->ss;

  VAR_8 = VAR_7 = FUNC_1(VAR_3, VAR_12);
 }







 VAR_9 = VAR_3->regs->eflags;
 if (FUNC_0(VAR_11, &VAR_3->lg->lguest_data->irq_enabled) == 0
     && !(VAR_11 & VAR_1))
  VAR_9 &= ~VAR_1;






 FUNC_5(VAR_3, &VAR_7, VAR_9);
 FUNC_5(VAR_3, &VAR_7, VAR_3->regs->cs);
 FUNC_5(VAR_3, &VAR_7, VAR_3->regs->eip);


 if (VAR_6)
  FUNC_5(VAR_3, &VAR_7, VAR_3->regs->errcode);





 VAR_3->regs->ss = VAR_10;
 VAR_3->regs->esp = VAR_12 + (VAR_7 - VAR_8);
 VAR_3->regs->cs = (VAR_2|VAR_0);
 VAR_3->regs->eip = FUNC_2(VAR_4, VAR_5);





 if (FUNC_3(VAR_4, VAR_5) == 0xE)
  if (FUNC_6(0, &VAR_3->lg->lguest_data->irq_enabled))
   FUNC_4(VAR_3, "Disabling interrupts");
}
