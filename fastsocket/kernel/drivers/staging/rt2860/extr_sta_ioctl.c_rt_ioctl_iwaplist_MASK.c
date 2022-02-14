
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {char* sa_data; int sa_family; } ;
struct net_device {TYPE_3__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {char* sa_data; int sa_family; } ;
struct iw_point {int length; int flags; } ;
typedef int qual ;
typedef int addr ;
struct TYPE_7__ {int BssNr; TYPE_1__* BssEntry; } ;
struct TYPE_8__ {TYPE_2__ ScanTab; } ;
struct TYPE_6__ {int Rssi; struct sockaddr* Bssid; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,struct sockaddr**,int) ;
 int FUNC_3 (TYPE_3__*,struct sockaddr*,int ) ;

int FUNC_4(struct net_device *VAR_5,
   struct iw_request_info *VAR_6,
   struct iw_point *VAR_7, char *VAR_8)
{
  PRTMP_ADAPTER VAR_9 = VAR_5->ml_priv;

 struct sockaddr VAR_10[VAR_1];
 struct iw_quality VAR_11[VAR_1];
 int VAR_12;


    if(!FUNC_1(VAR_9, VAR_4))
    {
        FUNC_0(VAR_3, ("INFO::Network is down!\n"));
  VAR_7->length = 0;
  return 0;

 }

 for (VAR_12 = 0; VAR_12 <VAR_1 ; VAR_12++)
 {
  if (VAR_12 >= VAR_9->ScanTab.BssNr)
   break;
  VAR_10[VAR_12].sa_family = VAR_0;
   FUNC_2(VAR_10[VAR_12].sa_data, &VAR_9->ScanTab.BssEntry[VAR_12].Bssid, VAR_2);
  FUNC_3(VAR_9, &VAR_11[VAR_12], VAR_9->ScanTab.BssEntry[VAR_12].Rssi);
 }
 VAR_7->length = VAR_12;
 FUNC_2(VAR_8, &VAR_10, VAR_12*sizeof(VAR_10[0]));
 VAR_7->flags = 1;
 FUNC_2(VAR_8 + VAR_12*sizeof(VAR_10[0]), &VAR_11, VAR_12*sizeof(VAR_11[VAR_12]));

 return 0;
}
