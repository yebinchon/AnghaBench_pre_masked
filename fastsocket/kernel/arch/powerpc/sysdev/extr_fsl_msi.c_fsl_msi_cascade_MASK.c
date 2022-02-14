
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {int status; int lock; TYPE_1__* chip; scalar_t__ handler_data; } ;
struct fsl_msi {int feature; int irqhost; int msi_regs; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* eoi ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;int (* mask_ack ) (unsigned int) ;} ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct fsl_msi* VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(unsigned int VAR_7, struct irq_desc *VAR_8)
{
 unsigned int VAR_9;
 struct fsl_msi *VAR_10 = VAR_6;
 int VAR_11 = -1;
 u32 VAR_12 = 0;
 u32 VAR_13;
 u32 VAR_14 = 0;

 FUNC_4(&VAR_8->lock);
 if ((VAR_10->feature & VAR_0) == 129) {
  if (VAR_8->chip->mask_ack)
   VAR_8->chip->mask_ack(VAR_7);
  else {
   VAR_8->chip->mask(VAR_7);
   VAR_8->chip->ack(VAR_7);
  }
 }

 if (FUNC_11(VAR_8->status & VAR_3))
  goto unlock;

 VAR_11 = (int)VAR_8->handler_data;

 if (VAR_11 >= VAR_5)
  VAR_9 = VAR_4;

 VAR_8->status |= VAR_3;
 switch (VAR_6->feature & VAR_0) {
 case 128:
  VAR_12 = FUNC_1(VAR_10->msi_regs,
   VAR_11 * 0x10);
  break;
 case 129:
  VAR_12 = FUNC_1(VAR_10->msi_regs, VAR_11 * 0x4);
  break;
 }

 while (VAR_12) {
  VAR_13 = FUNC_0(VAR_12) - 1;

  VAR_9 = FUNC_3(VAR_10->irqhost,
    VAR_11 * VAR_1 +
     VAR_13 + VAR_14);
  if (VAR_9 != VAR_4)
   FUNC_2(VAR_9);
  VAR_14 += VAR_13 + 1;
  VAR_12 = VAR_12 >> (VAR_13 + 1);
 }
 VAR_8->status &= ~VAR_3;

 switch (VAR_10->feature & VAR_0) {
 case 128:
  VAR_8->chip->eoi(VAR_7);
  break;
 case 129:
  if (!(VAR_8->status & VAR_2) && VAR_8->chip->unmask)
   VAR_8->chip->unmask(VAR_7);
  break;
 }
unlock:
 FUNC_5(&VAR_8->lock);
}
