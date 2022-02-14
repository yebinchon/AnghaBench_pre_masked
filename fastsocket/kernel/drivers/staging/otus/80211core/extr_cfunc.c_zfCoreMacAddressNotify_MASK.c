
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_2__ {int* macAddr; int (* zfcbMacAddressNotify ) (int *,int*) ;} ;


 int FUNC_0 (int *,int*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_1, u8_t* VAR_2)
{
    FUNC_1(VAR_1);

    VAR_0->macAddr[0] = VAR_2[0] | ((u16_t)VAR_2[1]<<8);
    VAR_0->macAddr[1] = VAR_2[2] | ((u16_t)VAR_2[3]<<8);
    VAR_0->macAddr[2] = VAR_2[4] | ((u16_t)VAR_2[5]<<8);



    if (VAR_0->zfcbMacAddressNotify != ((void*)0))
    {
        VAR_0->zfcbMacAddressNotify(VAR_1, VAR_2);
    }
}
