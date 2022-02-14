
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int dummy; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,struct irqaction*) ;
 int FUNC_2 (unsigned int,struct irq_desc*) ;
 int FUNC_3 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 struct irqaction *VAR_6;
 irqreturn_t VAR_7;

 FUNC_4(&VAR_5->lock);

 FUNC_0(VAR_5->status & VAR_1);

 VAR_5->status &= ~(VAR_2 | VAR_3);
 FUNC_2(VAR_4, VAR_5);

 VAR_6 = VAR_5->action;
 if (FUNC_8(!VAR_6 || (VAR_5->status & VAR_0)))
  goto out_mask;

 VAR_5->status |= VAR_1;
 FUNC_5(&VAR_5->lock);

 VAR_7 = FUNC_1(VAR_4, VAR_6);




 FUNC_3(VAR_4, VAR_5, VAR_7);

 FUNC_4(&VAR_5->lock);
 VAR_5->status &= ~VAR_1;

 if (VAR_5->status & VAR_0)
out_mask:
  VAR_5->chip->mask(VAR_4);


 VAR_5->chip->ack(VAR_4);

 FUNC_5(&VAR_5->lock);
}
