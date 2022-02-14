
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int value; int fixed; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
struct net_device {TYPE_10__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
typedef int UINT32 ;
struct TYPE_21__ {void* MCS; } ;
struct TYPE_22__ {TYPE_7__ field; } ;
struct TYPE_23__ {TYPE_8__ DesiredTransmitSetting; int bAutoTxRateSwitch; } ;
struct TYPE_20__ {TYPE_5__* Content; } ;
struct TYPE_17__ {scalar_t__ MODE; } ;
struct TYPE_18__ {TYPE_3__ field; } ;
struct TYPE_19__ {TYPE_4__ HTPhyMode; } ;
struct TYPE_16__ {scalar_t__ PhyMode; } ;
struct TYPE_14__ {TYPE_9__ StaCfg; TYPE_6__ MacTab; TYPE_2__ CommonCfg; } ;
typedef TYPE_10__* PRTMP_ADAPTER ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_10__*,int) ;
 int FUNC_2 (TYPE_10__*,int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_10__*) ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_4(struct net_device *VAR_10,
   struct iw_request_info *VAR_11,
   union iwreq_data *VAR_12, char *VAR_13)
{
    PRTMP_ADAPTER VAR_14 = VAR_10->ml_priv;
    UINT32 VAR_15 = VAR_12->bitrate.value, VAR_16 = VAR_12->bitrate.fixed;


 if(!FUNC_2(VAR_14, VAR_9))
 {
    FUNC_0(VAR_7, ("rt_ioctl_siwrate::Network is down!\n"));
     return -VAR_1;
 }

    FUNC_0(VAR_7, ("rt_ioctl_siwrate::(rate = %d, fixed = %d)\n", VAR_15, VAR_16));



    if (VAR_15 == -1)
    {

  VAR_14->StaCfg.DesiredTransmitSetting.field.MCS = VAR_4;
  VAR_14->StaCfg.bAutoTxRateSwitch = VAR_8;
  if ((VAR_14->CommonCfg.PhyMode <= VAR_6) ||
      (VAR_14->MacTab.Content[VAR_0].HTPhyMode.field.MODE <= VAR_5))
   FUNC_1(VAR_14, -1);

  FUNC_3(VAR_14);
    }
    else
    {
        if (VAR_16)
        {
         VAR_14->StaCfg.bAutoTxRateSwitch = VAR_3;
            if ((VAR_14->CommonCfg.PhyMode <= VAR_6) ||
                (VAR_14->MacTab.Content[VAR_0].HTPhyMode.field.MODE <= VAR_5))
                FUNC_1(VAR_14, VAR_15);
            else
            {
                VAR_14->StaCfg.DesiredTransmitSetting.field.MCS = VAR_4;
                FUNC_3(VAR_14);
            }
            FUNC_0(VAR_7, ("rt_ioctl_siwrate::(HtMcs=%d)\n",VAR_14->StaCfg.DesiredTransmitSetting.field.MCS));
        }
        else
        {

            return -VAR_2;
        }
    }

    return 0;
}
