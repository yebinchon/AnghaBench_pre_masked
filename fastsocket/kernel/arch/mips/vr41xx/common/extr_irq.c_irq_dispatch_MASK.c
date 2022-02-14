
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct irq_desc {int status; TYPE_1__* chip; } ;
struct TYPE_5__ {int (* get_irq ) (unsigned int) ;} ;
typedef TYPE_2__ irq_cascade_t ;
struct TYPE_4__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;int (* mask_ack ) (unsigned int) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 TYPE_2__* VAR_2 ;
 struct irq_desc* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_5)
{
 irq_cascade_t *VAR_6;
 struct irq_desc *VAR_7;

 if (VAR_5 >= VAR_1) {
  FUNC_0(&VAR_4);
  return;
 }

 VAR_6 = VAR_2 + VAR_5;
 if (VAR_6->get_irq != ((void*)0)) {
  unsigned int VAR_8 = VAR_5;
  int VAR_9;
  VAR_7 = VAR_3 + VAR_8;
  if (VAR_7->chip->mask_ack)
   VAR_7->chip->mask_ack(VAR_8);
  else {
   VAR_7->chip->mask(VAR_8);
   VAR_7->chip->ack(VAR_8);
  }
  VAR_9 = VAR_6->get_irq(VAR_5);
  VAR_5 = VAR_9;
  if (VAR_9 < 0)
   FUNC_0(&VAR_4);
  else
   FUNC_7(VAR_5);
  if (!(VAR_7->status & VAR_0) && VAR_7->chip->unmask)
   VAR_7->chip->unmask(VAR_8);
 } else
  FUNC_1(VAR_5);
}
