
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct usbdrv_private* ml_priv; } ;
typedef TYPE_1__ zdev_t ;
typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct usbdrv_private {int RegOutUrb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__*,int ) ;

void FUNC_3(zdev_t* VAR_1, u8_t VAR_2, u32_t* VAR_3, u16_t VAR_4)
{
    struct usbdrv_private *VAR_5 = VAR_1->ml_priv;
    u32_t VAR_6;


    VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);


    if (VAR_6 != 0)
    {
        FUNC_1(VAR_5->RegOutUrb);
        VAR_5->RegOutUrb = FUNC_0(0, VAR_0);
        VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);
    }
}
