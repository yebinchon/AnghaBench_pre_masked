
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int flags; scalar_t__ length; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int u32 ;
struct r8180_priv {int* key0; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ bHwRadioOff; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3, char *VAR_4)
{
 struct r8180_priv *VAR_5 = FUNC_1(VAR_1);
 struct iw_point *VAR_6 = &(VAR_3->encoding);

 if(VAR_5->ieee80211->bHwRadioOff)
  return 0;

 if (VAR_6->flags & VAR_0) {
 }






 if (VAR_6->length > 0) {



  u32* VAR_7= (u32*) VAR_4;
  VAR_5->key0[0] = VAR_7[0];
  VAR_5->key0[1] = VAR_7[1];
  VAR_5->key0[2] = VAR_7[2];
  VAR_5->key0[3] = VAR_7[3] &0xff;
  FUNC_0("Setting wep key to %x %x %x %x",
        VAR_7[0],VAR_7[1],VAR_7[2],VAR_7[3]);
  FUNC_2(VAR_1);
 }
 return 0;
}
