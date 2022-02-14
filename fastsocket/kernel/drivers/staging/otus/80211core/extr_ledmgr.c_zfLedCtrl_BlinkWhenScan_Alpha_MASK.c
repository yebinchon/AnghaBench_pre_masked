
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_3__ {int LEDCtrlFlag; } ;
struct TYPE_4__ {TYPE_1__ ledStruct; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_2)
{
    static u32_t VAR_3 = 0;
    FUNC_1(VAR_2);

    if(VAR_3 > 34)
    {
        VAR_1->ledStruct.LEDCtrlFlag &= ~(u8_t)VAR_0;
        VAR_3 = 0;
    }

    if( (VAR_3 % 3) < 2)
        FUNC_0(VAR_2, 0, 1);
    else
        FUNC_0(VAR_2, 0, 0);

    VAR_3++;
}
