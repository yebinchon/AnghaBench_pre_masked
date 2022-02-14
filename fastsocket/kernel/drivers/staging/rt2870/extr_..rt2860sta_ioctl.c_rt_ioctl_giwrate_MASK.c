
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_24__ {int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_9__ bitrate; } ;
struct net_device {TYPE_10__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int ralinkrate ;
typedef int __s32 ;
typedef int UCHAR ;
struct TYPE_23__ {scalar_t__ MODE; scalar_t__ MCS; scalar_t__ ShortGI; scalar_t__ BW; } ;
struct TYPE_22__ {TYPE_6__* Content; } ;
struct TYPE_17__ {scalar_t__ MODE; } ;
struct TYPE_20__ {int word; TYPE_2__ field; } ;
struct TYPE_21__ {TYPE_5__ HTPhyMode; } ;
struct TYPE_18__ {int word; } ;
struct TYPE_19__ {scalar_t__ bAutoTxRateSwitch; TYPE_3__ HTPhyMode; } ;
struct TYPE_16__ {scalar_t__ PhyMode; } ;
struct TYPE_15__ {TYPE_8__ field; int word; } ;
struct TYPE_14__ {TYPE_7__ MacTab; TYPE_4__ StaCfg; TYPE_1__ CommonCfg; } ;
typedef TYPE_10__* PRTMP_ADAPTER ;
typedef TYPE_11__ HTTRANSMIT_SETTING ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_10__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_3(struct net_device *VAR_9,
          struct iw_request_info *VAR_10,
          union iwreq_data *VAR_11, char *VAR_12)
{
    PRTMP_ADAPTER VAR_13 = VAR_9->ml_priv;
    int VAR_14 = 0, VAR_15 = 0;
    HTTRANSMIT_SETTING VAR_16;
    __s32 VAR_17[] =
 {2, 4, 11, 22,
 12, 18, 24, 36, 48, 72, 96, 108,
 13, 26, 39, 52, 78, 104, 117, 130, 26, 52, 78, 104, 156, 208, 234, 260,
 39, 78, 117, 156, 234, 312, 351, 390,
 27, 54, 81, 108, 162, 216, 243, 270, 54, 108, 162, 216, 324, 432, 486, 540,
 81, 162, 243, 324, 486, 648, 729, 810,
 14, 29, 43, 57, 87, 115, 130, 144, 29, 59, 87, 115, 173, 230, 260, 288,
 43, 87, 130, 173, 260, 317, 390, 433,
 30, 60, 90, 120, 180, 240, 270, 300, 60, 120, 180, 240, 360, 480, 540, 600,
 90, 180, 270, 360, 540, 720, 810, 900};

    VAR_15 = sizeof(VAR_17)/sizeof(__s32);

 if(!FUNC_2(VAR_13, VAR_8))
 {
    FUNC_0(VAR_7, ("INFO::Network is down!\n"));
     return -VAR_1;
 }

    if ((VAR_13->StaCfg.bAutoTxRateSwitch == VAR_2) &&
        (FUNC_1(VAR_13)) &&
        ((VAR_13->CommonCfg.PhyMode <= VAR_6) || (VAR_13->MacTab.Content[VAR_0].HTPhyMode.field.MODE <= VAR_5)))
        VAR_16.word = VAR_13->StaCfg.HTPhyMode.word;
    else
        VAR_16.word = VAR_13->MacTab.Content[VAR_0].HTPhyMode.word;

    if (VAR_16.field.MODE >= VAR_4)
    {
     VAR_14 = 12 + ((UCHAR)VAR_16.field.BW *24) + ((UCHAR)VAR_16.field.ShortGI *48) + ((UCHAR)VAR_16.field.MCS);
    }
    else
    if (VAR_16.field.MODE == VAR_5)
     VAR_14 = (UCHAR)(VAR_16.field.MCS) + 4;
    else if (VAR_16.field.MODE == VAR_3)
     VAR_14 = (UCHAR)(VAR_16.field.MCS);

    if (VAR_14 < 0)
        VAR_14 = 0;

    if (VAR_14 > VAR_15)
        VAR_14 = VAR_15;

    VAR_11->bitrate.value = VAR_17[VAR_14] * 500000;
    VAR_11->bitrate.disabled = 0;

    return 0;
}
