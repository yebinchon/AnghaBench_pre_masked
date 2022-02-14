
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsMicVar {int dummy; } ;
struct TYPE_5__ {TYPE_1__* staTable; struct zsMicVar* bcMicKey; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct TYPE_4__ {int qosType; struct zsMicVar txMicKey; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int *,int*,int ,int) ;
 int FUNC_2 (int *) ;

struct zsMicVar* FUNC_3(zdev_t* VAR_1, zbuf_t* VAR_2, u8_t* VAR_3)
{
    u8_t VAR_4[6];
    u16_t VAR_5 = 0, VAR_6[3];

    FUNC_2(VAR_1);

    FUNC_1(VAR_1, VAR_2, VAR_4, 0, 6);

    VAR_6[0] = VAR_4[0] + (VAR_4[1] << 8);
    VAR_6[1] = VAR_4[2] + (VAR_4[3] << 8);
    VAR_6[2] = VAR_4[4] + (VAR_4[5] << 8);

    if ((VAR_6[0] & 0x1))
    {
        return (&VAR_0->ap.bcMicKey[0]);
    }
    else if ((VAR_5 = FUNC_0(VAR_1, VAR_6)) != 0xffff)
    {
        *VAR_3 = VAR_0->ap.staTable[VAR_5].qosType;
        return (&VAR_0->ap.staTable[VAR_5].txMicKey);
    }

    return ((void*)0);
}
