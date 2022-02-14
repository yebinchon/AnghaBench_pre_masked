
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int pdev; int hw_addr1; int hw_addr0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_adapter *VAR_0)
{
 FUNC_0(!VAR_0->pdev);

 FUNC_1(VAR_0->hw_addr0);
 FUNC_1(VAR_0->hw_addr1);
 FUNC_3(VAR_0->pdev, (1 << 2) - 1);
 FUNC_2(VAR_0->pdev);
}
