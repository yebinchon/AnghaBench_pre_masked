
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsWlanAuthFrameHeader {int status; int seq; int algo; scalar_t__* challengeText; } ;
struct TYPE_3__ {scalar_t__ connectState; scalar_t__ authMode; int bIsSharedKey; int bssid; int connectTimer; int challengeText; scalar_t__ connectByReasso; } ;
struct TYPE_4__ {TYPE_1__ sta; int tick; int ExtOffset; int BandWidth40; int frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (int *,int *,int *,int ,int) ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int *,int ,int ,int,int,int ) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

void FUNC_14(zdev_t* VAR_12, zbuf_t* VAR_13, u16_t* VAR_14, u16_t VAR_15)
{
    struct zsWlanAuthFrameHeader* VAR_16;
    u8_t VAR_17[sizeof(struct zsWlanAuthFrameHeader)];
    u32_t VAR_18, VAR_19;

    FUNC_11(VAR_12);
    FUNC_9();

    if ( !FUNC_5(VAR_12) )
    {
        return;
    }

    VAR_16 = (struct zsWlanAuthFrameHeader*) VAR_17;
    FUNC_0(VAR_12, VAR_13, VAR_17, 0, sizeof(struct zsWlanAuthFrameHeader));

    if ( VAR_10->sta.connectState == VAR_4 )
    {
        if ( (FUNC_12(VAR_16->seq) == 2)&&
             (FUNC_12(VAR_16->algo) == 0)&&
             (FUNC_12(VAR_16->status) == 0) )
        {

            FUNC_10(VAR_12);
            VAR_10->sta.connectTimer = VAR_10->tick;
            FUNC_7("ZM_STA_CONN_STATE_AUTH_COMPLETED");
            VAR_10->sta.connectState = VAR_3;
            FUNC_13(VAR_12);



            FUNC_1(VAR_12, VAR_10->frequency, VAR_10->BandWidth40,
                    VAR_10->ExtOffset, VAR_11);


            if ( VAR_10->sta.connectByReasso )
            {
                FUNC_3(VAR_12, VAR_9,
                              VAR_10->sta.bssid, 0, 0, 0);
            }
            else
            {
                FUNC_3(VAR_12, VAR_7,
                              VAR_10->sta.bssid, 0, 0, 0);
            }


        }
        else
        {
            FUNC_8("authentication failed, status = ",
                          VAR_16->status);

            if (VAR_10->sta.authMode == VAR_0)
            {
                VAR_10->sta.bIsSharedKey = 1;
                FUNC_6(VAR_12, VAR_10->sta.bIsSharedKey);
            }
            else
            {
                FUNC_7("ZM_STA_STATE_DISCONNECT");
                FUNC_4(VAR_12, VAR_1, VAR_10->sta.bssid, 3);
            }
        }
    }
    else if ( VAR_10->sta.connectState == VAR_5 )
    {
        if ( (FUNC_12(VAR_16->algo) == 1) &&
             (FUNC_12(VAR_16->seq) == 2) &&
             (FUNC_12(VAR_16->status) == 0))

        {
            FUNC_2(VAR_10->sta.challengeText, VAR_16->challengeText,
                         VAR_16->challengeText[1]+2);


            VAR_18 = 0x30001;
            VAR_19 = 0;
            FUNC_3(VAR_12, VAR_8,
                          VAR_10->sta.bssid, VAR_18, VAR_19, 0);

            FUNC_10(VAR_12);
            VAR_10->sta.connectTimer = VAR_10->tick;

            FUNC_7("ZM_STA_SUB_STATE_AUTH_SHARE_2");
            VAR_10->sta.connectState = VAR_6;
            FUNC_13(VAR_12);
        }
        else
        {
            FUNC_8("authentication failed, status = ",
                          VAR_16->status);

            FUNC_7("ZM_STA_STATE_DISCONNECT");
            FUNC_4(VAR_12, VAR_1, VAR_10->sta.bssid, 3);
        }
    }
    else if ( VAR_10->sta.connectState == VAR_6 )
    {
        if ( (FUNC_12(VAR_16->algo) == 1)&&
             (FUNC_12(VAR_16->seq) == 4)&&
             (FUNC_12(VAR_16->status) == 0) )
        {


            FUNC_1(VAR_12, VAR_10->frequency, VAR_10->BandWidth40,
                    VAR_10->ExtOffset, ((void*)0));


            FUNC_3(VAR_12, VAR_7,
                          VAR_10->sta.bssid, 0, 0, 0);

            FUNC_10(VAR_12);
            VAR_10->sta.connectTimer = VAR_10->tick;

            FUNC_7("ZM_STA_SUB_STATE_ASSOCIATE");
            VAR_10->sta.connectState = VAR_2;
            FUNC_13(VAR_12);
        }
        else
        {
            FUNC_8("authentication failed, status = ",
                          VAR_16->status);

            FUNC_7("ZM_STA_STATE_DISCONNECT");
            FUNC_4(VAR_12, VAR_1, VAR_10->sta.bssid, 3);
        }
    }
    else
    {
        FUNC_7("unknown case");
    }
}
