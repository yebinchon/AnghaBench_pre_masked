
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_adapter {int irq_sem; struct pch_gbe_hw hw; } ;
struct TYPE_2__ {int INT_EN; int INT_ST; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct pch_gbe_adapter *VAR_1)
{
 struct pch_gbe_hw *VAR_2 = &VAR_1->hw;

 if (FUNC_3(FUNC_0(&VAR_1->irq_sem)))
  FUNC_2(VAR_0, &VAR_2->reg->INT_EN);
 FUNC_1(&VAR_2->reg->INT_ST);
 FUNC_4("INT_EN reg : 0x%08x\n", FUNC_1(&VAR_2->reg->INT_EN));
}
