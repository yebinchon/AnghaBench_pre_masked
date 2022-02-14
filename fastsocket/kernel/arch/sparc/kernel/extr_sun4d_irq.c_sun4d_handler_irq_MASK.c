
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbus_action {struct irqaction* action; } ;
struct pt_regs {int dummy; } ;
struct irqaction {struct irqaction* next; int dev_id; int (* handler ) (int,int ) ;} ;
struct TYPE_2__ {int * irqs; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 struct irqaction** VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_1__ FUNC_8 (int) ;
 int* VAR_1 ;
 int FUNC_9 (int ,unsigned int) ;
 struct sbus_action* VAR_2 ;
 struct pt_regs* FUNC_10 (struct pt_regs*) ;
 int FUNC_11 () ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int *,struct pt_regs*) ;

void FUNC_15(int VAR_3, struct pt_regs * VAR_4)
{
 struct pt_regs *VAR_5;
 struct irqaction * VAR_6;
 int VAR_7 = FUNC_11();

 int VAR_8 = VAR_1[VAR_3];


 FUNC_4();

 FUNC_5(1 << VAR_3);

 VAR_5 = FUNC_10(VAR_4);
 FUNC_6();
 FUNC_8(VAR_7).irqs[VAR_3]++;
 if (!VAR_8) {
  VAR_6 = *(VAR_3 + VAR_0);
  if (!VAR_6)
   FUNC_14(VAR_3, ((void*)0), VAR_4);
  do {
   VAR_6->handler(VAR_3, VAR_6->dev_id);
   VAR_6 = VAR_6->next;
  } while (VAR_6);
 } else {
  int VAR_9 = FUNC_3(VAR_8) & 0x3ffff;
  int VAR_10;
  struct sbus_action *VAR_11;
  unsigned VAR_12, VAR_13;
  int VAR_14 = (VAR_8 << 2);

  FUNC_2(VAR_8, VAR_9);


  for (VAR_10 = 0; VAR_9; VAR_10++, VAR_9 >>= 1)
   if (VAR_9 & 1) {
    VAR_12 = FUNC_1(FUNC_0(VAR_10), 0xf << VAR_14);
    VAR_12 &= (0xf << VAR_14);
    VAR_11 = VAR_2 + (VAR_10 << 5) + (VAR_14);

    for (VAR_13 = (1 << VAR_14); VAR_12; VAR_13 <<= 1, VAR_11++)
     if (VAR_12 & VAR_13) {
      VAR_12 &= ~VAR_13;
      VAR_6 = VAR_11->action;

      if (!VAR_6)
       FUNC_14(VAR_3, ((void*)0), VAR_4);
      do {
       VAR_6->handler(VAR_3, VAR_6->dev_id);
       VAR_6 = VAR_6->next;
      } while (VAR_6);
      FUNC_9(FUNC_0(VAR_10), VAR_13);
     }
   }
 }
 FUNC_7();
 FUNC_10(VAR_5);
}
