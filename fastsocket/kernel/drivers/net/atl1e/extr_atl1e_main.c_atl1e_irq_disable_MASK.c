
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atl1e_adapter {TYPE_1__* pdev; int hw; int irq_sem; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct atl1e_adapter *VAR_1)
{
 FUNC_2(&VAR_1->irq_sem);
 FUNC_1(&VAR_1->hw, VAR_0, 0);
 FUNC_0(&VAR_1->hw);
 FUNC_3(VAR_1->pdev->irq);
}
