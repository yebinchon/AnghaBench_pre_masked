
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {char* sa_data; int sa_family; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_quality {char* sa_data; int sa_family; } ;
struct iw_point {int length; int flags; } ;
typedef int qual ;
typedef int addr ;
struct TYPE_8__ {int BssNr; TYPE_1__* BssEntry; } ;
struct TYPE_9__ {TYPE_2__ ScanTab; } ;
struct TYPE_7__ {int Rssi; struct sockaddr* Bssid; } ;
typedef TYPE_3__* PRTMP_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,struct sockaddr**,int) ;
 int FUNC_4 (TYPE_3__*,struct sockaddr*,int ) ;

int FUNC_5(struct net_device *VAR_5,
   struct iw_request_info *VAR_6,
   struct iw_point *VAR_7, char *VAR_8)
{
 PRTMP_ADAPTER VAR_9 = FUNC_1(VAR_5);

 struct sockaddr VAR_10[VAR_1];
 struct iw_quality VAR_11[VAR_1];
 int VAR_12;


    if(!FUNC_2(VAR_9, VAR_4))
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
   FUNC_3(VAR_10[VAR_12].sa_data, &VAR_9->ScanTab.BssEntry[VAR_12].Bssid, VAR_2);
  FUNC_4(VAR_9, &VAR_11[VAR_12], VAR_9->ScanTab.BssEntry[VAR_12].Rssi);
 }
 VAR_7->length = VAR_12;
 FUNC_3(VAR_8, &VAR_10, VAR_12*sizeof(VAR_10[0]));
 VAR_7->flags = 1;
 FUNC_3(VAR_8 + VAR_12*sizeof(VAR_10[0]), &VAR_11, VAR_12*sizeof(VAR_11[VAR_12]));

 return 0;
}
