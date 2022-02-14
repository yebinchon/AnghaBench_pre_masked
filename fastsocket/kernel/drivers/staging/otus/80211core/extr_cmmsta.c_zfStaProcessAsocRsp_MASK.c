
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
typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
struct zsWlanAssoFrameHeader {scalar_t__ status; int aid; } ;
struct TYPE_7__ {int ChannelInfo; } ;
struct TYPE_6__ {int HtCapInfo; } ;
struct TYPE_8__ {TYPE_2__ HtInfo; TYPE_1__ HtCap; } ;
struct TYPE_9__ {scalar_t__ connectState; int EnableHT; int wmeConnected; int wmeEnabled; scalar_t__ asocRspFrameBodySize; int* asocRspFrameBody; int htCtrlBandwidth; int SWEncryptEnable; int HT2040; int aid; int rxBeaconCount; scalar_t__ connection_11b; int bssid; int connectByReasso; scalar_t__ failCntOfReasso; scalar_t__ SG40; int connPowerInHalfDbm; scalar_t__ oppositeCount; TYPE_3__ ie; int wmeQosInfo; int qosInfo; } ;
struct TYPE_10__ {scalar_t__ ExtOffset; int addbaCount; int CurrentTxRateKbps; int CurrentRxRateKbps; TYPE_4__ sta; int (* zfcbConnectNotify ) (int *,int ,int ) ;scalar_t__ addbaComplete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,int ,int ) ;
 TYPE_5__* VAR_15 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int *,int ,int) ;
 int FUNC_4 (int *,int *,int,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ,int) ;
 scalar_t__ FUNC_14 (int *,int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *,scalar_t__) ;

void FUNC_19(zdev_t* VAR_16, zbuf_t* VAR_17)
{
    struct zsWlanAssoFrameHeader* VAR_18;
    u8_t VAR_19[sizeof(struct zsWlanAssoFrameHeader)];
    u16_t VAR_20;
    u32_t VAR_21;
    u32_t VAR_22;

    FUNC_17(VAR_16);

    if ( !FUNC_9(VAR_16) )
    {
        return;
    }

    VAR_18 = (struct zsWlanAssoFrameHeader*) VAR_19;
    FUNC_3(VAR_16, VAR_17, VAR_19, 0, sizeof(struct zsWlanAssoFrameHeader));

    if ( VAR_15->sta.connectState == VAR_9 )
    {
        if ( VAR_18->status == 0 )
        {
            FUNC_15("ZM_STA_STATE_CONNECTED");

            if (VAR_15->sta.EnableHT == 1)
            {
                VAR_15->sta.wmeConnected = 1;
            }
            if ((VAR_15->sta.wmeEnabled & VAR_12) != 0)
            {

                if ((VAR_20 = FUNC_4(VAR_16, VAR_17, 2, 1)) != 0xffff)
                {
                    FUNC_15("WME enable");
                    VAR_15->sta.wmeConnected = 1;
                    if ((VAR_15->sta.wmeEnabled & VAR_11) != 0)
                    {
                        if ((FUNC_18(VAR_16, VAR_17, VAR_20+8) & 0x80) != 0)
                        {
                            FUNC_15("UAPSD enable");
                            VAR_15->sta.qosInfo = VAR_15->sta.wmeQosInfo;
                        }
                    }

                    FUNC_12(VAR_16, VAR_17);
                }
            }



            VAR_15->sta.asocRspFrameBodySize = FUNC_14(VAR_16, VAR_17)-24;
            if (VAR_15->sta.asocRspFrameBodySize > VAR_4)
            {
                VAR_15->sta.asocRspFrameBodySize = VAR_4;
            }
            for (VAR_21=0; VAR_21<VAR_15->sta.asocRspFrameBodySize; VAR_21++)
            {
                VAR_15->sta.asocRspFrameBody[VAR_21] = FUNC_18(VAR_16, VAR_17, VAR_21+24);
            }

            FUNC_11(VAR_16, VAR_17);
            if (VAR_15->sta.EnableHT &&
                ((VAR_15->sta.ie.HtCap.HtCapInfo & VAR_2) != 0) &&
                (VAR_15->ExtOffset != 0))
            {
                VAR_15->sta.htCtrlBandwidth = 1;
            }
            else
            {
                VAR_15->sta.htCtrlBandwidth = 0;
            }





            if (VAR_15->sta.EnableHT == 1)
            {
                VAR_15->addbaComplete = 0;

                if ((VAR_15->sta.SWEncryptEnable & VAR_13) == 0 &&
                    (VAR_15->sta.SWEncryptEnable & VAR_14) == 0)
                {
                    VAR_15->addbaCount = 1;
                    FUNC_1(VAR_16, VAR_15->sta.bssid, 0, 0);
                    FUNC_13(VAR_16, VAR_5, 100);
                }
            }


            if(VAR_15->sta.ie.HtInfo.ChannelInfo & VAR_0)
            {
                VAR_15->sta.HT2040 = 1;

            }

            VAR_15->sta.aid = VAR_18->aid & 0x3fff;
            VAR_15->sta.oppositeCount = 0;
            FUNC_10(VAR_16, VAR_17);

            VAR_15->sta.rxBeaconCount = 16;

            FUNC_2(VAR_16, VAR_10);
            VAR_15->sta.connPowerInHalfDbm = FUNC_6(VAR_16);
            if (VAR_15->zfcbConnectNotify != ((void*)0))
            {
                if (VAR_15->sta.EnableHT != 0)
             {
              VAR_22 = (FUNC_5(VAR_16) & VAR_6);
              if (VAR_15->sta.htCtrlBandwidth == 1)
              {
         if(VAR_22)
            {
                if (VAR_15->sta.SG40)
                {
                    VAR_15->CurrentTxRateKbps = 150000;
              VAR_15->CurrentRxRateKbps = 300000;
                }
                else
                {
                    VAR_15->CurrentTxRateKbps = 135000;
              VAR_15->CurrentRxRateKbps = 270000;
                }
            }
            else
            {
                if (VAR_15->sta.SG40)
                {
                    VAR_15->CurrentTxRateKbps = 300000;
              VAR_15->CurrentRxRateKbps = 300000;
                }
                else
                {
                    VAR_15->CurrentTxRateKbps = 270000;
              VAR_15->CurrentRxRateKbps = 270000;
                }
            }
              }
              else
              {
                  if(VAR_22)
            {
                VAR_15->CurrentTxRateKbps = 650000;
          VAR_15->CurrentRxRateKbps = 130000;
            }
            else
            {
                VAR_15->CurrentTxRateKbps = 130000;
             VAR_15->CurrentRxRateKbps = 130000;
            }
              }
                }
                else
                {
                    if (VAR_15->sta.connection_11b != 0)
                    {
                        VAR_15->CurrentTxRateKbps = 11000;
               VAR_15->CurrentRxRateKbps = 11000;
                    }
                    else
                    {
                        VAR_15->CurrentTxRateKbps = 54000;
               VAR_15->CurrentRxRateKbps = 54000;
           }
                }


                VAR_15->zfcbConnectNotify(VAR_16, VAR_7, VAR_15->sta.bssid);
            }
            VAR_15->sta.connectByReasso = VAR_3;
            VAR_15->sta.failCntOfReasso = 0;

            FUNC_7(VAR_16);
        }
        else
        {
            FUNC_16("association failed, status = ",
                          VAR_18->status);

            FUNC_15("ZM_STA_STATE_DISCONNECT");
            VAR_15->sta.connectByReasso = VAR_1;
            FUNC_8(VAR_16, VAR_8, VAR_15->sta.bssid, 3);
        }
    }

}
