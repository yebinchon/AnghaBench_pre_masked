
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uic {int irqhost; scalar_t__ dcrbase; } ;
struct irq_desc {int status; int lock; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask_ack ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct uic* FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;

void FUNC_11(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 struct uic *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_5(&VAR_4->lock);
 if (VAR_4->status & VAR_1)
  VAR_4->chip->mask(VAR_3);
 else
  VAR_4->chip->mask_ack(VAR_3);
 FUNC_6(&VAR_4->lock);

 VAR_6 = FUNC_4(VAR_5->dcrbase + VAR_2);
 if (!VAR_6)
  goto uic_irq_ret;

 VAR_7 = 32 - FUNC_0(VAR_6);

 VAR_8 = FUNC_3(VAR_5->irqhost, VAR_7);
 FUNC_1(VAR_8);

uic_irq_ret:
 FUNC_5(&VAR_4->lock);
 if (VAR_4->status & VAR_1)
  VAR_4->chip->ack(VAR_3);
 if (!(VAR_4->status & VAR_0) && VAR_4->chip->unmask)
  VAR_4->chip->unmask(VAR_3);
 FUNC_6(&VAR_4->lock);
}
