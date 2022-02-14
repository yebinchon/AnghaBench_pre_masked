
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsHpPriv {int dot11Mode; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;






 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u16_t FUNC_3(zdev_t* VAR_1, u8_t VAR_2)
{
    struct zsHpPriv* VAR_3;

    FUNC_2(VAR_1);
    VAR_3 = VAR_0->hpPrivate;
    VAR_3->dot11Mode = VAR_2;

    switch(VAR_2)
    {
        case 131:
            FUNC_0(VAR_1, 0x1c3700, 0x0f0000a1);
            FUNC_0(VAR_1, 0x1c3c40, 0x1);
            break;

        case 128:
            FUNC_0(VAR_1, 0x1c3700, 0x0f000002);
            FUNC_0(VAR_1, 0x1c3c40, 0x1);
            break;

        case 130:
            FUNC_0(VAR_1, 0x1c3700, 0x0f000000);
            FUNC_0(VAR_1, 0x1c3c40, 0x1);
            break;

        case 129:
            FUNC_0(VAR_1, 0x1c3700, 0x0f0000e0);
            FUNC_0(VAR_1, 0x1c3c40, 0x41);
            break;

        default:
            goto skip;
    }

    FUNC_1(VAR_1);

skip:
    return 0;
}
