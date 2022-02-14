
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int cb; int protocol; int pkt_type; int dev; scalar_t__ data; } ;
struct libipw_rx_stats {int dummy; } ;
struct libipw_device {int dev; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct libipw_device *VAR_2,
     struct sk_buff *VAR_3,
     struct libipw_rx_stats *VAR_4)
{
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_3->data;
 u16 VAR_6 = FUNC_1(VAR_5->frame_control);

 VAR_3->dev = VAR_2->dev;
 FUNC_6(VAR_3);
 FUNC_5(VAR_3, FUNC_2(VAR_6));
 VAR_3->pkt_type = VAR_1;
 VAR_3->protocol = FUNC_0(VAR_0);
 FUNC_3(VAR_3->cb, 0, sizeof(VAR_3->cb));
 FUNC_4(VAR_3);
}
