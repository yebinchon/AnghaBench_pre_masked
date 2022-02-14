
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct adapter {TYPE_1__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct adapter*) ;
 scalar_t__ FUNC_6 (struct adapter*) ;

__attribute__((used)) static int FUNC_7(struct adapter *VAR_0)
{
 if (FUNC_1(VAR_0->pdev)) {
  FUNC_0(&VAR_0->pdev->dev,
   "Cannot re-enable PCI device after reset.\n");
  goto err;
 }
 FUNC_4(VAR_0->pdev);
 FUNC_2(VAR_0->pdev);
 FUNC_3(VAR_0->pdev);


 FUNC_5(VAR_0);

 if (FUNC_6(VAR_0))
  goto err;

 return 0;
err:
 return -1;
}
