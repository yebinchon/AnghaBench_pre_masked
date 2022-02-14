
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dev_addr; } ;
struct ieee80211_hdr {int addr1; int addr3; int frame_control; } ;
struct hostap_80211_rx_status {int dummy; } ;
struct TYPE_13__ {scalar_t__ hostapd; TYPE_1__* ap; struct net_device* dev; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_12__ {scalar_t__ nullfunc_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,struct ieee80211_hdr*) ;
 int FUNC_2 (TYPE_2__*,struct ieee80211_hdr*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_2__*,struct sk_buff*,struct hostap_80211_rx_status*,int) ;
 int FUNC_5 (TYPE_2__*,struct sk_buff*,struct hostap_80211_rx_status*) ;
 int FUNC_6 (TYPE_2__*,struct sk_buff*,struct hostap_80211_rx_status*) ;
 int FUNC_7 (TYPE_2__*,struct sk_buff*,struct hostap_80211_rx_status*) ;
 int FUNC_8 (TYPE_2__*,struct sk_buff*,struct hostap_80211_rx_status*) ;
 int FUNC_9 (TYPE_2__*,struct ieee80211_hdr*,struct hostap_80211_rx_status*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,int ,int ) ;

__attribute__((used)) static void FUNC_12(local_info_t *VAR_12, struct sk_buff *VAR_13,
      struct hostap_80211_rx_status *VAR_14)
{

 struct net_device *VAR_15 = VAR_12->dev;

 u16 VAR_16, VAR_17, VAR_18;
 struct ieee80211_hdr *VAR_19;



 VAR_19 = (struct ieee80211_hdr *) VAR_13->data;
 VAR_16 = FUNC_10(VAR_19->frame_control);
 VAR_17 = VAR_16 & VAR_3;
 VAR_18 = VAR_16 & VAR_4;


 if (!VAR_12->hostapd && VAR_17 == VAR_7) {
  FUNC_0(VAR_0, "handle_ap_item - data frame\n");

  if (!(VAR_16 & VAR_5) ||
      (VAR_16 & VAR_2)) {
   if (VAR_18 == VAR_10) {



    FUNC_2(VAR_12, VAR_19);
    goto done;
   }
   FUNC_0(VAR_0, "   not ToDS frame (fc=0x%04x)\n",
          VAR_16);
   goto done;
  }

  if (FUNC_11(VAR_19->addr1, VAR_15->dev_addr, VAR_1)) {
   FUNC_0(VAR_0, "handle_ap_item - addr1(BSSID)=%pM"
          " not own MAC\n", VAR_19->addr1);
   goto done;
  }

  if (VAR_12->ap->nullfunc_ack &&
      VAR_18 == VAR_10)
   FUNC_1(VAR_12, VAR_19);
  else
   FUNC_2(VAR_12, VAR_19);
  goto done;
 }

 if (VAR_17 == VAR_8 && VAR_18 == VAR_9) {
  FUNC_6(VAR_12, VAR_13, VAR_14);
  goto done;
 }


 if (VAR_17 == VAR_6 && VAR_18 == VAR_11) {
  FUNC_9(VAR_12, VAR_19, VAR_14);
  goto done;
 }

 if (VAR_12->hostapd) {
  FUNC_0(VAR_0, "Unknown frame in AP queue: type=0x%02x "
         "subtype=0x%02x\n", VAR_17, VAR_18);
  goto done;
 }


 if (VAR_17 != VAR_8) {
  FUNC_0(VAR_0, "handle_ap_item - not a management frame?\n");
  goto done;
 }

 if (FUNC_11(VAR_19->addr1, VAR_15->dev_addr, VAR_1)) {
  FUNC_0(VAR_0, "handle_ap_item - addr1(DA)=%pM"
         " not own MAC\n", VAR_19->addr1);
  goto done;
 }

 if (FUNC_11(VAR_19->addr3, VAR_15->dev_addr, VAR_1)) {
  FUNC_0(VAR_0, "handle_ap_item - addr3(BSSID)=%pM"
         " not own MAC\n", VAR_19->addr3);
  goto done;
 }

 switch (VAR_18) {
 case 135:
  FUNC_4(VAR_12, VAR_13, VAR_14, 0);
  break;
 case 134:
  FUNC_0(VAR_0, "==> ASSOC RESP (ignored)\n");
  break;
 case 129:
  FUNC_4(VAR_12, VAR_13, VAR_14, 1);
  break;
 case 128:
  FUNC_0(VAR_0, "==> REASSOC RESP (ignored)\n");
  break;
 case 133:
  FUNC_0(VAR_0, "==> ATIM (ignored)\n");
  break;
 case 130:
  FUNC_8(VAR_12, VAR_13, VAR_14);
  break;
 case 132:
  FUNC_5(VAR_12, VAR_13, VAR_14);
  break;
 case 131:
  FUNC_7(VAR_12, VAR_13, VAR_14);
  break;
 default:
  FUNC_0(VAR_0, "Unknown mgmt frame subtype 0x%02x\n",
         VAR_18 >> 4);
  break;
 }


 done:
 FUNC_3(VAR_13);
}
