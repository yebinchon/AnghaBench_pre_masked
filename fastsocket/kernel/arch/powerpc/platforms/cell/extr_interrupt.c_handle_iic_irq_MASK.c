
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irqaction {int dummy; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; struct irqaction* action; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* eoi ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,struct irqaction*) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int,struct irq_desc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_6, struct irq_desc *VAR_7)
{
 FUNC_3(&VAR_7->lock);

 VAR_7->status &= ~(VAR_3 | VAR_4);






 if (FUNC_6((VAR_7->status & (VAR_1 | VAR_0)) ||
      !VAR_7->action)) {
  VAR_7->status |= VAR_2;
  goto out_eoi;
 }

 FUNC_1(VAR_6, VAR_7);


 VAR_7->status |= VAR_1;

 do {
  struct irqaction *VAR_8 = VAR_7->action;
  irqreturn_t VAR_9;

  if (FUNC_6(!VAR_8))
   goto out_eoi;

  VAR_7->status &= ~VAR_2;
  FUNC_4(&VAR_7->lock);
  VAR_9 = FUNC_0(VAR_6, VAR_8);
  if (!VAR_5)
   FUNC_2(VAR_6, VAR_7, VAR_9);
  FUNC_3(&VAR_7->lock);

 } while ((VAR_7->status & (VAR_2 | VAR_0)) == VAR_2);

 VAR_7->status &= ~VAR_1;
out_eoi:
 VAR_7->chip->eoi(VAR_6);
 FUNC_4(&VAR_7->lock);
}
