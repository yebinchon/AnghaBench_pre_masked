
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ cb; } ;
struct rtl8192_rx_info {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct ieee80211_rx_stats {int noise; int freq; int rate; int signal; } ;
typedef int rx_desc_819x_usb ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct ieee80211_rx_stats*) ;
 int FUNC_3 (struct net_device*,struct ieee80211_rx_stats*) ;

void FUNC_4(struct sk_buff *VAR_3)
{
 struct rtl8192_rx_info *VAR_4 = (struct rtl8192_rx_info *)VAR_3->cb;
 struct net_device *VAR_5 = VAR_4->dev;


 struct ieee80211_rx_stats VAR_6 = {
  .signal = 0,
  .noise = -98,
  .rate = 0,

  .freq = VAR_1,
 };




 if( (VAR_3->len >= sizeof(rx_desc_819x_usb)) && (VAR_3->len <= VAR_2) )

 {



  FUNC_2(VAR_3,&VAR_6);





  FUNC_3(VAR_5,&VAR_6);

  FUNC_1(VAR_3);
 }
 else
 {




 }
 FUNC_0(VAR_0, "<--- HalUsbInCommandComplete8192SUsb()\n");

}
