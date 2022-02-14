
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int hwFrequency; int* tPow2x2g; int* tPow2x5g; } ;
struct TYPE_2__ {int maxTxPower2; int maxTxPower5; struct zsHpPriv* hpPrivate; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

u32_t FUNC_1(zdev_t* VAR_1)
{
    struct zsHpPriv* VAR_2;
    u16_t VAR_3 = 0;

    FUNC_0(VAR_1);
    VAR_2 = VAR_0->hpPrivate;

    if (VAR_2->hwFrequency < 3000) {
        VAR_3 = VAR_2->tPow2x2g[0] & 0x3f;
        VAR_0->maxTxPower2 &= 0x3f;
        VAR_3 = (VAR_3 > VAR_0->maxTxPower2)? VAR_0->maxTxPower2 : VAR_3;
    } else {
        VAR_3 = VAR_2->tPow2x5g[0] & 0x3f;
        VAR_0->maxTxPower5 &= 0x3f;
        VAR_3 = (VAR_3 > VAR_0->maxTxPower5)? VAR_0->maxTxPower5 : VAR_3;
    }

    return VAR_3;
}
