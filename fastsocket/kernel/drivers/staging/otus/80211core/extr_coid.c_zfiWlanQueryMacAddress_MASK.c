
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_2__ {int* macAddr; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t* VAR_2)
{
    u16_t VAR_3 = 0;
    FUNC_1(VAR_1);

    VAR_3 = FUNC_0(VAR_1);

    VAR_2[0] = (u8_t)(VAR_0->macAddr[0] & 0xff);
    VAR_2[1] = (u8_t)(VAR_0->macAddr[0] >> 8);
    VAR_2[2] = (u8_t)(VAR_0->macAddr[1] & 0xff);
    VAR_2[3] = (u8_t)(VAR_0->macAddr[1] >> 8);
    VAR_2[4] = (u8_t)(VAR_0->macAddr[2] & 0xff);
    if (VAR_3 == 0xffff)
        VAR_2[5] = (u8_t)(VAR_0->macAddr[2] >> 8);
    else
    {



        VAR_2[5] = VAR_3 + 1 + (u8_t)(VAR_0->macAddr[2] >> 8);

    }

    return;
}
