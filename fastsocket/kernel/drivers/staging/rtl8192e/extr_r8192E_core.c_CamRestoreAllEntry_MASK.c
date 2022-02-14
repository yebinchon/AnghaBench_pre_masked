
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {TYPE_2__* ieee80211; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct TYPE_3__ {int* bssid; } ;
struct TYPE_4__ {scalar_t__ pairwise_key_type; scalar_t__ iw_mode; scalar_t__ group_key_type; TYPE_1__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,scalar_t__,int*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 u8 VAR_7 = 0;
 struct r8192_priv *VAR_8 = FUNC_1(VAR_6);
 u8* VAR_9 = VAR_8->ieee80211->current_network.bssid;

 static u8 VAR_10[4][6] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x01},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x02},
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x03}};
 static u8 VAR_11[] =
  {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

 FUNC_0(VAR_0, "CamRestoreAllEntry: \n");


 if ((VAR_8->ieee80211->pairwise_key_type == VAR_5)||
     (VAR_8->ieee80211->pairwise_key_type == VAR_4))
 {

  for(VAR_7=0; VAR_7<4; VAR_7++)
  {
   {
    VAR_9 = VAR_10[VAR_7];
    FUNC_2(VAR_6,
      VAR_7 ,
      VAR_7,
      VAR_8->ieee80211->pairwise_key_type,
      VAR_9,
      0,
      ((void*)0));
   }
  }

 }
 else if(VAR_8->ieee80211->pairwise_key_type == VAR_3)
 {

  {
   if(VAR_8->ieee80211->iw_mode == VAR_1)
    FUNC_2(VAR_6,
      4,
      0,
      VAR_8->ieee80211->pairwise_key_type,
      (u8*)VAR_6->dev_addr,
      0,
      ((void*)0));
   else
    FUNC_2(VAR_6,
      4,
      0,
      VAR_8->ieee80211->pairwise_key_type,
      VAR_9,
      0,
      ((void*)0));
  }
 }
 else if(VAR_8->ieee80211->pairwise_key_type == VAR_2)
 {

  {
   if(VAR_8->ieee80211->iw_mode == VAR_1)
    FUNC_2(VAR_6,
      4,
      0,
      VAR_8->ieee80211->pairwise_key_type,
      (u8*)VAR_6->dev_addr,
      0,
      ((void*)0));
   else
    FUNC_2(VAR_6,
      4,
      0,
      VAR_8->ieee80211->pairwise_key_type,
      VAR_9,
      0,
      ((void*)0));
  }
 }



 if(VAR_8->ieee80211->group_key_type == VAR_3)
 {
  VAR_9 = VAR_11;
  for(VAR_7=1 ; VAR_7<4 ; VAR_7++)
  {
   {
    FUNC_2(VAR_6,
      VAR_7,
      VAR_7,
      VAR_8->ieee80211->group_key_type,
      VAR_9,
      0,
      ((void*)0));
   }
  }
  if(VAR_8->ieee80211->iw_mode == VAR_1)
    FUNC_2(VAR_6,
      0,
      0,
      VAR_8->ieee80211->group_key_type,
      VAR_10[0],
      0,
      ((void*)0));
 }
 else if(VAR_8->ieee80211->group_key_type == VAR_2)
 {
  VAR_9 = VAR_11;
  for(VAR_7=1; VAR_7<4 ; VAR_7++)
  {
   {
    FUNC_2(VAR_6,
      VAR_7 ,
      VAR_7,
      VAR_8->ieee80211->group_key_type,
      VAR_9,
      0,
      ((void*)0));
   }
  }

  if(VAR_8->ieee80211->iw_mode == VAR_1)
    FUNC_2(VAR_6,
      0 ,
      0,
      VAR_8->ieee80211->group_key_type,
      VAR_10[0],
      0,
      ((void*)0));
 }
}
