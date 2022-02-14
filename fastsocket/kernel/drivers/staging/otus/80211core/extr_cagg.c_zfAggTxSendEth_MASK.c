
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef size_t u16_t ;
struct zsFrag {int* seq; size_t* bufType; int ** buf; scalar_t__* flag; } ;
struct aggControl {scalar_t__ ampduIndication; } ;
struct TYPE_15__ {size_t txDataByteCount; } ;
struct TYPE_14__ {int txTraffic; } ;
struct TYPE_13__ {int txMulticastOctets; int txMulticastFrm; int txBroadcastOctets; int txBroadcastFrm; int txUnicastOctets; int txUnicastFrm; } ;
struct TYPE_12__ {int encryMode; scalar_t__ keyId; scalar_t__ cencKeyId; scalar_t__ wmeConnected; } ;
struct TYPE_11__ {scalar_t__* bcHalKeyIdx; TYPE_1__* staTable; } ;
struct TYPE_17__ {scalar_t__ wlanMode; size_t fragThreshold; TYPE_6__ trafTally; TYPE_5__ ledStruct; TYPE_4__ commTally; int * seq; TYPE_3__ sta; TYPE_2__ ap; } ;
struct TYPE_16__ {int bar_ssn; } ;
struct TYPE_10__ {int encryMode; scalar_t__ keyIdx; } ;
typedef TYPE_7__* TID_TX ;



 scalar_t__ VAR_0 ;

 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;




 size_t VAR_9 ;
 TYPE_9__* VAR_10 ;
 size_t* VAR_11 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,size_t*,scalar_t__*) ;
 size_t FUNC_2 (int *,size_t*,size_t,size_t*,size_t,size_t*,size_t,int *,size_t,size_t,size_t,scalar_t__) ;
 size_t FUNC_3 (int *,int *,size_t*,int,scalar_t__,size_t,size_t,size_t,size_t*,size_t*,scalar_t__,size_t*,size_t*,size_t,struct aggControl*) ;
 size_t FUNC_4 (int *,int *,size_t*,size_t*) ;
 size_t FUNC_5 (int *,int *,size_t*,size_t,size_t*) ;
 int FUNC_6 (int *,int *,scalar_t__*,size_t*) ;
 int FUNC_7 (int *,int *,size_t) ;
 size_t FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,scalar_t__) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ,char*,size_t) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 size_t FUNC_17 (int *,int *,int) ;

