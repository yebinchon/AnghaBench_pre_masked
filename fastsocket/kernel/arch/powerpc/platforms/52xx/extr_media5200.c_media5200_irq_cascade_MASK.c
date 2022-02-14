
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int status; int lock; TYPE_1__* chip; } ;
struct TYPE_4__ {int irqhost; scalar_t__ regs; } ;
struct TYPE_3__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;

void FUNC_9(unsigned int VAR_5, struct irq_desc *VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10;


 FUNC_4(&VAR_6->lock);
 VAR_6->chip->mask(VAR_5);
 FUNC_5(&VAR_6->lock);



 VAR_9 = FUNC_2(VAR_4.regs + VAR_1);
 VAR_10 = FUNC_2(VAR_4.regs + VAR_3);
 VAR_8 = FUNC_0((VAR_9 & VAR_10) >> VAR_2);
 if (VAR_8) {
  VAR_7 = FUNC_3(VAR_4.irqhost, VAR_8 - 1);



  FUNC_1(VAR_7);
 }


 FUNC_4(&VAR_6->lock);
 VAR_6->chip->ack(VAR_5);
 if (!(VAR_6->status & VAR_0))
  VAR_6->chip->unmask(VAR_5);
 FUNC_5(&VAR_6->lock);
}
