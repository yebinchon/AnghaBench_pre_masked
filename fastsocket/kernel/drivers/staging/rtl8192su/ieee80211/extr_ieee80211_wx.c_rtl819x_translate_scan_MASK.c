
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct iw_request_info {int dummy; } ;
struct TYPE_19__ {int flags; int length; } ;
struct TYPE_18__ {int updated; int noise; int level; int qual; } ;
struct TYPE_16__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_14__ {int i; scalar_t__ e; int m; } ;
struct TYPE_13__ {char* sa_data; int sa_family; } ;
struct TYPE_20__ {TYPE_7__ data; TYPE_6__ qual; TYPE_4__ bitrate; TYPE_2__ freq; int mode; int name; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_8__ u; void* cmd; } ;
struct TYPE_17__ {int mask; int noise; int rssi; int signal; } ;
struct TYPE_15__ {int * bdHTCapBuf; } ;
struct ieee80211_network {scalar_t__ ssid_len; char* ssid; int mode; int capability; int rates_len; int rates_ex_len; int* rates_ex; int* rates; int wpa_ie_len; int rsn_ie_len; int last_scanned; int rsn_ie; int wpa_ie; TYPE_5__ stats; TYPE_3__ bssht; int channel; int bssid; } ;
struct ieee80211_device {int dummy; } ;
typedef int iwe ;
struct TYPE_21__ {int MCS; scalar_t__ ShortGI20Mhz; scalar_t__ ShortGI40Mhz; scalar_t__ ChlWidth; } ;
struct TYPE_12__ {char* mode_string; int mode_size; } ;
typedef TYPE_9__* PHT_CAPABILITY_ELE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_device*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
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
 int VAR_27 ;
 int*** VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 TYPE_10__* VAR_40 ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 int VAR_41 ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct iw_event*,int ,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (char*,char*,int ) ;

__attribute__((used)) static inline char *FUNC_10(struct ieee80211_device *VAR_42,
         char *VAR_43, char *VAR_44,
        struct ieee80211_network *VAR_45,
                                           struct iw_request_info *VAR_46)
{
 char VAR_47[VAR_26];
 char VAR_48[VAR_8];
 char *VAR_49 = VAR_48;
 char *VAR_50;
 struct iw_event VAR_51;
 int VAR_52, VAR_53;
 u16 VAR_54, VAR_55;
 static u8 VAR_56[] = {0x00, 0x90, 0x4c, 0x33};


