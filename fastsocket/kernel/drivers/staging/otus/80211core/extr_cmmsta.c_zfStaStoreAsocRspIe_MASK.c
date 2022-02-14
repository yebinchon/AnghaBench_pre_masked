
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
typedef size_t u32_t ;
typedef int u16_t ;
struct TYPE_7__ {int ChannelInfo; } ;
struct TYPE_6__ {int HtCapInfo; } ;
struct TYPE_8__ {TYPE_2__ HtInfo; TYPE_1__ HtCap; } ;
struct TYPE_9__ {size_t asocRspFrameBodySize; int currentFrequency; int EnableHT; TYPE_3__ ie; void** asocRspFrameBody; } ;
struct TYPE_10__ {int supportMode; int BandWidth40; int ExtOffset; TYPE_4__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *,int *,int) ;

void FUNC_5(zdev_t* VAR_10, zbuf_t* VAR_11)
{
    u16_t VAR_12;
    u32_t VAR_13;
    u16_t VAR_14;
    u8_t *VAR_15;
    u8_t VAR_16 = 0;
    u8_t VAR_17 = 0;

    FUNC_3(VAR_10);

    for (VAR_13=0; VAR_13<VAR_9->sta.asocRspFrameBodySize; VAR_13++)
    {
        VAR_9->sta.asocRspFrameBody[VAR_13] = FUNC_4(VAR_10, VAR_11, VAR_13+24);
    }


    if ( ((VAR_9->sta.currentFrequency > 3000) && !(VAR_9->supportMode & VAR_4))
         || ((VAR_9->sta.currentFrequency < 3000) && !(VAR_9->supportMode & VAR_3)) )
    {

        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtCap;
        for (VAR_13=0; VAR_13<28; VAR_13++)
        {
            VAR_15[VAR_13] = 0;
        }
        VAR_9->BandWidth40 = 0;
        VAR_9->ExtOffset = 0;
        return;
    }

    if ((VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_6)) != 0xffff)
    {

        FUNC_1("atheros pre n");
        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtCap;
        VAR_15[0] = FUNC_4(VAR_10, VAR_11, VAR_12);
        VAR_15[1] = 26;
        for (VAR_13=1; VAR_13<=26; VAR_13++)
        {
            VAR_15[VAR_13+1] = FUNC_4(VAR_10, VAR_11, VAR_12 + VAR_13);
            FUNC_2(VAR_2, "ASOC:  HT Capabilities, htcap=", VAR_15[VAR_13+1]);
        }
    }
    else if ((VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_7)) != 0xffff)
    {

        FUNC_1("pre n 2.0 standard");
        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtCap;
        for (VAR_13=0; VAR_13<28; VAR_13++)
        {
            VAR_15[VAR_13] = FUNC_4(VAR_10, VAR_11, VAR_12 + VAR_13);
            FUNC_2(VAR_2, "ASOC:  HT Capabilities, htcap=", VAR_15[VAR_13]);
        }
    }
    else
    {

        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtCap;
        for (VAR_13=0; VAR_13<28; VAR_13++)
        {
            VAR_15[VAR_13] = 0;
        }
        VAR_9->BandWidth40 = 0;
        VAR_9->ExtOffset = 0;
        return;
    }

    VAR_16 = (u8_t)((VAR_9->sta.ie.HtCap.HtCapInfo & VAR_1) >> 1);


    if ((VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_5)) != 0xffff)
    {

        FUNC_1("atheros pre n HTINFO");
        VAR_14 = 22;
        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtInfo;
        VAR_15[0] = FUNC_4(VAR_10, VAR_11, VAR_12);
        VAR_15[1] = 22;
        for (VAR_13=1; VAR_13<=22; VAR_13++)
        {
            VAR_15[VAR_13+1] = FUNC_4(VAR_10, VAR_11, VAR_12 + VAR_13);
            FUNC_2(VAR_2, "ASOC:  HT Info, htinfo=", VAR_15[VAR_13+1]);
        }
    }
    else if ((VAR_12 = FUNC_0(VAR_10, VAR_11, VAR_8)) != 0xffff)
    {

        FUNC_1("pre n 2.0 standard HTINFO");
        VAR_14 = FUNC_4(VAR_10, VAR_11, VAR_12 + 1);
        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtInfo;
        for (VAR_13=0; VAR_13<24; VAR_13++)
        {
            VAR_15[VAR_13] = FUNC_4(VAR_10, VAR_11, VAR_12 + VAR_13);
            FUNC_2(VAR_2, "ASOC:  HT Info, htinfo=", VAR_15[VAR_13]);
        }
    }
    else
    {
        FUNC_1("no HTINFO");
        VAR_15 = (u8_t *)&VAR_9->sta.ie.HtInfo;
        for (VAR_13=0; VAR_13<24; VAR_13++)
        {
            VAR_15[VAR_13] = 0;
        }
    }
    VAR_17 = VAR_9->sta.ie.HtInfo.ChannelInfo & VAR_0;

    if ((VAR_9->sta.EnableHT == 1) && (VAR_16 == 1) && ((VAR_17 == 1) || (VAR_17 == 3)))
    {
        VAR_9->BandWidth40 = VAR_16;
        VAR_9->ExtOffset = VAR_17;
    }
    else
    {
        VAR_9->BandWidth40 = 0;
        VAR_9->ExtOffset = 0;
    }

    return;
}
