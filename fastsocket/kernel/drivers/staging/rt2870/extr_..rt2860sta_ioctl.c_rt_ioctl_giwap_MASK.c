
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int sa_data; void* sa_family; } ;
struct net_device {TYPE_4__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_9__ {int Bssid; } ;
struct TYPE_8__ {scalar_t__ WpaSupplicantUP; } ;
struct TYPE_7__ {int Bssid; } ;
struct TYPE_10__ {TYPE_3__ MlmeAux; TYPE_2__ StaCfg; TYPE_1__ CommonCfg; } ;
typedef TYPE_4__* PRTMP_ADAPTER ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 void* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int *,int ) ;

int FUNC_4(struct net_device *VAR_5,
        struct iw_request_info *VAR_6,
        struct sockaddr *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = VAR_5->ml_priv;

 if (FUNC_2(VAR_9) || FUNC_0(VAR_9))
 {
  VAR_7->sa_family = VAR_0;
  FUNC_3(VAR_7->sa_data, &VAR_9->CommonCfg.Bssid, VAR_2);
 }

    else if (VAR_9->StaCfg.WpaSupplicantUP != VAR_4)
    {
        VAR_7->sa_family = VAR_0;
        FUNC_3(VAR_7->sa_data, &VAR_9->MlmeAux.Bssid, VAR_2);
    }
 else
 {
  FUNC_1(VAR_3, ("IOCTL::SIOCGIWAP(=EMPTY)\n"));
  return -VAR_1;
 }

 return 0;
}
