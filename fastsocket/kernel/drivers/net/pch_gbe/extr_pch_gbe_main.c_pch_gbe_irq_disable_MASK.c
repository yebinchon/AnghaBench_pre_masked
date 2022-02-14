
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pch_gbe_hw {TYPE_2__* reg; } ;
struct pch_gbe_adapter {TYPE_1__* pdev; int irq_sem; struct pch_gbe_hw hw; } ;
struct TYPE_4__ {int INT_EN; int INT_ST; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pch_gbe_adapter *VAR_0)
{
 struct pch_gbe_hw *VAR_1 = &VAR_0->hw;

 FUNC_0(&VAR_0->irq_sem);
 FUNC_2(0, &VAR_1->reg->INT_EN);
 FUNC_1(&VAR_1->reg->INT_ST);
 FUNC_4(VAR_0->pdev->irq);

 FUNC_3("INT_EN reg : 0x%08x\n", FUNC_1(&VAR_1->reg->INT_EN));
}
