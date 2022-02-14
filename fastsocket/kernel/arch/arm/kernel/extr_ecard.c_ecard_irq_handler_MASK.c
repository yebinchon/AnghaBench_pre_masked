
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct irq_desc {TYPE_2__* chip; } ;
struct TYPE_10__ {scalar_t__ irq; int slot_no; TYPE_1__* ops; int claimed; struct TYPE_10__* next; } ;
typedef TYPE_3__ ecard_t ;
struct TYPE_11__ {int (* irqpending ) (TYPE_3__*) ;} ;
struct TYPE_9__ {int (* unmask ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;
struct TYPE_8__ {int (* irqpending ) (TYPE_3__*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct irq_desc*) ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void
FUNC_6(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 ecard_t *VAR_5;
 int VAR_6 = 0;

 VAR_4->chip->mask(VAR_3);
 for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next) {
  int VAR_7;

  if (!VAR_5->claimed || VAR_5->irq == VAR_0 || VAR_5->slot_no == 8)
   continue;

  if (VAR_5->ops && VAR_5->ops->irqpending)
   VAR_7 = VAR_5->ops->irqpending(VAR_5);
  else
   VAR_7 = VAR_2.irqpending(VAR_5);

  if (VAR_7) {
   FUNC_1(VAR_5->irq);
   VAR_6 ++;
  }
 }
 VAR_4->chip->unmask(VAR_3);

 if (VAR_6 == 0)
  FUNC_0(VAR_4);
}
