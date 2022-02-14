
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hw_addr; } ;
struct atlx_adapter {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct atlx_adapter *VAR_1)
{
 FUNC_1(0, VAR_1->hw.hw_addr + VAR_0);
 FUNC_0(VAR_1->hw.hw_addr + VAR_0);
 FUNC_2(VAR_1->pdev->irq);
}
