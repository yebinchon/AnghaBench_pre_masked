
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_2__ {int bRate; int bRateBasic; int gRate; int gRateBasic; } ;






 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_1, u8_t VAR_2)
{
    FUNC_0(VAR_1);

    switch(VAR_2)
    {
    case 128:
        VAR_0->bRate = 0;
        VAR_0->bRateBasic = 0;
        VAR_0->gRate = 0;
        VAR_0->gRateBasic = 0;
        break;
    case 131:
        VAR_0->bRate = 0xf;
        VAR_0->bRateBasic = 0xf;
        VAR_0->gRate = 0xff;
        VAR_0->gRateBasic = 0x15;
        break;
    case 129:
        VAR_0->bRate = 0xf;
        VAR_0->bRateBasic = 0xf;
        VAR_0->gRate = 0;
        VAR_0->gRateBasic = 0;
        break;
    case 130:
        VAR_0->bRate = 0xf;
        VAR_0->bRateBasic = 0xf;
        VAR_0->gRate = 0xff;
        VAR_0->gRateBasic = 0;
        break;
    }
}
