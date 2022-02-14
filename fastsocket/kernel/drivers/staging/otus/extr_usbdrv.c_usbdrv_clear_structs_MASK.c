
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int pdev; int regp; struct usbdrv_private* ml_priv; } ;
struct net_device {int pdev; int regp; struct net_device* ml_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbdrv_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct net_device *VAR_0)
{
    struct usbdrv_private *VAR_1 = VAR_0->ml_priv;



    FUNC_0(VAR_1->regp);

    FUNC_3(VAR_1->pdev);
    FUNC_2(VAR_1->pdev);
    FUNC_4(VAR_1->pdev, ((void*)0));


    FUNC_1(VAR_1);

    FUNC_1(VAR_0);

}
