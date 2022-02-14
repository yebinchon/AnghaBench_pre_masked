
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpic {int flags; int msi_bitmap; TYPE_1__* irqhost; int irq_count; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct mpic*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mpic *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1->msi_bitmap, VAR_1->irq_count,
         VAR_1->irqhost->of_node);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(&VAR_1->msi_bitmap);
 if (VAR_2 > 0) {
  if (VAR_1->flags & VAR_0)
   VAR_2 = FUNC_0(VAR_1);

  if (VAR_2) {
   FUNC_2(&VAR_1->msi_bitmap);
   return VAR_2;
  }
 }

 return 0;
}
