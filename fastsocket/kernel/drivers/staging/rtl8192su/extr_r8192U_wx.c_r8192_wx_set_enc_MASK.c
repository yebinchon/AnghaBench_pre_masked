
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
 int FUNC_2 (int *) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct net_device*,char,char,void*,char*,int ,char*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_3(VAR_5);
 struct ieee80211_device *VAR_10 = VAR_9->ieee80211;
 int VAR_11;


 u32 VAR_12[4]={0,0,0,0};
 u8 VAR_13=0xff;
 u32 VAR_14=0;

 u8 VAR_15[4][6] ={ {0x00,0x00,0x00,0x00,0x00,0x00},
    {0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x02},
    {0x00,0x00,0x00,0x00,0x00,0x03} };
 int VAR_16;

       if(!VAR_9->up) return -VAR_1;

 FUNC_2(&VAR_9->wx_sem);

 FUNC_1(VAR_0, "Setting SW wep key");
 VAR_11 = FUNC_4(VAR_9->ieee80211,VAR_6,VAR_7,VAR_8);

 FUNC_7(&VAR_9->wx_sem);




 if(VAR_7->encoding.length!=0){

  for(VAR_16=0 ; VAR_16<4 ; VAR_16++){
   VAR_12[VAR_16] |= VAR_8[4*VAR_16+0]&VAR_13;
   if(VAR_16==1&&(4*VAR_16+1)==VAR_7->encoding.length) VAR_13=0x00;
   if(VAR_16==3&&(4*VAR_16+1)==VAR_7->encoding.length) VAR_13=0x00;
   VAR_12[VAR_16] |= (VAR_8[4*VAR_16+1]&VAR_13)<<8;
   VAR_12[VAR_16] |= (VAR_8[4*VAR_16+2]&VAR_13)<<16;
   VAR_12[VAR_16] |= (VAR_8[4*VAR_16+3]&VAR_13)<<24;
  }




  switch(VAR_7->encoding.flags & VAR_2){
   case 0: VAR_14 = VAR_10->tx_keyidx; break;
   case 1: VAR_14 = 0; break;
   case 2: VAR_14 = 1; break;
   case 3: VAR_14 = 2; break;
   case 4: VAR_14 = 3; break;
   default: break;
  }

  if(VAR_7->encoding.length==0x5){
    VAR_10->pairwise_key_type = VAR_4;
   FUNC_0(VAR_5);

   FUNC_6( VAR_5,
    VAR_14,
    VAR_14,
    VAR_4,
    VAR_15[VAR_14],
    0,
    VAR_12);

  }

  else if(VAR_7->encoding.length==0xd){
    VAR_10->pairwise_key_type = VAR_3;
    FUNC_0(VAR_5);

   FUNC_6( VAR_5,
    VAR_14,
    VAR_14,
    VAR_3,
    VAR_15[VAR_14],
    0,
    VAR_12);

  }
  else FUNC_5("wrong type in WEP, not WEP40 and WEP104\n");

 }

 return VAR_11;
}
