
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {int hbTimer10ms; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device* VAR_2)
{
    struct usbdrv_private *VAR_3 = VAR_2->ml_priv;

    FUNC_0(&(VAR_3->hbTimer10ms), VAR_1 + (1*VAR_0)/100);
    FUNC_1(VAR_2);
    return;
}
