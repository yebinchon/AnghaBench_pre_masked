
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct iw_request_info {int dummy; } ;
struct TYPE_13__ {int flags; int length; } ;
struct TYPE_11__ {scalar_t__ level; int updated; int noise; int qual; } ;
struct TYPE_9__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_8__ {int i; scalar_t__ e; int m; } ;
struct TYPE_12__ {char* sa_data; int sa_family; } ;
struct TYPE_14__ {TYPE_6__ data; TYPE_4__ qual; TYPE_2__ bitrate; TYPE_1__ freq; int mode; int name; TYPE_5__ ap_addr; } ;
struct iw_event {TYPE_7__ u; void* cmd; } ;
struct TYPE_10__ {scalar_t__ signal; scalar_t__ rssi; int mask; int noise; int signalstrength; } ;
struct ieee80211_network {scalar_t__ ssid_len; char* ssid; size_t mode; int capability; int rates_len; int rates_ex_len; int* rates_ex; int* rates; int wpa_ie_len; int rsn_ie_len; int last_scanned; int rsn_ie; int wpa_ie; TYPE_3__ stats; int channel; int bssid; } ;
struct ieee80211_device {int dummy; } ;
typedef int iwe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char** VAR_37 ;
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 int VAR_38 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct iw_event*,int ,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (char*,int,char*,...) ;

__attribute__((used)) static inline char *FUNC_7(struct ieee80211_device *VAR_39,
                             char *VAR_40, char *VAR_41,
                                           struct ieee80211_network *VAR_42,
                                           struct iw_request_info *VAR_43)
{
 char VAR_44[VAR_25];
 char *VAR_45;
 struct iw_event VAR_46;
 int VAR_47, VAR_48;
 u8 VAR_49, VAR_50;


