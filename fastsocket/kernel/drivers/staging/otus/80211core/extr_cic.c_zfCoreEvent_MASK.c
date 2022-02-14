
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef int u32_t ;
typedef size_t u16_t ;
typedef int s8_t ;
typedef int rsp ;
struct TYPE_7__ {scalar_t__ powerSaveMode; size_t staPSDataCount; int ibssAtimTimer; int atimWindow; TYPE_1__* oppositeInfo; int ** staPSDataQueue; } ;
struct TYPE_9__ {size_t* bcmcTail; size_t* bcmcHead; TYPE_3__* staTable; int *** bcmcArray; } ;
struct TYPE_10__ {scalar_t__ wlanMode; scalar_t__ CurrentDtimCount; TYPE_2__ sta; TYPE_4__ ap; } ;
struct TYPE_8__ {int rcCell; } ;
struct TYPE_6__ {int rcCell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,size_t,int) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *,size_t*,size_t*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int ,size_t) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(zdev_t* VAR_7, u16_t VAR_8, u8_t* VAR_9)
{
    u16_t VAR_10;
    zbuf_t* VAR_11;
    u8_t VAR_12;
    u8_t VAR_13 = 0;
    u8_t VAR_14;
    s8_t VAR_15;
    FUNC_12(VAR_7);
    FUNC_10();


    if (VAR_8 == 0)
    {
        if ( VAR_6->wlanMode == VAR_3 )
        {
            FUNC_1(VAR_7);

            if (VAR_6->CurrentDtimCount == 0)
            {

                do
                {
                    VAR_11 = ((void*)0);
                    VAR_12 = 0;
                    FUNC_11(VAR_7);
                    if (VAR_6->ap.bcmcTail[VAR_13] != VAR_6->ap.bcmcHead[VAR_13])
                    {

                        VAR_11 = VAR_6->ap.bcmcArray[VAR_13][VAR_6->ap.bcmcHead[VAR_13]];
                        VAR_6->ap.bcmcHead[VAR_13] = (VAR_6->ap.bcmcHead[VAR_13] + 1)
                                & (VAR_0 - 1);
                        if (VAR_6->ap.bcmcTail[VAR_13] != VAR_6->ap.bcmcHead[VAR_13])
                        {
                            VAR_12 = 0x20;
                        }
                    }
                    FUNC_13(VAR_7);
                    if (VAR_11 != ((void*)0))
                    {

                        FUNC_9(VAR_7, VAR_11, 0, VAR_2,
                                VAR_12);
                    }
                } while(VAR_11 != ((void*)0));

            }
        }
        else
        {

            if ( VAR_6->sta.powerSaveMode > VAR_5 )
            {

                for(VAR_10=0; VAR_10<VAR_6->sta.staPSDataCount; VAR_10++)
                {
                    FUNC_9(VAR_7, VAR_6->sta.staPSDataQueue[VAR_10], 0,
                                VAR_2, 0);
                }

                VAR_6->sta.staPSDataCount = 0;
            }

            if ( VAR_6->wlanMode == VAR_4 )
            {
                FUNC_8(VAR_7);
                VAR_6->sta.ibssAtimTimer = VAR_1 | VAR_6->sta.atimWindow;
            }

            FUNC_4(VAR_7);
        }
    }
    else if (VAR_8 == 1)
    {
        u32_t VAR_16;

        VAR_16 = (u32_t)(VAR_9[6]) + (((u32_t)(VAR_9[7]))<<8)
                + (((u32_t)(VAR_9[8]))<<16) + (((u32_t)(VAR_9[9]))<<24);

        if (VAR_6->wlanMode == VAR_3)
        {
            FUNC_11(VAR_7);
            if ((VAR_10=FUNC_0(VAR_7, (u16_t*)VAR_9)) != 0xffff)
            {
                FUNC_5(VAR_7, &VAR_6->ap.staTable[VAR_10].rcCell, 0,(u32_t)FUNC_3(VAR_16));
            }
            FUNC_13(VAR_7);
        }
        else
        {
            FUNC_11(VAR_7);
            VAR_15 = FUNC_7(VAR_7, (u16_t*)VAR_9, &VAR_14);
            if ( VAR_15 == 0 )
            {
                FUNC_5(VAR_7, &VAR_6->sta.oppositeInfo[VAR_14].rcCell, 0,(u32_t)FUNC_3(VAR_16));
            }
            FUNC_13(VAR_7);
        }
    }
    else if (VAR_8 == 2)
    {
        u32_t VAR_17;

        VAR_17 = (u32_t)(VAR_9[6]) + (((u32_t)(VAR_9[7]))<<8)
                + (((u32_t)(VAR_9[8]))<<16) + (((u32_t)(VAR_9[9]))<<24);


        if (VAR_6->wlanMode == VAR_3)
        {
            FUNC_11(VAR_7);
            if ((VAR_10=FUNC_0(VAR_7, (u16_t*)VAR_9)) != 0xffff)
            {
                FUNC_5(VAR_7, &VAR_6->ap.staTable[VAR_10].rcCell, 0,(u32_t)FUNC_3(VAR_17));
            }
            FUNC_13(VAR_7);

            FUNC_2(VAR_7, VAR_9);
        }
        else
        {
            FUNC_11(VAR_7);
            VAR_15 = FUNC_7(VAR_7, (u16_t*)VAR_9, &VAR_14);
            if ( VAR_15 == 0 )
            {
                FUNC_5(VAR_7, &VAR_6->sta.oppositeInfo[VAR_14].rcCell, 0,(u32_t)FUNC_3(VAR_17));
            }
            FUNC_13(VAR_7);
        }
    }
    else if (VAR_8 == 3)
    {
        u32_t VAR_18;

        VAR_18 = (u32_t)(VAR_9[6]) + (((u32_t)(VAR_9[7]))<<8)
                + (((u32_t)(VAR_9[8]))<<16) + (((u32_t)(VAR_9[9]))<<24);


        if (VAR_6->wlanMode == VAR_3)
        {
            FUNC_11(VAR_7);
            if ((VAR_10=FUNC_0(VAR_7, (u16_t*)VAR_9)) != 0xffff)
            {
                FUNC_6(VAR_7, &VAR_6->ap.staTable[VAR_10].rcCell, FUNC_3(VAR_18));
            }
            FUNC_13(VAR_7);
        }
        else
        {
            FUNC_11(VAR_7);
            VAR_15 = FUNC_7(VAR_7, (u16_t*)VAR_9, &VAR_14);
            if ( VAR_15 == 0 )
            {
                FUNC_6(VAR_7, &VAR_6->sta.oppositeInfo[VAR_14].rcCell, FUNC_3(VAR_18));
            }
            FUNC_13(VAR_7);
        }
    }
    else if (VAR_8 == 4)
    {
        u32_t VAR_19;
        u32_t VAR_20;
        VAR_14 = 0;

        VAR_19=((u32_t*)VAR_9)[0] & 0xFFFF;
        VAR_20=((u32_t*)VAR_9)[0] >> 16;

        if (VAR_20 > 15) {
            VAR_20 = (VAR_20 & 0xF) + 12 + 2;
        }
        else {
            VAR_20 = VAR_20 + 12;
        }

        FUNC_11(VAR_7);
        FUNC_5(VAR_7, &VAR_6->sta.oppositeInfo[VAR_14].rcCell, (u8_t)VAR_20, VAR_19);
        FUNC_13(VAR_7);
    }
}
