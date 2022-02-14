
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atl1c_adapter {TYPE_1__* pdev; int hw; int irq_sem; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct atl1c_adapter *VAR_3)
{
 FUNC_2(&VAR_3->irq_sem);
 FUNC_1(&VAR_3->hw, VAR_1, 0);
 FUNC_1(&VAR_3->hw, VAR_2, VAR_0);
 FUNC_0(&VAR_3->hw);
 FUNC_3(VAR_3->pdev->irq);
}