 VAR_46.cmd = VAR_27;
 VAR_46.u.ap_addr.sa_family = VAR_0;
 FUNC_2(VAR_46.u.ap_addr.sa_data, VAR_42->bssid, VAR_1);
 VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_14);




 VAR_46.cmd = VAR_29;
 VAR_46.u.data.flags = 1;


 if (VAR_42->ssid_len == 0) {

  VAR_46.u.data.length = sizeof("<hidden>");
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, "<hidden>");
 } else {
  VAR_46.u.data.length = FUNC_4(VAR_42->ssid_len, (u8)32);
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_42->ssid);
 }


 VAR_46.cmd = VAR_32;
 FUNC_6(VAR_46.u.name, VAR_7, "IEEE 802.11%s", VAR_37[VAR_42->mode]);
 VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_15);


        VAR_46.cmd = VAR_31;
        if (VAR_42->capability &
     (VAR_34 | VAR_35)) {
  if (VAR_42->capability & VAR_34)
   VAR_46.u.mode = VAR_21;
  else
   VAR_46.u.mode = VAR_20;

  VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_19);
 }


 VAR_46.cmd = VAR_30;


 VAR_46.u.freq.m = VAR_42->channel;
 VAR_46.u.freq.e = 0;
 VAR_46.u.freq.i = 0;
 VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_16);


 VAR_46.cmd = VAR_28;
 if (VAR_42->capability & VAR_36)
  VAR_46.u.data.flags = VAR_12 | VAR_13;
 else
  VAR_46.u.data.flags = VAR_11;
 VAR_46.u.data.length = 0;
 VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_42->ssid);


 VAR_49 = 0;
 VAR_45 = VAR_44;
 VAR_45 += FUNC_6(VAR_45, VAR_25 - (VAR_45 - VAR_44), " Rates (Mb/s): ");
 for (VAR_47 = 0, VAR_48 = 0; VAR_47 < VAR_42->rates_len; ) {
  if (VAR_48 < VAR_42->rates_ex_len &&
      ((VAR_42->rates_ex[VAR_48] & 0x7F) <
       (VAR_42->rates[VAR_47] & 0x7F)))
   VAR_50 = VAR_42->rates_ex[VAR_48++] & 0x7F;
  else
   VAR_50 = VAR_42->rates[VAR_47++] & 0x7F;
  if (VAR_50 > VAR_49)
   VAR_49 = VAR_50;
  VAR_45 += FUNC_6(VAR_45, VAR_25 - (VAR_45 - VAR_44),
         "%d%s ", VAR_50 >> 1, (VAR_50 & 1) ? ".5" : "");
 }
 for (; VAR_48 < VAR_42->rates_ex_len; VAR_48++) {
  VAR_50 = VAR_42->rates_ex[VAR_48] & 0x7F;
  VAR_45 += FUNC_6(VAR_45, VAR_25 - (VAR_45 - VAR_44),
         "%d%s ", VAR_50 >> 1, (VAR_50 & 1) ? ".5" : "");
  if (VAR_50 > VAR_49)
   VAR_49 = VAR_50;
 }

 VAR_46.cmd = VAR_33;
 VAR_46.u.bitrate.fixed = VAR_46.u.bitrate.disabled = 0;
 VAR_46.u.bitrate.value = VAR_49 * 500000;
 VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_17);

 VAR_46.cmd = VAR_8;
 VAR_46.u.data.length = VAR_45 - VAR_44;
 if (VAR_46.u.data.length)
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_44);



 if (VAR_42->stats.signal == 0 || VAR_42->stats.rssi == 0)
 FUNC_5("========>signal:%d, rssi:%d\n", VAR_42->stats.signal, VAR_42->stats.rssi);
 VAR_46.cmd = VAR_10;

 VAR_46.u.qual.qual = VAR_42->stats.signalstrength;
 VAR_46.u.qual.level = VAR_42->stats.signal;
 VAR_46.u.qual.noise = VAR_42->stats.noise;
 VAR_46.u.qual.updated = VAR_42->stats.mask & VAR_6;
 if (!(VAR_42->stats.mask & VAR_4))
  VAR_46.u.qual.updated |= VAR_22;
 if (!(VAR_42->stats.mask & VAR_3))
  VAR_46.u.qual.updated |= VAR_23;
 if (!(VAR_42->stats.mask & VAR_5))
  VAR_46.u.qual.updated |= VAR_24;
 VAR_46.u.qual.updated = 7;
 VAR_40 = FUNC_0(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_18);

 VAR_46.cmd = VAR_8;
 VAR_45 = VAR_44;

 VAR_46.u.data.length = VAR_45 - VAR_44;
 if (VAR_46.u.data.length)
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_44);

  FUNC_3(&VAR_46, 0, sizeof(VAR_46));
        if (VAR_42->wpa_ie_len) {

                char VAR_51[VAR_26];
                FUNC_2(VAR_51, VAR_42->wpa_ie, VAR_42->wpa_ie_len);
                VAR_46.cmd = VAR_9;
                VAR_46.u.data.length = VAR_42->wpa_ie_len;
                VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_51);
        }

        FUNC_3(&VAR_46, 0, sizeof(VAR_46));
        if (VAR_42->rsn_ie_len) {

                char VAR_52[VAR_26];
                FUNC_2(VAR_52, VAR_42->rsn_ie, VAR_42->rsn_ie_len);
                VAR_46.cmd = VAR_9;
                VAR_46.u.data.length = VAR_42->rsn_ie_len;
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_52);
 }



 VAR_46.cmd = VAR_8;
 VAR_45 = VAR_44;
 VAR_45 += FUNC_6(VAR_45, VAR_25 - (VAR_45 - VAR_44),
        " Last beacon: %lums ago", (VAR_38 - VAR_42->last_scanned) / (VAR_2 / 100));
 VAR_46.u.data.length = VAR_45 - VAR_44;
 if (VAR_46.u.data.length)
  VAR_40 = FUNC_1(VAR_43, VAR_40, VAR_41, &VAR_46, VAR_44);

 return VAR_40;
}
