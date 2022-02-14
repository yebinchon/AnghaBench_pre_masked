
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct zsHpPriv {scalar_t__ ibssBcnEnabled; scalar_t__ hwFrequency; int ibssBcnInterval; int aggMaxDurationBE; int aggPktNum; int latestSIFS; int strongRSSI; int currentAckRtsTpc; int halCapability; int rxStrongRSSI; int* eepromImage; int* usbAcSendBytes; int* txop; int* cwmin; int slotType; scalar_t__* cwmax; scalar_t__ retransmissionEvent; } ;
struct TYPE_3__ {int EnableHT; scalar_t__ enableDrvBA; int avgSizeOfReceivePackets; int athOwlAp; scalar_t__ bScheduleScan; scalar_t__ bChannelScan; int SWEncryptEnable; } ;
struct TYPE_4__ {int tick; scalar_t__ wlanMode; int BandWidth40; scalar_t__ dynamicSIFSEnable; scalar_t__ SignalStrength; TYPE_1__ sta; struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_16)
{
    struct zsHpPriv* VAR_17;
    u8_t VAR_18 = 0;
    u8_t VAR_19;

    FUNC_4(VAR_16);
    VAR_17=VAR_15->hpPrivate;


    if (VAR_17->ibssBcnEnabled != 0)
    {
        if (VAR_17->hwFrequency <= VAR_2)
        {
            if ((VAR_15->tick % 10) == 0)
            {
                if ((VAR_15->tick % 40) == 0)
                {
                    FUNC_0(VAR_16, VAR_7, VAR_17->ibssBcnInterval-1);
                    VAR_18 = 1;
                }
                else
                {
                    FUNC_0(VAR_16, VAR_7, VAR_17->ibssBcnInterval);
                    VAR_18 = 1;
                }
            }
        }
    }

