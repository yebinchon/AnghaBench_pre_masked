
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; } ;
struct orinoco_private {int lock; TYPE_2__ hw; int ndev; scalar_t__ hw_unavailable; } ;
struct TYPE_3__ {int (* unlock_irqrestore ) (int *,unsigned long*) ;int (* lock_irqsave ) (int *,unsigned long*) ;} ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (int *,unsigned long*) ;

__attribute__((used)) static inline int FUNC_3(struct orinoco_private *VAR_1,
          unsigned long *VAR_2)
{
 VAR_1->hw.ops->lock_irqsave(&VAR_1->lock, VAR_2);
 if (VAR_1->hw_unavailable) {
  FUNC_0(1, "orinoco_lock() called with hw_unavailable (dev=%p)\n",
         VAR_1->ndev);
  VAR_1->hw.ops->unlock_irqrestore(&VAR_1->lock, VAR_2);
  return -VAR_0;
 }
 return 0;
}
