
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct sk_buff {struct net_device* dev; scalar_t__ cb; } ;
struct net_device {int flags; char* dev_addr; int name; } ;
struct ieee80211_hdr {int tx_cb_idx; struct hostap_interface* iface; int magic; int frame_control; struct ieee80211_hdr* addr3; struct ieee80211_hdr* addr2; struct ieee80211_hdr* addr1; } ;
struct hostap_skb_tx_data {int tx_cb_idx; struct hostap_interface* iface; int magic; int frame_control; struct hostap_skb_tx_data* addr3; struct hostap_skb_tx_data* addr2; struct hostap_skb_tx_data* addr1; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_hdr*,char*,int) ;
 int FUNC_8 (struct ieee80211_hdr*,int ,int) ;
 struct hostap_interface* FUNC_9 (struct net_device*) ;
 struct ieee80211_hdr* FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_5,
        u16 VAR_6, char *VAR_7,
        int VAR_8, u8 *VAR_9, u16 VAR_10)
{
 struct hostap_interface *VAR_11;
 local_info_t *VAR_12;
 struct ieee80211_hdr *VAR_13;
 u16 VAR_14;
 struct sk_buff *VAR_15;
 struct hostap_skb_tx_data *VAR_16;
 int VAR_17;

 VAR_11 = FUNC_9(VAR_5);
 VAR_12 = VAR_11->local;
 VAR_5 = VAR_12->dev;
 VAR_11 = FUNC_9(VAR_5);

 if (!(VAR_5->flags & VAR_4)) {
  FUNC_0(VAR_0, "%s: prism2_send_mgmt - device is not UP - "
         "cannot send frame\n", VAR_5->name);
  return;
 }

 VAR_15 = FUNC_2(sizeof(*VAR_13) + VAR_8);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(VAR_0, "%s: prism2_send_mgmt failed to allocate "
         "skb\n", VAR_5->name);
  return;
 }

 VAR_14 = VAR_6;
 VAR_17 = FUNC_4(FUNC_1(VAR_6));
 VAR_13 = (struct ieee80211_hdr *) FUNC_10(VAR_15, VAR_17);
 if (VAR_7)
  FUNC_7(FUNC_10(VAR_15, VAR_8), VAR_7, VAR_8);

 FUNC_8(VAR_13, 0, VAR_17);





 FUNC_7(VAR_13->addr1, VAR_9, VAR_1);
 if (FUNC_6(VAR_13->frame_control)) {
  VAR_14 |= VAR_3;
  FUNC_7(VAR_13->addr2, VAR_5->dev_addr, VAR_1);
  FUNC_7(VAR_13->addr3, VAR_5->dev_addr, VAR_1);
 } else if (FUNC_5(VAR_13->frame_control)) {

  FUNC_8(VAR_13->addr2, 0, VAR_1);
  FUNC_8(VAR_13->addr3, 0, VAR_1);
 } else {
  FUNC_7(VAR_13->addr2, VAR_5->dev_addr, VAR_1);
  FUNC_7(VAR_13->addr3, VAR_5->dev_addr, VAR_1);
 }

 VAR_13->frame_control = FUNC_1(VAR_14);

 VAR_16 = (struct hostap_skb_tx_data *) VAR_15->cb;
 FUNC_8(VAR_16, 0, sizeof(*VAR_16));
 VAR_16->magic = VAR_2;
 VAR_16->iface = VAR_11;
 VAR_16->tx_cb_idx = VAR_10;

 VAR_15->dev = VAR_5;
 FUNC_11(VAR_15);
 FUNC_12(VAR_15);
 FUNC_3(VAR_15);
}
