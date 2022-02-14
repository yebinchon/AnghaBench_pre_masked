
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdrv_private {scalar_t__ driver_isolated; } ;
struct pt_regs {int dummy; } ;
struct net_device {struct usbdrv_private* ml_priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;

irqreturn_t FUNC_1(int VAR_2, void *VAR_3, struct pt_regs *VAR_4)
{
    struct net_device *VAR_5;
    struct usbdrv_private *VAR_6;

    VAR_5 = VAR_3;
    VAR_6 = VAR_5->ml_priv;



    if (0)
        return VAR_1;


    if (!FUNC_0(VAR_5)) {
        return VAR_1;
    }

    if (VAR_6->driver_isolated) {
        return VAR_1;
    }





    return VAR_0;
}
