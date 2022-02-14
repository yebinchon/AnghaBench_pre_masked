
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {short crcmon; int wx_sem; scalar_t__ up; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 struct r8180_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0,
          struct iw_request_info *VAR_1,
          union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8180_priv *VAR_4 = FUNC_2(VAR_0);
 int *VAR_5 = (int *)VAR_3;
 int VAR_6 = (VAR_5[0] > 0);
 short VAR_7 = VAR_4->crcmon;


 if(VAR_4->ieee80211->bHwRadioOff)
  return 0;

 FUNC_1(&VAR_4->wx_sem);

 if(VAR_6)
  VAR_4->crcmon=1;
 else
  VAR_4->crcmon=0;

 FUNC_0("bad CRC in monitor mode are %s",
       VAR_4->crcmon ? "accepted" : "rejected");

 if(VAR_7 != VAR_4->crcmon && VAR_4->up){
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
 }

 FUNC_5(&VAR_4->wx_sem);

 return 0;
}
