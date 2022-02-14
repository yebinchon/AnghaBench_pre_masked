
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgb_adapter {TYPE_1__* pdev; int hw; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ixgb_adapter *VAR_1)
{
 FUNC_1(&VAR_1->hw, VAR_0, ~0);
 FUNC_0(&VAR_1->hw);
 FUNC_2(VAR_1->pdev->irq);
}
