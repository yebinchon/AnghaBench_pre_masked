
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_network {unsigned int wpa_ie_len; unsigned int rsn_ie_len; int ssid_len; int capability; int ssid; int bssid; scalar_t__ Turbo_Enable; scalar_t__ QoS_Enable; } ;
struct ieee80211_device {int wpax_type_notify; scalar_t__* ap_mac_addr; unsigned int wpa_ie_len; int wpa_ie; scalar_t__ short_slot; TYPE_1__* dev; scalar_t__ wpax_type_set; } ;
struct TYPE_6__ {int len; int id; } ;
struct TYPE_5__ {int duration_id; scalar_t__* addr1; scalar_t__* addr2; scalar_t__* addr3; int frame_ctl; } ;
struct ieee80211_assoc_request_frame {int listen_interval; TYPE_3__ info_element; int capability; TYPE_2__ header; } ;
struct TYPE_4__ {int dev_addr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_device*,scalar_t__**) ;
 int FUNC_3 (struct ieee80211_device*,scalar_t__**) ;
 unsigned int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*,scalar_t__**) ;
 int FUNC_6 (struct ieee80211_device*,scalar_t__**) ;
 int FUNC_7 (scalar_t__*,int ,unsigned int) ;
 scalar_t__* FUNC_8 (struct sk_buff*,unsigned int) ;

inline struct sk_buff *FUNC_9(struct ieee80211_network *VAR_9,struct ieee80211_device *VAR_10)
{
 struct sk_buff *VAR_11;


 struct ieee80211_assoc_request_frame *VAR_12;
 u8 *VAR_13;




 unsigned int VAR_14 = VAR_9->wpa_ie_len;






 unsigned int VAR_15 = VAR_9->rsn_ie_len;



 unsigned int VAR_16 = FUNC_4(VAR_10);
 unsigned int VAR_17 = VAR_9->QoS_Enable?9:0;
 unsigned int VAR_18 = VAR_9->Turbo_Enable?9:0;

 u8 VAR_19 = VAR_10->wpax_type_notify & 0xff;



 int VAR_20 = 0;




 if(VAR_10->wpax_type_set) {
  if (VAR_3 == VAR_19) {
   VAR_15 = 0;
  } else if (VAR_2 == VAR_19) {
   VAR_14 = 0;
  }
 }
 VAR_20 = sizeof(struct ieee80211_assoc_request_frame)+
  + VAR_9->ssid_len
  + VAR_16
  + VAR_14
  + VAR_15
  + VAR_17
  + VAR_18;

 VAR_11 = FUNC_1(VAR_20);

 if (!VAR_11)
  return ((void*)0);

 VAR_12 = (struct ieee80211_assoc_request_frame *)
  FUNC_8(VAR_11, sizeof(struct ieee80211_assoc_request_frame));


 VAR_12->header.frame_ctl = VAR_1;
 VAR_12->header.duration_id= 37;
 FUNC_7(VAR_12->header.addr1, VAR_9->bssid, VAR_0);
 FUNC_7(VAR_12->header.addr2, VAR_10->dev->dev_addr, VAR_0);
 FUNC_7(VAR_12->header.addr3, VAR_9->bssid, VAR_0);
 FUNC_7(VAR_10->ap_mac_addr, VAR_9->bssid, VAR_0);

 VAR_12->capability = FUNC_0(VAR_5);
 if (VAR_9->capability & VAR_6 )
  VAR_12->capability |= FUNC_0(VAR_6);
 if (VAR_9->capability & VAR_7)
  VAR_12->capability |= FUNC_0(VAR_7);

 if(VAR_10->short_slot)
  VAR_12->capability |= FUNC_0(VAR_8);

 VAR_12->listen_interval = 0xa;

 VAR_12->info_element.id = VAR_4;

 VAR_12->info_element.len = VAR_9->ssid_len;
 VAR_13 = FUNC_8(VAR_11, VAR_9->ssid_len);
 FUNC_7(VAR_13, VAR_9->ssid, VAR_9->ssid_len);

 VAR_13 = FUNC_8(VAR_11, VAR_16);

 FUNC_2(VAR_10, &VAR_13);
 FUNC_3(VAR_10, &VAR_13);




 VAR_13 = FUNC_8(VAR_11,VAR_10->wpa_ie_len);
 FUNC_7(VAR_13,VAR_10->wpa_ie,VAR_10->wpa_ie_len);

 VAR_13 = FUNC_8(VAR_11,VAR_17);
 if(VAR_17) {
   FUNC_6(VAR_10, &VAR_13);
 }
 VAR_13 = FUNC_8(VAR_11,VAR_18);
        if(VAR_18) {
                FUNC_5(VAR_10, &VAR_13);
        }

 return VAR_11;
}
