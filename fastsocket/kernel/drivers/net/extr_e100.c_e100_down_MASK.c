
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nic {int netdev; int watchdog; TYPE_1__* pdev; int napi; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct nic*) ;
 int FUNC_3 (struct nic*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct nic *VAR_0)
{

 FUNC_5(&VAR_0->napi);
 FUNC_7(VAR_0->netdev);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0->pdev->irq, VAR_0->netdev);
 FUNC_0(&VAR_0->watchdog);
 FUNC_6(VAR_0->netdev);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
}
