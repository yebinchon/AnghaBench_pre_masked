
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr {int sa_data; void* sa_family; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_10__ {int Bssid; } ;
struct TYPE_9__ {scalar_t__ WpaSupplicantUP; } ;
struct TYPE_8__ {int Bssid; } ;
struct TYPE_11__ {TYPE_3__ MlmeAux; TYPE_2__ StaCfg; TYPE_1__ CommonCfg; } ;
typedef TYPE_4__* PRTMP_ADAPTER ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 void* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int *,int ) ;

int FUNC_5(struct net_device *VAR_6,
        struct iw_request_info *VAR_7,
        struct sockaddr *VAR_8, char *VAR_9)
{
 PRTMP_ADAPTER VAR_10 = FUNC_3(VAR_6);

 if (VAR_10 == ((void*)0))
 {


  return -VAR_1;
 }

 if (FUNC_2(VAR_10) || FUNC_0(VAR_10))
 {
  VAR_8->sa_family = VAR_0;
  FUNC_4(VAR_8->sa_data, &VAR_10->CommonCfg.Bssid, VAR_3);
 }
 else
 {
  FUNC_1(VAR_4, ("IOCTL::SIOCGIWAP(=EMPTY)\n"));
  return -VAR_2;
 }

 return 0;
}
