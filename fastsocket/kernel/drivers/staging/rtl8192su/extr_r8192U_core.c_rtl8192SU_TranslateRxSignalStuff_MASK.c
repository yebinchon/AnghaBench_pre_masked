
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; scalar_t__ cb; } ;
struct rtl8192_rx_info {struct net_device* dev; } ;
struct TYPE_8__ {int numpacket_toself; int numpacket_matchbssid; } ;
struct r8192_priv {TYPE_4__ stats; TYPE_3__* ieee80211; } ;
struct net_device {int * dev_addr; } ;
struct ieee80211_rx_stats {int bICV; int bCRC; int bHwError; } ;
struct ieee80211_hdr_3addr {int * addr3; int * addr2; int * addr1; int frame_ctl; } ;
typedef int rx_drvinfo_819x_usb ;
typedef int rx_desc_819x_usb ;
typedef struct rtl8192_rx_info rtl8192_rx_info ;
struct TYPE_5__ {int * bssid; } ;
struct TYPE_7__ {TYPE_2__* dev; TYPE_1__ current_network; } ;
struct TYPE_6__ {int * dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct r8192_priv*,struct ieee80211_rx_stats*,int *,int *,struct ieee80211_rx_stats*,int,int,int,int) ;
 int FUNC_6 (struct r8192_priv*,int *,struct ieee80211_rx_stats*,struct ieee80211_rx_stats*) ;
 int FUNC_7 (struct ieee80211_rx_stats*,struct ieee80211_rx_stats*) ;

void FUNC_8(struct sk_buff *VAR_6,
       struct ieee80211_rx_stats * VAR_7,
       rx_desc_819x_usb *VAR_8,
                                   rx_drvinfo_819x_usb *VAR_9)
{

 rtl8192_rx_info *VAR_10 = (struct rtl8192_rx_info *)VAR_6->cb;
 struct net_device *VAR_11=VAR_10->dev;
 struct r8192_priv *VAR_12 = (struct r8192_priv *)FUNC_3(VAR_11);
 bool VAR_13, VAR_14;
 bool VAR_15=VAR_0, VAR_16=VAR_0;
 static struct ieee80211_rx_stats VAR_17;
 struct ieee80211_hdr_3addr *VAR_18;
       u16 VAR_19,VAR_20;



 u8* VAR_21;

 u8 *VAR_22;


 VAR_21 = (u8*)VAR_6->data;

 VAR_18 = (struct ieee80211_hdr_3addr *)VAR_21;
 VAR_19 = FUNC_4(VAR_18->frame_ctl);
 VAR_20 = FUNC_1(VAR_19);
 VAR_22 = VAR_18->addr1;


 VAR_13 = ((VAR_3 != VAR_20) &&
                                   (FUNC_2(VAR_12->ieee80211->current_network.bssid, (VAR_19 & VAR_2)? VAR_18->addr1 : (VAR_19 & VAR_1 )? VAR_18->addr2 : VAR_18->addr3))
                                     && (!VAR_7->bHwError) && (!VAR_7->bCRC)&& (!VAR_7->bICV));
 VAR_14 = VAR_13 & (FUNC_2(VAR_22, VAR_12->ieee80211->dev->dev_addr));


  if(FUNC_0(VAR_19)== VAR_4)
  {
   VAR_15 = 1;

  }
  if(FUNC_0(VAR_19) == VAR_5)
  {
   if((FUNC_2(VAR_22,VAR_11->dev_addr)))
    VAR_16 = 1;

  }




 if(VAR_13)
 {
  VAR_12->stats.numpacket_matchbssid++;
 }
 if(VAR_14){
  VAR_12->stats.numpacket_toself++;
 }





 FUNC_6(VAR_12, VAR_21, &VAR_17, VAR_7);
 FUNC_5(VAR_12, VAR_7, VAR_8, VAR_9, &VAR_17, VAR_13,VAR_14,VAR_15,VAR_16);
 FUNC_7(VAR_7, &VAR_17);

}