    if ((VAR_15->tick & 0x3f) == 0x25)
    {

        if (VAR_17->ibssBcnEnabled != 0)
        {
            FUNC_0(VAR_16, VAR_6, VAR_1);
            VAR_18 = 1;
        }



        if (( VAR_15->wlanMode == VAR_9 )
            && (FUNC_2(VAR_16))
            && (VAR_15->sta.EnableHT == 1)
            && (VAR_15->BandWidth40 == 1)
            && (VAR_15->sta.enableDrvBA ==0)
            && (VAR_17->aggMaxDurationBE > 2000)
            && (VAR_15->sta.avgSizeOfReceivePackets > 1420))
        {
            FUNC_0(VAR_16, 0x1c3b9c, 0x8000a);
            VAR_18 = 1;
        }
        else
        {
            FUNC_0(VAR_16, 0x1c3b9c, VAR_17->aggPktNum);
            VAR_18 = 1;
        }

        if (VAR_15->dynamicSIFSEnable == 0)
        {
            if (( VAR_15->wlanMode == VAR_9 )
                && (FUNC_2(VAR_16))
                && (VAR_15->sta.EnableHT == 1)
                && (VAR_15->BandWidth40 == 0)
                && (VAR_15->sta.enableDrvBA ==0))
            {
                FUNC_0(VAR_16, 0x1c3698, 0x5144000);
                VAR_18 = 1;
            }
            else
            {
                FUNC_0(VAR_16, 0x1c3698, 0xA144000);
                VAR_18 = 1;
            }
        }
        else
        {
            if (( VAR_15->wlanMode == VAR_9 )
                && (FUNC_2(VAR_16))
                && (VAR_15->sta.EnableHT == 1)
                && (VAR_15->sta.athOwlAp == 1))
            {
                if (VAR_17->retransmissionEvent)
                {
                    switch(VAR_17->latestSIFS)
                    {
                    case 0:
                        VAR_17->latestSIFS = 1;
                        FUNC_0(VAR_16, VAR_8, 0x8144000);
                        break;
                    case 1:
                        VAR_17->latestSIFS = 2;
                        FUNC_0(VAR_16, VAR_8, 0xa144000);
                        break;
                    case 2:
                        VAR_17->latestSIFS = 3;
                        FUNC_0(VAR_16, VAR_8, 0xc144000);
                        break;
                    case 3:
                        VAR_17->latestSIFS = 0;
                        FUNC_0(VAR_16, VAR_8, 0xa144000);
                        break;
                    default:
                        VAR_17->latestSIFS = 0;
                        FUNC_0(VAR_16, VAR_8, 0xa144000);
                        break;
                    }
                    VAR_18 = 1;
                    FUNC_3("##### Correct Tx retransmission issue #####, ", VAR_17->latestSIFS);
                    VAR_17->retransmissionEvent = 0;
                }
            }
            else
            {
                VAR_17->latestSIFS = 0;
                VAR_17->retransmissionEvent = 0;
                FUNC_0(VAR_16, 0x1c3698, 0xA144000);
                VAR_18 = 1;
            }
        }

        if ((VAR_15->sta.bScheduleScan == VAR_0) && (VAR_15->sta.bChannelScan == VAR_0))
        {

        if (( VAR_15->wlanMode == VAR_9 )
            && (FUNC_2(VAR_16))
            && (VAR_15->SignalStrength > 66))
        {


            {
                VAR_17->strongRSSI = 1;

                if (VAR_17->currentAckRtsTpc > (14+10))
                {
                    VAR_19 = VAR_17->currentAckRtsTpc - 14;
                }
                else
                {
                    VAR_19 = 10;
                }
                FUNC_0(VAR_16, 0x1c3694, ((VAR_19) << 20) | (0x1<<26));
                FUNC_0(VAR_16, 0x1c3bb4, ((VAR_19) << 5 ) | (0x1<<11) |
                                                       ((VAR_19) << 21) | (0x1<<27) );
                VAR_18 = 1;
            }
        }
        else
        {


            {
                VAR_17->strongRSSI = 0;
                if (VAR_17->halCapability & VAR_3)
                {
                    FUNC_0(VAR_16, 0x1c3694, ((VAR_17->currentAckRtsTpc&0x3f) << 20) | (0x1<<26));
                    FUNC_0(VAR_16, 0x1c3bb4, ((VAR_17->currentAckRtsTpc&0x3f) << 5 ) | (0x1<<11) |
                                                       ((VAR_17->currentAckRtsTpc&0x3f) << 21) | (0x1<<27) );
                }
                else
                {
                    FUNC_0(VAR_16, 0x1c3694, ((VAR_17->currentAckRtsTpc&0x3f) << 20) | (0x5<<26));
                    FUNC_0(VAR_16, 0x1c3bb4, ((VAR_17->currentAckRtsTpc&0x3f) << 5 ) | (0x5<<11) |
                                                       ((VAR_17->currentAckRtsTpc&0x3f) << 21) | (0x5<<27) );
                }
                VAR_18 = 1;
            }
        }

        }

        if ((VAR_17->halCapability & VAR_3) == 0)
        {
            if ((VAR_15->sta.bScheduleScan == VAR_0) && (VAR_15->sta.bChannelScan == VAR_0))
            {


                u8_t VAR_20 = 71;
                u8_t VAR_21 = 66;



                if (( VAR_15->wlanMode == VAR_9 )
                    && (FUNC_2(VAR_16))
                    && (VAR_15->SignalStrength > VAR_20)
                    )
                {
                    VAR_17->rxStrongRSSI = 1;




                    if ((VAR_17->eepromImage[0x100+0x110*2/4]&0xff) == 0x80)
                    {
                        if (VAR_17->hwFrequency <= VAR_2)
                        {
                            FUNC_0(VAR_16, 0x1c8960, 0x900);
                        }
                        else
                        {
                            FUNC_0(VAR_16, 0x1c8960, 0x9b49);
                        }
                    }
                    else
                    {
                        FUNC_0(VAR_16, 0x1c8960, 0x0900);
                    }
                    VAR_18 = 1;
                }
                else if (( VAR_15->wlanMode == VAR_9 )
                    && (FUNC_2(VAR_16))
                    && (VAR_15->SignalStrength > VAR_21)
                    )
                {

                }
                else
                {


                    {
                        VAR_17->rxStrongRSSI = 0;




                        if ((VAR_17->eepromImage[0x100+0x110*2/4]&0xff) == 0x80)
                        {
                            if (VAR_17->hwFrequency <= VAR_2)
                            {
                                FUNC_0(VAR_16, 0x1c8960, 0x9b49);
                            }
                            else
                            {
                                FUNC_0(VAR_16, 0x1c8960, 0x0900);
                            }
                        }
                        else
                        {
                            FUNC_0(VAR_16, 0x1c8960, 0x9b40);
                        }
                        VAR_18 = 1;
                    }
                }

            }
        }

        if (VAR_17->usbAcSendBytes[3] > (VAR_17->usbAcSendBytes[0]*2))
        {
            FUNC_0(VAR_16, VAR_5, VAR_17->txop[3]);
            VAR_18 = 1;
        }
        else if (VAR_17->usbAcSendBytes[2] > (VAR_17->usbAcSendBytes[0]*2))
        {
            FUNC_0(VAR_16, VAR_5, VAR_17->txop[2]);
            VAR_18 = 1;
        }
        else if (VAR_17->usbAcSendBytes[1] > (VAR_17->usbAcSendBytes[0]*2))
        {
            FUNC_0(VAR_16, VAR_4, VAR_17->cwmin[1]+((u32_t)VAR_17->cwmax[1]<<16));
            VAR_18 = 1;
        }
        else
        {
            if (VAR_17->slotType == 1)
            {
                if ((VAR_15->sta.enableDrvBA ==0)
                   && (VAR_17->aggMaxDurationBE > 2000))
                {
                    FUNC_0(VAR_16, VAR_4, (VAR_17->cwmin[0]/2)+((u32_t)VAR_17->cwmax[0]<<16));
                }
                else
                {
                    FUNC_0(VAR_16, VAR_4, VAR_17->cwmin[0]+((u32_t)VAR_17->cwmax[0]<<16));
                }
                VAR_18 = 1;
            }
            else
            {


                FUNC_0(VAR_16, VAR_4, VAR_17->cwmin[0]+((u32_t)VAR_17->cwmax[0]<<16));
                VAR_18 = 1;
            }

            if ((VAR_15->sta.SWEncryptEnable & (VAR_13|VAR_14)) == 0)
            {
                FUNC_0(VAR_16, VAR_5, VAR_17->txop[0]);
                VAR_18 = 1;
            }
            else
            {
                FUNC_0(VAR_16, VAR_5, 0x30);
                VAR_18 = 1;
            }

        }
        VAR_17->usbAcSendBytes[3] = 0;
        VAR_17->usbAcSendBytes[2] = 0;
        VAR_17->usbAcSendBytes[1] = 0;
        VAR_17->usbAcSendBytes[0] = 0;
    }

    if (VAR_18 == 1)
    {
        FUNC_1(VAR_16);
    }

    return;
}