 VAR_51.cmd = VAR_30;
 VAR_51.u.ap_addr.sa_family = VAR_0;
 FUNC_5(VAR_51.u.ap_addr.sa_data, VAR_45->bssid, VAR_1);
 VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_15);




 VAR_51.cmd = VAR_32;
 VAR_51.u.data.flags = 1;

 if (VAR_45->ssid_len == 0) {
  VAR_51.u.data.length = sizeof("<hidden>");
                VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, "<hidden>");
        } else {
  VAR_51.u.data.length = FUNC_7(VAR_45->ssid_len, (u8)32);
                VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_45->ssid);
        }

 VAR_51.cmd = VAR_35;
 for(VAR_52=0; VAR_52<FUNC_0(VAR_40); VAR_52++) {
  if(VAR_45->mode&(1<<VAR_52)) {
   FUNC_9(VAR_49,VAR_40[VAR_52].mode_string,VAR_40[VAR_52].mode_size);
   VAR_49 +=VAR_40[VAR_52].mode_size;
  }
 }
 *VAR_49 = '\0';
 FUNC_8(VAR_51.u.name, VAR_8, "IEEE802.11%s", VAR_48);
        VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_16);

        VAR_51.cmd = VAR_34;
        if (VAR_45->capability &
     (VAR_37 | VAR_38)) {
  if (VAR_45->capability & VAR_37)
   VAR_51.u.mode = VAR_22;
  else
   VAR_51.u.mode = VAR_21;
                VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_20);
        }


 VAR_51.cmd = VAR_33;


 VAR_51.u.freq.m = VAR_45->channel;
 VAR_51.u.freq.e = 0;
 VAR_51.u.freq.i = 0;
        VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_17);

 VAR_51.cmd = VAR_31;
 if (VAR_45->capability & VAR_39)
  VAR_51.u.data.flags = VAR_13 | VAR_14;
 else
  VAR_51.u.data.flags = VAR_12;
 VAR_51.u.data.length = 0;
        VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_45->ssid);

 VAR_54 = 0;
 VAR_50 = VAR_47;
 VAR_50 += FUNC_8(VAR_50, VAR_26 - (VAR_50 - VAR_47), " Rates (Mb/s): ");
 for (VAR_52 = 0, VAR_53 = 0; VAR_52 < VAR_45->rates_len; ) {
  if (VAR_53 < VAR_45->rates_ex_len &&
      ((VAR_45->rates_ex[VAR_53] & 0x7F) <
       (VAR_45->rates[VAR_52] & 0x7F)))
   VAR_55 = VAR_45->rates_ex[VAR_53++] & 0x7F;
  else
   VAR_55 = VAR_45->rates[VAR_52++] & 0x7F;
  if (VAR_55 > VAR_54)
   VAR_54 = VAR_55;
  VAR_50 += FUNC_8(VAR_50, VAR_26 - (VAR_50 - VAR_47),
         "%d%s ", VAR_55 >> 1, (VAR_55 & 1) ? ".5" : "");
 }
 for (; VAR_53 < VAR_45->rates_ex_len; VAR_53++) {
  VAR_55 = VAR_45->rates_ex[VAR_53] & 0x7F;
  VAR_50 += FUNC_8(VAR_50, VAR_26 - (VAR_50 - VAR_47),
         "%d%s ", VAR_55 >> 1, (VAR_55 & 1) ? ".5" : "");
  if (VAR_55 > VAR_54)
   VAR_54 = VAR_55;
 }

 if (VAR_45->mode >= VAR_7)
 {
  PHT_CAPABILITY_ELE VAR_57 = ((void*)0);
  bool VAR_58 = 0, VAR_59 = 0;
  u8 VAR_60 = 0;
  if (!FUNC_4(VAR_45->bssht.bdHTCapBuf, VAR_56, 4))
   VAR_57 = (PHT_CAPABILITY_ELE)&VAR_45->bssht.bdHTCapBuf[4];
  else
   VAR_57 = (PHT_CAPABILITY_ELE)&VAR_45->bssht.bdHTCapBuf[0];
  VAR_58 = (VAR_57->ChlWidth)?1:0;
  VAR_59 = (VAR_57->ChlWidth)?
      ((VAR_57->ShortGI40Mhz)?1:0):
      ((VAR_57->ShortGI20Mhz)?1:0);

  VAR_60 = FUNC_1(VAR_42, VAR_57->MCS, VAR_29);
  VAR_55 = VAR_28[VAR_58][VAR_59][VAR_60&0x7f];
  if (VAR_55 > VAR_54)
   VAR_54 = VAR_55;
 }

 VAR_51.cmd = VAR_36;
 VAR_51.u.bitrate.fixed = VAR_51.u.bitrate.disabled = 0;
 VAR_51.u.bitrate.value = VAR_54 * 500000;
        VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51,
         VAR_18);

 VAR_51.cmd = VAR_9;
 VAR_51.u.data.length = VAR_50 - VAR_47;
 if (VAR_51.u.data.length)
        VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_47);



 VAR_51.cmd = VAR_11;
 VAR_51.u.qual.qual = VAR_45->stats.signal;
 VAR_51.u.qual.level = VAR_45->stats.rssi;
 VAR_51.u.qual.noise = VAR_45->stats.noise;
 VAR_51.u.qual.updated = VAR_45->stats.mask & VAR_6;
 if (!(VAR_45->stats.mask & VAR_4))
  VAR_51.u.qual.updated |= VAR_23;
 if (!(VAR_45->stats.mask & VAR_3))
  VAR_51.u.qual.updated |= VAR_24;
 if (!(VAR_45->stats.mask & VAR_5))
  VAR_51.u.qual.updated |= VAR_25;
 VAR_51.u.qual.updated = 7;
        VAR_43 = FUNC_2(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_19);
 VAR_51.cmd = VAR_9;
 VAR_50 = VAR_47;

 VAR_51.u.data.length = VAR_50 - VAR_47;
 if (VAR_51.u.data.length)
            VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_47);

 FUNC_6(&VAR_51, 0, sizeof(VAR_51));
 if (VAR_45->wpa_ie_len)
 {
  char VAR_61[VAR_27];
  FUNC_5(VAR_61, VAR_45->wpa_ie, VAR_45->wpa_ie_len);
  VAR_51.cmd = VAR_10;
  VAR_51.u.data.length = VAR_45->wpa_ie_len;
                VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_61);
        }
 FUNC_6(&VAR_51, 0, sizeof(VAR_51));
 if (VAR_45->rsn_ie_len)
 {
  char VAR_62[VAR_27];
  FUNC_5(VAR_62, VAR_45->rsn_ie, VAR_45->rsn_ie_len);
  VAR_51.cmd = VAR_10;
  VAR_51.u.data.length = VAR_45->rsn_ie_len;
                VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_62);
        }



 VAR_51.cmd = VAR_9;
 VAR_50 = VAR_47;
 VAR_50 += FUNC_8(VAR_50, VAR_26 - (VAR_50 - VAR_47),
        " Last beacon: %lums ago", (VAR_41 - VAR_45->last_scanned) / (VAR_2 / 100));
 VAR_51.u.data.length = VAR_50 - VAR_47;
 if (VAR_51.u.data.length)
            VAR_43 = FUNC_3(VAR_46, VAR_43, VAR_44, &VAR_51, VAR_47);

 return VAR_43;
}
