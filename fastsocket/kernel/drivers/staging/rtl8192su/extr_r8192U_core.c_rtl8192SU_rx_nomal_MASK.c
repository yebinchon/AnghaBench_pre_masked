
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ cb; } ;
struct rtl8192_rx_info {struct net_device* dev; } ;
struct TYPE_2__ {int rxbytesunicast; int rxurberr; int rxoktotal; } ;
struct r8192_priv {TYPE_1__ stats; int ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int noise; int freq; int rate; int signal; } ;
struct ieee80211_hdr_1addr {int addr1; } ;
typedef int rx_desc_819x_usb ;
typedef struct rtl8192_rx_info rtl8192_rx_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct sk_buff*,struct ieee80211_rx_stats*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct sk_buff*,struct ieee80211_rx_stats*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

void FUNC_8(struct sk_buff* VAR_2)
{
 rtl8192_rx_info *VAR_3 = (struct rtl8192_rx_info *)VAR_2->cb;
 struct net_device *VAR_4=VAR_3->dev;
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_1(VAR_4);
 struct ieee80211_rx_stats VAR_6 = {
  .signal = 0,
  .noise = -98,
  .rate = 0,

  .freq = VAR_0,
 };
 u32 VAR_7 = 0;
 struct ieee80211_hdr_1addr *VAR_8 = ((void*)0);
 bool VAR_9 = 0;



 if((VAR_2->len >=(20 + sizeof(rx_desc_819x_usb))) && (VAR_2->len < VAR_1)) {


  FUNC_6(VAR_2, &VAR_6, 0);



  VAR_5->stats.rxoktotal++;


  FUNC_7(VAR_2, VAR_2->len - 4 );

  VAR_7 = VAR_2->len;
  VAR_8 = (struct ieee80211_hdr_1addr *)VAR_2->data;
  VAR_9 = 0;
  if(FUNC_3(VAR_8->addr1)) {

  }else if(FUNC_4(VAR_8->addr1)){

  }else {

   VAR_9 = 1;
  }

  if(!FUNC_2(VAR_5->ieee80211,VAR_2, &VAR_6)) {
   FUNC_0(VAR_2);
  } else {

   if(VAR_9) {
    VAR_5->stats.rxbytesunicast += VAR_7;
   }
  }


 }
 else
 {
  VAR_5->stats.rxurberr++;
  FUNC_5("actual_length:%d\n", VAR_2->len);
  FUNC_0(VAR_2);
 }

}
