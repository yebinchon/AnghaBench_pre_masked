
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ flagFreqChanging; scalar_t__ bChannelScan; int ac0PriorityHigherThanAc2; scalar_t__ EnableHT; scalar_t__ bScheduleScan; scalar_t__ flagKeyChanging; scalar_t__ DFSDisableTx; } ;
struct TYPE_4__ {scalar_t__ halState; scalar_t__ wlanMode; int vtxqPushing; int tick; TYPE_1__ sta; int modeMDKEnable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *,int ,int *,int ,int *,int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ,int ,int ) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void FUNC_16(zdev_t* VAR_9)
{
    zbuf_t* VAR_10;
    u16_t VAR_11;
    u16_t VAR_12;
    u32_t VAR_13;
    u16_t VAR_14;
    u16_t VAR_15 = 0;
    FUNC_14(VAR_9);
    FUNC_12();





    if (VAR_8->halState == VAR_2)
    {
        if (!VAR_8->modeMDKEnable)
        {
            FUNC_11("HAL is not ready for Tx");
        }
        return;
    }
    else if (VAR_8->sta.DFSDisableTx)
    {
        FUNC_11("return because 802.11h DFS Disable Tx");
        return;
    }
    else if (VAR_8->sta.flagFreqChanging != 0)
    {

        return;
    }
    else if (( VAR_8->sta.flagKeyChanging ) && ( VAR_8->wlanMode != VAR_4 ))
    {
        return;
    }
    FUNC_13(VAR_9);
    if (VAR_8->vtxqPushing != 0)
    {
        VAR_15 = 1;
    }
    else
    {
        VAR_8->vtxqPushing = 1;
    }
    FUNC_15(VAR_9);

    if (VAR_15 == 1)
    {
        return;
    }

    while (1)
    {
        VAR_12 = 0;


        while( FUNC_4(VAR_9) > 0 )
        {
            if ((VAR_10 = FUNC_2(VAR_9)) != 0)
            {
                VAR_12 = 1;

                if ((VAR_14 = FUNC_6(VAR_9, ((void*)0), 0, ((void*)0), 0, ((void*)0), 0, VAR_10, 0,
                        VAR_3, 0, 0xff)) != VAR_7)
                {
                    FUNC_10(VAR_9, VAR_10, 0);
                }
            }
            else
            {
                break;
            }
        }
        if ((VAR_8->sta.bScheduleScan) || ((VAR_8->sta.bChannelScan == VAR_0) && (FUNC_8(VAR_9))))
        {

            VAR_8->vtxqPushing = 0;
            return;
        }
        for (VAR_11=0; VAR_11<4; VAR_11++)
        {
            if ((VAR_13 = FUNC_4(VAR_9)) >= 3)
            {
                if ((VAR_10 = FUNC_3(VAR_9, 3)) != 0)
                {
                    VAR_12 = 1;

                    FUNC_9(VAR_9, VAR_10, 0, VAR_1, 0);
                    FUNC_0(VAR_9, VAR_8->tick);
                }
            }
            else
            {
                break;
            }
        }


        for (VAR_11=0; VAR_11<3; VAR_11++)
        {
            if ((VAR_13 = FUNC_4(VAR_9)) >= (FUNC_5(VAR_9)*1/4))
            {
                if ((VAR_10 = FUNC_3(VAR_9, 2)) != 0)
                {
                    VAR_12 = 1;
                    FUNC_9(VAR_9, VAR_10, 0, VAR_1, 0);
                    FUNC_0(VAR_9, VAR_8->tick);
                }
                if (VAR_8->sta.ac0PriorityHigherThanAc2 == 1)
                {
                    if ((VAR_10 = FUNC_3(VAR_9, 0)) != 0)
                    {
                        VAR_12 = 1;
                        FUNC_9(VAR_9, VAR_10, 0, VAR_1, 0);
                        FUNC_0(VAR_9, VAR_8->tick);
                    }
                }
            }
            else
            {
                break;
            }
        }


        for (VAR_11=0; VAR_11<2; VAR_11++)
        {
            if ((VAR_13 = FUNC_4(VAR_9)) >= (FUNC_5(VAR_9)*2/4))
            {
                if ((VAR_10 = FUNC_3(VAR_9, 0)) != 0)
                {
                    VAR_12 = 1;
                    FUNC_9(VAR_9, VAR_10, 0, VAR_1, 0);
                    FUNC_0(VAR_9, VAR_8->tick);
                }
            }
            else
            {
                break;
            }

        }


        if ((VAR_13 = FUNC_4(VAR_9)) >= (FUNC_5(VAR_9)*3/4))
        {
            if ((VAR_10 = FUNC_3(VAR_9, 1)) != 0)
            {
                VAR_12 = 1;
                FUNC_9(VAR_9, VAR_10, 0, VAR_1, 0);
                FUNC_0(VAR_9, VAR_8->tick);
            }
        }


        if (VAR_12 == 0)
        {
            VAR_8->vtxqPushing = 0;
            return;
        }
    }
}
