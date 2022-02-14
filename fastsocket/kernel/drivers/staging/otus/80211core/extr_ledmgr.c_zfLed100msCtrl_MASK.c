
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int LEDCtrlFlag; int LEDCtrlType; int counter; } ;
struct TYPE_4__ {TYPE_1__ ledStruct; } ;



 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_1)
{
    FUNC_4(VAR_1);

    VAR_0->ledStruct.counter++;

    if(VAR_0->ledStruct.LEDCtrlFlag)
    {
        switch(VAR_0->ledStruct.LEDCtrlFlag) {
        case 128:
            FUNC_3(VAR_1);
        break;
        }
    }
    else
    {
        switch(VAR_0->ledStruct.LEDCtrlType) {
        case 1:
            FUNC_0(VAR_1);
        break;

        case 2:
            FUNC_1(VAR_1);
        break;

        case 3:
            FUNC_2(VAR_1);
        break;

        default:
            FUNC_0(VAR_1);
        break;
        }
    }
}
