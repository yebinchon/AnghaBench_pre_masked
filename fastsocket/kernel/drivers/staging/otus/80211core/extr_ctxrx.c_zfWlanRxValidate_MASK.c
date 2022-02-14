
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
struct TYPE_3__ {int enableDrvBA; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;

u16_t FUNC_5(zdev_t* VAR_11, zbuf_t* VAR_12)
{
    u16_t VAR_13;
    u16_t VAR_14;
    u16_t VAR_15;
    u16_t VAR_16;
    u8_t VAR_17;

    FUNC_3(VAR_11);

    VAR_14 = FUNC_4(VAR_11, VAR_12, 0);
    VAR_13 = VAR_14 & 0xC;
    VAR_17 = (VAR_14 & 0xF0) >> 4;

    VAR_15 = FUNC_2(VAR_11, VAR_12);


    if ((VAR_13 == 0x8) || (VAR_13 == 0x0))
    {




        if ((VAR_14 & 0x4000) != 0)
        {


            if (VAR_15 < 32)
            {
                return VAR_1;
            }
        }
        else if ( VAR_17 == 0x5 || VAR_17 == 0x8 )
        {

            if (VAR_15 < 36)
            {
                return VAR_2;
            }
        }
        else
        {

            if (VAR_15 < 24)
            {
                return VAR_2;
            }
        }


        if (VAR_15 > VAR_9)
        {
            return VAR_0;
        }
    }
    else if ((VAR_14&0xff) == 0xa4)
    {


    }
    else if ((VAR_14&0xff) == VAR_8)
    {
        if (VAR_10->sta.enableDrvBA == 1)
        {
            FUNC_0(VAR_11, VAR_12);
        }

        return VAR_3;
    }
    else
    {
        return VAR_4;
    }

    if ( VAR_10->wlanMode == VAR_5 )
    {
    }
    else if ( VAR_10->wlanMode != VAR_6 )
    {
        if ( (VAR_16=FUNC_1(VAR_11, VAR_12))!=VAR_7 )
        {

            return VAR_16;
        }
    }

    return VAR_7;
}