u16_t FUNC_18(zdev_t* VAR_12, zbuf_t* VAR_13, u16_t VAR_14, u16_t VAR_15, u8_t VAR_16, struct aggControl *VAR_17, TID_TX VAR_18)
{
    u16_t VAR_19;


    u16_t VAR_20;
    u16_t VAR_21[(8+30+2+18)/2];
    u16_t VAR_22;
    u16_t VAR_23[8/2];
    u16_t VAR_24;
    u16_t VAR_25[8/2];
    u16_t VAR_26;
    u16_t VAR_27;
    u16_t VAR_28;
    u16_t VAR_29;
    struct zsFrag VAR_30;
    u16_t VAR_31, VAR_32;
    u16_t VAR_33[3];
    u16_t VAR_34[3];
    u8_t VAR_35;
    u8_t VAR_36, VAR_37 = 0;
    u16_t VAR_38;

    FUNC_15(VAR_12);

    FUNC_13();

    FUNC_12(VAR_4, "zfTxSendEth(), port=", VAR_14);


    FUNC_6(VAR_12, VAR_13, &VAR_35, &VAR_38);
    VAR_33[0] = FUNC_17(VAR_12, VAR_13, 0);
    VAR_33[1] = FUNC_17(VAR_12, VAR_13, 2);
    VAR_33[2] = FUNC_17(VAR_12, VAR_13, 4);

    VAR_34[0] = FUNC_17(VAR_12, VAR_13, 6);
    VAR_34[1] = FUNC_17(VAR_12, VAR_13, 8);
    VAR_34[2] = FUNC_17(VAR_12, VAR_13, 10);


    if (VAR_10->wlanMode == VAR_5)
    {
        VAR_37 = VAR_10->ap.bcHalKeyIdx[VAR_14];
        VAR_32 = FUNC_0(VAR_12, VAR_33);
        if (VAR_32 != 0xffff)
        {
            switch (VAR_10->ap.staTable[VAR_32].encryMode)
            {
            case 133:
            case 131:



                VAR_37 = VAR_10->ap.staTable[VAR_32].keyIdx;
                break;
            }
        }
    }
    else
    {
        switch (VAR_10->sta.encryMode)
        {
        case 128:
        case 130:
        case 129:
            VAR_37 = VAR_10->sta.keyId;
            break;
        case 133:
        case 131:
            if ((VAR_33[0]& 0x1))
                VAR_37 = 5;
            else
                VAR_37 = 4;
            break;





        }
    }


    VAR_20 = FUNC_4(VAR_12, VAR_13, VAR_25, &VAR_26);


    VAR_27 = VAR_10->fragThreshold;
    VAR_28 = FUNC_8(VAR_12, VAR_13);
    VAR_28 -= VAR_20;
    if ( VAR_28 > VAR_27 )
    {
        VAR_24 = FUNC_5(VAR_12, VAR_13, VAR_25, VAR_26, VAR_23);
    }
    else
    {

        VAR_24 = 0;
    }



    if (VAR_10->wlanMode == VAR_5)
    {
        FUNC_1(VAR_12, VAR_33, &VAR_36);
        if (VAR_36 == 0)
        {
            VAR_35 = 0;
        }
    }
    else if (VAR_10->wlanMode == VAR_7)
    {
        if (VAR_10->sta.wmeConnected == 0)
        {
            VAR_35 = 0;
        }
    }
    else
    {

        VAR_35 = 0;
    }


    FUNC_14(VAR_12);
    VAR_30.seq[0] = ((VAR_10->seq[VAR_11[VAR_35&0x7]]++) << 4);
    if (VAR_17 && (VAR_0 == VAR_17->ampduIndication) ) {
        VAR_18->bar_ssn = VAR_30.seq[0];

        FUNC_11(VAR_3, "start seq=", VAR_18->bar_ssn >> 4);
    }

    FUNC_16(VAR_12);


        VAR_30.buf[0] = VAR_13;
        VAR_30.bufType[0] = VAR_15;
        VAR_30.flag[0] = VAR_16;
        VAR_29 = 1;

    for (VAR_31=0; VAR_31<VAR_29; VAR_31++)
    {

        if (VAR_35 !=0 ) FUNC_10("up not 0, up=",VAR_35);
        VAR_22 = FUNC_3(VAR_12, VAR_30.buf[VAR_31], VAR_21, VAR_30.seq[VAR_31],
                                      VAR_30.flag[VAR_31], VAR_26+VAR_24, VAR_20,
                                      VAR_14, VAR_33, VAR_34, VAR_35, &VAR_24, VAR_25, VAR_26,
                                      VAR_17);
        VAR_27 = FUNC_8(VAR_12, VAR_30.buf[VAR_31]);
        if ((VAR_33[0]&0x1) == 0)
        {
            VAR_10->commTally.txUnicastFrm++;
            VAR_10->commTally.txUnicastOctets += (VAR_27+VAR_26);
        }
        else if ((VAR_33[0]& 0x1))
        {
            VAR_10->commTally.txBroadcastFrm++;
            VAR_10->commTally.txBroadcastOctets += (VAR_27+VAR_26);
        }
        else
        {
            VAR_10->commTally.txMulticastFrm++;
            VAR_10->commTally.txMulticastOctets += (VAR_27+VAR_26);
        }
        VAR_10->ledStruct.txTraffic++;
        if ((VAR_19 = FUNC_2(VAR_12, VAR_21, VAR_22, VAR_25, VAR_26,
                             VAR_23, VAR_24, VAR_30.buf[VAR_31], VAR_20,
                             VAR_30.bufType[VAR_31], VAR_11[VAR_35&0x7], VAR_37)) != VAR_8)
        {
            goto zlError;
        }


        continue;

zlError:
        if (VAR_30.bufType[VAR_31] == VAR_1)
        {
            FUNC_7(VAR_12, VAR_30.buf[VAR_31], VAR_19);
        }
        else if (VAR_30.bufType[VAR_31] == VAR_2)
        {
            FUNC_7(VAR_12, VAR_30.buf[VAR_31], 0);
        }
        else
        {
            FUNC_9(0);
        }
    }

    return VAR_8;
}
