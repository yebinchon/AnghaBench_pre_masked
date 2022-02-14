
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
typedef scalar_t__ u16_t ;
struct aggTally {int got_packets_sum; } ;
struct TYPE_5__ {int * txQosDropCount; } ;
struct TYPE_4__ {scalar_t__ EnableHT; } ;
struct TYPE_6__ {int (* zfcbClassifyTxPacket ) (int *,int *) ;scalar_t__ enableAggregation; scalar_t__ wlanMode; int* vtxqHead; int* vtxqTail; int* qosDropIpFrag; TYPE_2__ commTally; int *** vtxq; TYPE_1__ sta; struct aggTally agg_tal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* VAR_9 ;
 int* VAR_10 ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 int FUNC_2 (int *,int *,int*,scalar_t__*) ;
 int FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

u16_t FUNC_9(zdev_t* VAR_11, zbuf_t* VAR_12)
{
    u8_t VAR_13;
    u8_t VAR_14;
    u16_t VAR_15;
    FUNC_7(VAR_11);

    FUNC_5();

    FUNC_2(VAR_11, VAR_12, &VAR_14, &VAR_15);

    if ( VAR_9->zfcbClassifyTxPacket != ((void*)0) )
    {
        VAR_13 = VAR_9->zfcbClassifyTxPacket(VAR_11, VAR_12);
    }
    else
    {
        VAR_13 = VAR_10[VAR_14&0x7] & 0x3;
    }
    if ((VAR_15 & 0xff3f) == 0x0020)
    {


        FUNC_6(VAR_11);
        if (((VAR_9->vtxqHead[VAR_13] - VAR_9->vtxqTail[VAR_13])& VAR_8)
                > (VAR_7-20))
        {
            VAR_9->qosDropIpFrag[VAR_13] = 1;
        }
        else
        {
            VAR_9->qosDropIpFrag[VAR_13] = 0;
        }
        FUNC_8(VAR_11);

        if (VAR_9->qosDropIpFrag[VAR_13] == 1)
        {

            VAR_9->commTally.txQosDropCount[VAR_13]++;
            FUNC_3(VAR_11, VAR_12, VAR_6);
            FUNC_4(VAR_2, "Packet discarded, first ip frag, ac=", VAR_13);

            return VAR_0;
        }
    }
    else if ((VAR_15 & 0xff3f) == 0)
    {
        VAR_9->qosDropIpFrag[VAR_13] = 0;
    }

    if (((VAR_15 &= 0xff1f) != 0) && (VAR_9->qosDropIpFrag[VAR_13] == 1))
    {
        VAR_9->commTally.txQosDropCount[VAR_13]++;
        FUNC_3(VAR_11, VAR_12, VAR_6);
        FUNC_4(VAR_2, "Packet discarded, ip frag, ac=", VAR_13);

        return VAR_0;
    }

    FUNC_6(VAR_11);
    if (((VAR_9->vtxqHead[VAR_13] + 1) & VAR_8) != VAR_9->vtxqTail[VAR_13])
    {
        VAR_9->vtxq[VAR_13][VAR_9->vtxqHead[VAR_13]] = VAR_12;
        VAR_9->vtxqHead[VAR_13] = ((VAR_9->vtxqHead[VAR_13] + 1) & VAR_8);
        FUNC_8(VAR_11);
        return VAR_6;
    }
    else
    {
        FUNC_8(VAR_11);

        VAR_9->commTally.txQosDropCount[VAR_13]++;
        FUNC_3(VAR_11, VAR_12, VAR_6);
        FUNC_4(VAR_2, "Packet discarded, VTXQ full, ac=", VAR_13);
        return VAR_0;
    }
}
