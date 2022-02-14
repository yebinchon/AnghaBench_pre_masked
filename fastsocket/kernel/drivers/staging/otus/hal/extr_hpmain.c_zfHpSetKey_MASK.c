
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u64_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {int camRollCallTable; } ;
struct TYPE_3__ {int flagKeyChanging; } ;
struct TYPE_4__ {TYPE_1__ sta; struct zsHpPriv* hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,int*,int,int ,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u32_t FUNC_6(zdev_t* VAR_3, u8_t VAR_4, u8_t VAR_5, u8_t VAR_6,
        u16_t* VAR_7, u32_t* VAR_8)
{
    u32_t VAR_9[(VAR_1/4)];
    u16_t VAR_10;
    u16_t VAR_11;
    struct zsHpPriv* VAR_12;

    FUNC_4(VAR_3);
    VAR_12=VAR_2->hpPrivate;
    VAR_9[0] = 0x0000281C;
    VAR_9[1] = ((u32_t)VAR_5<<16) + (u32_t)VAR_4;
    VAR_9[2] = ((u32_t)VAR_7[0]<<16) + (u32_t)VAR_6;
    VAR_9[3] = ((u32_t)VAR_7[2]<<16) + ((u32_t)VAR_7[1]);

    for (VAR_11=0; VAR_11<4; VAR_11++)
    {
        VAR_9[4+VAR_11] = VAR_8[VAR_11];
    }

    if (VAR_4 < 64)
    {
        VAR_12->camRollCallTable |= ((u64_t) 1) << VAR_4;
    }


    VAR_10 = FUNC_0(VAR_3, VAR_9, 32, VAR_0, ((void*)0));
    return VAR_10;
}
