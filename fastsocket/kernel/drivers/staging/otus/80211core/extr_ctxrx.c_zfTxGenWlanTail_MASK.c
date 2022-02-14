
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
struct zsMicVar {int dummy; } ;
struct TYPE_3__ {scalar_t__ wmeConnected; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 struct zsMicVar* FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int,struct zsMicVar*) ;
 int FUNC_2 (struct zsMicVar*) ;
 int FUNC_3 (int*,struct zsMicVar*) ;
 struct zsMicVar* FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;

u16_t FUNC_8(zdev_t* VAR_6, zbuf_t* VAR_7, u16_t* VAR_8, u16_t VAR_9,
                      u16_t* VAR_10)
{
    struct zsMicVar* VAR_11;
    u16_t VAR_12, VAR_13, VAR_14;
    u8_t VAR_15, VAR_16 = 0;
    u8_t VAR_17[12];

    FUNC_6(VAR_6);

    if ( VAR_5->wlanMode == VAR_2 )
    {
        VAR_11 = FUNC_0(VAR_6, VAR_7, &VAR_16);

        if ( VAR_11 == ((void*)0) )
        {
            return 0;
        }
    }
    else if ( VAR_5->wlanMode == VAR_3 )
    {
        VAR_11 = FUNC_4(VAR_6, VAR_7);

        if ( VAR_11 == ((void*)0) )
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }

    VAR_13 = FUNC_5(VAR_6, VAR_7);

    FUNC_2(VAR_11);
    for(VAR_12=0; VAR_12<12; VAR_12++)
    {
        VAR_15 = FUNC_7(VAR_6, VAR_7, VAR_12);
        FUNC_1(VAR_15, VAR_11);
    }



    if ( VAR_5->wlanMode == VAR_3 )
    {
        if (VAR_5->sta.wmeConnected != 0)
            FUNC_1(FUNC_7(VAR_6, VAR_7, VAR_0 + 1) >> 5, VAR_11);
        else
            FUNC_1(0, VAR_11);
    }
    else if ( VAR_5->wlanMode == VAR_2 )
    {
        if (VAR_16 == 1)
            FUNC_1(FUNC_7(VAR_6, VAR_7, VAR_0 + 1) >> 5, VAR_11);
        else
            FUNC_1(0, VAR_11);
    }
    else
    {

        FUNC_1(0, VAR_11);
    }
    FUNC_1(0, VAR_11);
    FUNC_1(0, VAR_11);
    FUNC_1(0, VAR_11);

    if ( VAR_9 == 0 )
    {
        VAR_14 = VAR_0;
    }
    else
    {
        VAR_14 = VAR_1;

        for(VAR_12=0; VAR_12<(VAR_9>>1); VAR_12++)
        {
            VAR_17[VAR_12*2] = (u8_t) (VAR_8[VAR_12] & 0xff);
            VAR_17[VAR_12*2+1] = (u8_t) ((VAR_8[VAR_12] >> 8) & 0xff);
        }

        for(VAR_12=0; VAR_12<VAR_9; VAR_12++)
        {
            FUNC_1(VAR_17[VAR_12], VAR_11);
        }
    }

    for(VAR_12=VAR_14; VAR_12<VAR_13; VAR_12++)
    {
        VAR_15 = FUNC_7(VAR_6, VAR_7, VAR_12);
        FUNC_1(VAR_15, VAR_11);
    }

    FUNC_3( (u8_t*) VAR_10, VAR_11);

    return VAR_4;
}
