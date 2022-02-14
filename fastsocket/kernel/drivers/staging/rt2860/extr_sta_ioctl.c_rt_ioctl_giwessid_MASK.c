
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct TYPE_7__ {int SsidLen; int Ssid; } ;
struct TYPE_6__ {scalar_t__ WpaSupplicantUP; } ;
struct TYPE_8__ {TYPE_2__ CommonCfg; TYPE_1__ StaCfg; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    struct iw_point *VAR_5, char *VAR_6)
{
 PRTMP_ADAPTER VAR_7 = VAR_3->ml_priv;

 VAR_5->flags = 1;
    if (FUNC_1(VAR_7))
    {
        VAR_5->length = 0;
        return 0;
    }

 if (FUNC_2(VAR_7, VAR_2))
 {
  FUNC_0(VAR_0 ,("MediaState is connected\n"));
  VAR_5->length = VAR_7->CommonCfg.SsidLen;
  FUNC_3(VAR_6, VAR_7->CommonCfg.Ssid, VAR_7->CommonCfg.SsidLen);
 }
 else
 {
  VAR_5->length = 0;
  FUNC_0(VAR_0 ,("MediaState is not connected, ess\n"));
 }

 return 0;

}
