
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct TYPE_6__ {int SsidLen; int Ssid; } ;
struct TYPE_7__ {TYPE_1__ CommonCfg; } ;
typedef TYPE_2__* PRTMP_ADAPTER ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ) ;

int FUNC_5(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    struct iw_point *VAR_5, char *VAR_6)
{
 PRTMP_ADAPTER VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 == ((void*)0))
 {


  return -VAR_0;
 }

 VAR_5->flags = 1;
    if (FUNC_1(VAR_7))
    {
        VAR_5->length = 0;
        return 0;
    }

 if (FUNC_2(VAR_7, VAR_2))
 {
  FUNC_0(VAR_1 ,("MediaState is connected\n"));
  VAR_5->length = VAR_7->CommonCfg.SsidLen;
  FUNC_4(VAR_6, VAR_7->CommonCfg.Ssid, VAR_7->CommonCfg.SsidLen);
 }
 else
 {
  VAR_5->length = 0;
  FUNC_0(VAR_1 ,("MediaState is not connected, ess\n"));
 }

 return 0;

}
