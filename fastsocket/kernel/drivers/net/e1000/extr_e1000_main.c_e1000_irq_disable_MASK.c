
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e1000_hw {int dummy; } ;
struct e1000_adapter {TYPE_1__* pdev; struct e1000_hw hw; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_1)
{
 struct e1000_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(VAR_0, ~0);
 FUNC_0();
 FUNC_2(VAR_1->pdev->irq);
}
