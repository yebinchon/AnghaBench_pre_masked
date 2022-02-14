
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
struct TYPE_5__ {scalar_t__ wepStatus; int (* pStaRxSecurityCheckCb ) (int *,int *) ;scalar_t__ dropUnencryptedPkts; int * bssid; } ;
struct TYPE_4__ {int swRxDropUnencryptedCount; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; TYPE_1__ commTally; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* VAR_17 ;
 int FUNC_1 (int *,int *,int*,scalar_t__,int) ;
 int FUNC_2 (int *,int ,int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,scalar_t__) ;

u16_t FUNC_8(zdev_t* VAR_18, zbuf_t* VAR_19)
{
    u8_t VAR_20, VAR_21;
    u8_t VAR_22;

    u16_t VAR_23;
    u16_t VAR_24;


    FUNC_5(VAR_18);

    VAR_20 = FUNC_6(VAR_18, VAR_19, 0);
    VAR_22 = FUNC_6(VAR_18, VAR_19, VAR_12);


    if ( (!FUNC_3(VAR_18))&&((VAR_20 & 0xf) == VAR_10) )
    {
        return VAR_4;
    }


    if ( (FUNC_3(VAR_18))&&((VAR_20 & 0xf) == VAR_10) )
    {

        if ( VAR_17->wlanMode == VAR_8 )
        {

            u16_t VAR_25[3];
            VAR_25[0] = FUNC_4(VAR_17->sta.bssid[0]);
            VAR_25[1] = FUNC_4(VAR_17->sta.bssid[1]);
            VAR_25[2] = FUNC_4(VAR_17->sta.bssid[2]);
            if ( !FUNC_1(VAR_18, VAR_19, (u8_t *)VAR_25,
                                       VAR_13, 6) )
            {
                return VAR_5;
            }
        }
        else if ( VAR_17->wlanMode == VAR_7 )
        {

            u16_t VAR_26[3];
            VAR_26[0] = FUNC_4(VAR_17->sta.bssid[0]);
            VAR_26[1] = FUNC_4(VAR_17->sta.bssid[1]);
            VAR_26[2] = FUNC_4(VAR_17->sta.bssid[2]);
            if ( !FUNC_1(VAR_18, VAR_19, (u8_t *)VAR_26,
                                       VAR_14, 6) )
            {
                return VAR_5;
            }
        }

        VAR_21 = FUNC_6(VAR_18, VAR_19, 1);


        if ( VAR_17->sta.dropUnencryptedPkts &&
             (VAR_17->sta.wepStatus != VAR_3 )&&
             ( !(VAR_21 & VAR_0) ) )
        {


            VAR_23 = VAR_6;
            if ( VAR_17->sta.pStaRxSecurityCheckCb != ((void*)0) )
            {
                VAR_23 = VAR_17->sta.pStaRxSecurityCheckCb(VAR_18, VAR_19);
            }
            else
            {
                VAR_23 = VAR_6;
            }
            if (VAR_23 == VAR_6)
            {
                VAR_17->commTally.swRxDropUnencryptedCount++;
            }
            return VAR_23;







        }
    }

    return VAR_9;
}
