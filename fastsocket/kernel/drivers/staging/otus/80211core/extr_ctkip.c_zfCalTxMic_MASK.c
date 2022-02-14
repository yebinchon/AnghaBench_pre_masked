
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsMicVar {int dummy; } ;
struct TYPE_2__ {scalar_t__ wlanMode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct zsMicVar* FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int,struct zsMicVar*) ;
 int FUNC_2 (struct zsMicVar*) ;
 int FUNC_3 (int*,struct zsMicVar*) ;
 struct zsMicVar* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;

void FUNC_9(zdev_t *VAR_3, zbuf_t *VAR_4, u8_t *VAR_5, u16_t VAR_6, u16_t VAR_7, u16_t *VAR_8, u16_t *VAR_9, u8_t VAR_10, u8_t *VAR_11)
{
    struct zsMicVar* VAR_12;
    u16_t VAR_13;
    u16_t VAR_14;
    u8_t VAR_15;
    u8_t VAR_16;
    u8_t *VAR_17 = (u8_t *)VAR_8;
    u8_t *VAR_18 = (u8_t *)VAR_9;

    FUNC_7(VAR_3);


    if ( VAR_2->wlanMode == VAR_0 )
    {
        VAR_12 = FUNC_0(VAR_3, VAR_4, &VAR_16);

        if ( VAR_12 == ((void*)0) )
            return;
    }
    else if ( VAR_2->wlanMode == VAR_1 )
    {
        VAR_12 = FUNC_4(VAR_3, VAR_4);

        if ( VAR_12 == ((void*)0) )
        {
            FUNC_6("pMicKey is NULL");
            return;
        }
    }
    else
    {
        return;
    }

    FUNC_2(VAR_12);
    VAR_14 = FUNC_5(VAR_3, VAR_4);


    for(VAR_13 = 0; VAR_13 < 6; VAR_13++)
    {
        FUNC_1(VAR_17[VAR_13], VAR_12);
    }


    for(VAR_13 = 0; VAR_13 < 6; VAR_13++)
    {
        FUNC_1(VAR_18[VAR_13], VAR_12);
    }

    if (VAR_10 != 0)
        FUNC_1((VAR_10&0x7), VAR_12);
    else
        FUNC_1(0, VAR_12);

    FUNC_1(0, VAR_12);
    FUNC_1(0, VAR_12);
    FUNC_1(0, VAR_12);


    for(VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    {
        FUNC_1(VAR_5[VAR_13], VAR_12);
    }

    for(VAR_13 = VAR_7; VAR_13 < VAR_14; VAR_13++)
    {
        VAR_15 = FUNC_8(VAR_3, VAR_4, VAR_13);
        FUNC_1(VAR_15, VAR_12);
    }

    FUNC_3(VAR_11, VAR_12);
}
