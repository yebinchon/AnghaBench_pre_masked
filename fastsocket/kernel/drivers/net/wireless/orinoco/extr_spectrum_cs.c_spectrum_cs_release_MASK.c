
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {struct orinoco_private* priv; } ;
struct TYPE_4__ {scalar_t__ iobase; TYPE_1__* ops; } ;
struct orinoco_private {TYPE_2__ hw; int lock; int hw_unavailable; } ;
struct TYPE_3__ {int (* unlock_irqrestore ) (int *,unsigned long*) ;int (* lock_irqsave ) (int *,unsigned long*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *,unsigned long*) ;
 int FUNC_3 (int *,unsigned long*) ;

__attribute__((used)) static void
FUNC_4(struct pcmcia_device *VAR_0)
{
 struct orinoco_private *VAR_1 = VAR_0->priv;
 unsigned long VAR_2;



 VAR_1->hw.ops->lock_irqsave(&VAR_1->lock, &VAR_2);
 VAR_1->hw_unavailable++;
 VAR_1->hw.ops->unlock_irqrestore(&VAR_1->lock, &VAR_2);

 FUNC_1(VAR_0);
 if (VAR_1->hw.iobase)
  FUNC_0(VAR_1->hw.iobase);
}
