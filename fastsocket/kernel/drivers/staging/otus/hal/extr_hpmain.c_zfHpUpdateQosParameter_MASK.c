
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {scalar_t__ dot11Mode; int* txop; int* cwmin; int* cwmax; } ;
struct TYPE_3__ {int EnableHT; } ;
struct TYPE_4__ {TYPE_1__ sta; struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;

u8_t FUNC_4(zdev_t* VAR_12, u16_t* VAR_13, u16_t* VAR_14,
        u16_t* VAR_15, u16_t* VAR_16)
{
    struct zsHpPriv* VAR_17;

    FUNC_3(VAR_12);
    VAR_17 = VAR_11->hpPrivate;

    FUNC_2(VAR_1, "zfHalUpdateQosParameter()");



    if (VAR_17->dot11Mode == VAR_0)
    {
        VAR_14[0] = 127;
        VAR_15[0] = 2*9+10;
    }


    FUNC_0(VAR_12, VAR_2, VAR_13[0]
            + ((u32_t)VAR_14[0]<<16));
    FUNC_0(VAR_12, VAR_5, VAR_13[1]
            + ((u32_t)VAR_14[1]<<16));
    FUNC_0(VAR_12, VAR_6, VAR_13[2]
            + ((u32_t)VAR_14[2]<<16));
    FUNC_0(VAR_12, VAR_9, VAR_13[3]
            + ((u32_t)VAR_14[3]<<16));
    FUNC_0(VAR_12, VAR_10, VAR_13[4]
            + ((u32_t)VAR_14[4]<<16));


    FUNC_0(VAR_12, VAR_3, VAR_15[0]
            +((u32_t)VAR_15[0]<<12)+((u32_t)VAR_15[0]<<24));
    FUNC_0(VAR_12, VAR_7, (VAR_15[0]>>8)
            +((u32_t)VAR_15[0]<<4)+((u32_t)VAR_15[0]<<16));


    FUNC_0(VAR_12, VAR_4, VAR_16[0]
            + ((u32_t)VAR_16[1]<<16));
    FUNC_0(VAR_12, VAR_8, VAR_16[2]
            + ((u32_t)VAR_16[3]<<16));

    FUNC_1(VAR_12);

    VAR_17->txop[0] = VAR_16[0];
    VAR_17->txop[1] = VAR_16[1];
    VAR_17->txop[2] = VAR_16[2];
    VAR_17->txop[3] = VAR_16[3];
    VAR_17->cwmin[0] = VAR_13[0];
    VAR_17->cwmax[0] = VAR_14[0];
    VAR_17->cwmin[1] = VAR_13[1];
    VAR_17->cwmax[1] = VAR_14[1];

    return 0;
}
