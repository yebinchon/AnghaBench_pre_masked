
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsMicVar {int k1; int k0; } ;
struct TYPE_3__ {scalar_t__ wmeConnected; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 struct zsMicVar* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int*,int ,int) ;
 int FUNC_2 (int,struct zsMicVar*) ;
 int FUNC_3 (struct zsMicVar*) ;
 int FUNC_4 (int*,struct zsMicVar*) ;
 int FUNC_5 (int *,int *,int*,int,int) ;
 struct zsMicVar* FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;

u8_t FUNC_10(zdev_t* VAR_11, zbuf_t* VAR_12)
{
    struct zsMicVar* VAR_13;
    struct zsMicVar VAR_14;
    u8_t VAR_15[8];
    u8_t VAR_16[6];
    u8_t VAR_17[6];
    u8_t VAR_18;
    u16_t VAR_19, VAR_20, VAR_21;

    FUNC_8(VAR_11);


    if ( VAR_10->wlanMode == VAR_2 )
    {
        VAR_13 = FUNC_0(VAR_11, VAR_12);

        if ( VAR_13 != ((void*)0) )
        {
            FUNC_1(VAR_11, VAR_12, VAR_17, VAR_8, 6);
            FUNC_1(VAR_11, VAR_12, VAR_16, VAR_9, 6);
        }
        else
        {
            return VAR_1;
        }
    }
    else if ( VAR_10->wlanMode == VAR_3 )
    {
        VAR_13 = FUNC_6(VAR_11, VAR_12);

        if ( VAR_13 != ((void*)0) )
        {
            FUNC_1(VAR_11, VAR_12, VAR_17, VAR_9, 6);
            FUNC_1(VAR_11, VAR_12, VAR_16, VAR_7, 6);
        }
        else
        {
            return VAR_1;
        }
    }
    else
    {
        return VAR_1;
    }

    VAR_14.k0=VAR_13->k0;
    VAR_14.k1=VAR_13->k1;
    VAR_13 = &VAR_14;

    FUNC_3(VAR_13);
    VAR_21 = FUNC_7(VAR_11, VAR_12);
    VAR_21 -= 8;


    for(VAR_19=0; VAR_19<6; VAR_19++)
    {
        FUNC_2(VAR_16[VAR_19], VAR_13);
    }

    for(VAR_19=0; VAR_19<6; VAR_19++)
    {
        FUNC_2(VAR_17[VAR_19], VAR_13);
    }


    if ((FUNC_9(VAR_11, VAR_12, 0) & 0x80) != 0)
        FUNC_2(FUNC_9(VAR_11, VAR_12,24)&0x7, VAR_13);
    else
        FUNC_2(0, VAR_13);
    FUNC_2(0, VAR_13);
    FUNC_2(0, VAR_13);
    FUNC_2(0, VAR_13);


    VAR_20 = VAR_6 +
                    VAR_5 +
                    VAR_4;

    if ((FUNC_9(VAR_11, VAR_12, 0) & 0x80) != 0)
    {

        if (VAR_10->wlanMode == VAR_2)
        {

        }
        else if (VAR_10->wlanMode == VAR_3)
        {
            if (VAR_10->sta.wmeConnected != 0)
            {
                VAR_20 += 2;
            }
        }
    }

    for(VAR_19=VAR_20; VAR_19<VAR_21; VAR_19++)
    {
        VAR_18 = FUNC_9(VAR_11, VAR_12, VAR_19);
        FUNC_2(VAR_18, VAR_13);
    }

    FUNC_4(VAR_15, VAR_13);

    if ( !FUNC_5(VAR_11, VAR_12, VAR_15, VAR_21, 8) )
    {
        return VAR_0;
    }

    return VAR_1;
}
