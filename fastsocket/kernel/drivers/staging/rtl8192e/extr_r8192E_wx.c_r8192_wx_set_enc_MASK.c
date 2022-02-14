
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int flags; } ;
union iwreq_data {TYPE_1__ encoding; } ;
typedef char u8 ;
typedef char u32 ;
struct r8192_priv {int wx_sem; struct ieee80211_device* ieee80211; int up; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {char tx_keyidx; void* pairwise_key_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,char*) ;
 char* VAR_5 ;
 int FUNC_2 (int *) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct net_device*,char) ;
 int FUNC_7 (struct net_device*,int,char,void*,char*,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,int,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       union iwreq_data *VAR_8, char *VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_3(VAR_6);
 int VAR_11;

 struct ieee80211_device *VAR_12 = VAR_10->ieee80211;

 u32 VAR_13[4]={0,0,0,0};
 u8 VAR_14=0xff;
 u32 VAR_15=0;
 u8 VAR_16[4][6] ={ {0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x02},
    {0x00,0x00,0x00,0x00,0x00,0x03} };
 int VAR_17;

       if(!VAR_10->up) return -VAR_1;

 FUNC_2(&VAR_10->wx_sem);

 FUNC_1(VAR_0, "Setting SW wep key");
 VAR_11 = FUNC_4(VAR_10->ieee80211,VAR_7,VAR_8,VAR_9);

 FUNC_8(&VAR_10->wx_sem);



 if(VAR_8->encoding.length!=0){

  for(VAR_17=0 ; VAR_17<4 ; VAR_17++){
   VAR_13[VAR_17] |= VAR_9[4*VAR_17+0]&VAR_14;
   if(VAR_17==1&&(4*VAR_17+1)==VAR_8->encoding.length) VAR_14=0x00;
   if(VAR_17==3&&(4*VAR_17+1)==VAR_8->encoding.length) VAR_14=0x00;
   VAR_13[VAR_17] |= (VAR_9[4*VAR_17+1]&VAR_14)<<8;
   VAR_13[VAR_17] |= (VAR_9[4*VAR_17+2]&VAR_14)<<16;
   VAR_13[VAR_17] |= (VAR_9[4*VAR_17+3]&VAR_14)<<24;
  }




  switch(VAR_8->encoding.flags & VAR_2){
   case 0: VAR_15 = VAR_12->tx_keyidx; break;
   case 1: VAR_15 = 0; break;
   case 2: VAR_15 = 1; break;
   case 3: VAR_15 = 2; break;
   case 4: VAR_15 = 3; break;
   default: break;
  }


  if(VAR_8->encoding.length==0x5){
  VAR_12->pairwise_key_type = VAR_4;
   FUNC_0(VAR_6);
   FUNC_7( VAR_6,
    VAR_15,
    VAR_15,
    VAR_4,
    VAR_16[VAR_15],
    0,
    VAR_13);
  }

  else if(VAR_8->encoding.length==0xd){
   VAR_12->pairwise_key_type = VAR_3;
    FUNC_0(VAR_6);
   FUNC_7( VAR_6,
    VAR_15,
    VAR_15,
    VAR_3,
    VAR_16[VAR_15],
    0,
    VAR_13);
  }
  else FUNC_5("wrong type in WEP, not WEP40 and WEP104\n");


 }
 return VAR_11;
}
