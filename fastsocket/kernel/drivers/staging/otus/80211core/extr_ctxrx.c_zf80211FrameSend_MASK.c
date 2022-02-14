
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
struct TYPE_5__ {int txTraffic; } ;
struct TYPE_4__ {int txMulticastOctets; int txMulticastFrm; int txBroadcastOctets; int txBroadcastFrm; int txUnicastOctets; int txUnicastFrm; } ;
struct TYPE_6__ {TYPE_2__ ledStruct; TYPE_1__ commTally; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int*,int,int*,int,int*,int,int *,int,int,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_4, zbuf_t* VAR_5, u16_t* VAR_6, u16_t VAR_7,
                           u16_t* VAR_8, u16_t* VAR_9, u8_t VAR_10, u16_t VAR_11, u16_t* VAR_12,
                           u16_t* VAR_13, u16_t VAR_14, u16_t VAR_15, u16_t VAR_16,
                           u8_t VAR_17, u8_t VAR_18)
{
    u16_t VAR_19;
    u16_t VAR_20;

    FUNC_4(VAR_4);

    VAR_20 = FUNC_2(VAR_4, VAR_5);
    if ((VAR_8[0]&0x1) == 0)
    {
        VAR_3->commTally.txUnicastFrm++;
        VAR_3->commTally.txUnicastOctets += (VAR_20+VAR_7);
    }
    else if (VAR_8[0] == 0xffff)
    {
        VAR_3->commTally.txBroadcastFrm++;
        VAR_3->commTally.txBroadcastOctets += (VAR_20+VAR_7);
    }
    else
    {
        VAR_3->commTally.txMulticastFrm++;
        VAR_3->commTally.txMulticastOctets += (VAR_20+VAR_7);
    }
    VAR_3->ledStruct.txTraffic++;

    if ((VAR_19 = FUNC_0(VAR_4, VAR_6, VAR_11, VAR_12, VAR_7,
                        VAR_13, VAR_14, VAR_5, VAR_15,
                        VAR_16, VAR_17, VAR_18)) != VAR_2)
    {
        if (VAR_16 == VAR_0)
        {
            FUNC_1(VAR_4, VAR_5, VAR_19);
        }
        else if (VAR_16 == VAR_1)
        {
            FUNC_1(VAR_4, VAR_5, 0);
        }
        else
        {
            FUNC_3(0);
        }
    }
}
