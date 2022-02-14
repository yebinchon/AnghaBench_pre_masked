
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
struct TYPE_4__ {int isSleepAllowed; int sleepAllowedtick; scalar_t__ tempWakeUp; int state; } ;
struct TYPE_5__ {int powerSaveMode; int aid; int qosInfo; int uapsdQ; TYPE_1__ psMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;

void FUNC_12(zdev_t* VAR_6, zbuf_t* VAR_7)
{
    u8_t VAR_8, VAR_9;
    u16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    zbuf_t* VAR_15;

    FUNC_9(VAR_6);
    FUNC_7();

    if ( VAR_5->sta.powerSaveMode == VAR_3 )

    {
        return;
    }

    VAR_5->sta.psMgr.isSleepAllowed = 1;

    if ( (VAR_10=FUNC_0(VAR_6, VAR_7, VAR_4)) != 0xffff )
    {
        VAR_8 = FUNC_11(VAR_6, VAR_7, VAR_10+1);

        if ( VAR_8 > 3 )
        {
            VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_10+4) & (~VAR_0);
            VAR_12 = VAR_8 + VAR_11 - 4;
            VAR_13 = VAR_5->sta.aid >> 3;
            VAR_14 = VAR_5->sta.aid & 7;

            if ((VAR_13 >= VAR_11) && (VAR_13 <= VAR_12))
            {
                VAR_9 = FUNC_11(VAR_6, VAR_7, VAR_10+5+VAR_13-VAR_11);

                if ( (VAR_9 >> VAR_14) & VAR_0 )
                {

                    if ( 0 )
                    {
                        VAR_5->sta.psMgr.state = VAR_2;

                        FUNC_3(VAR_6, 0);
                    }
                    else
                    {
                        if ((VAR_5->sta.qosInfo&0xf) != 0xf)
                        {



                            VAR_5->sta.psMgr.isSleepAllowed = 0;

                            switch (VAR_5->sta.powerSaveMode)
                            {
                            case 128:
                            case 130:

                                FUNC_4(VAR_6);
                                break;
                            case 129:
                                FUNC_6("wake up and send null data\n");

                                FUNC_8(VAR_6);
                                VAR_5->sta.psMgr.sleepAllowedtick = 400;
                                FUNC_10(VAR_6);

                                FUNC_3(VAR_6, 0);
                                break;
                            }

                            VAR_5->sta.psMgr.tempWakeUp = 0;
                        }
                    }
                }
            }
        }
    }

    while ((VAR_15 = FUNC_2(VAR_6, VAR_5->sta.uapsdQ)) != ((void*)0))
    {
        FUNC_5(VAR_6, VAR_15, 0, VAR_1, 0);
    }


    FUNC_1(VAR_6);
}
