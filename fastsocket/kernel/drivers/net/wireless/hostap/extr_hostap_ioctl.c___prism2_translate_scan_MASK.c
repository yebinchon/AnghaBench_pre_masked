
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iw_request_info {int dummy; } ;
struct TYPE_13__ {size_t length; int flags; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int level; int noise; int updated; } ;
struct TYPE_9__ {int m; int e; } ;
struct TYPE_12__ {int sa_data; int sa_family; } ;
struct TYPE_14__ {TYPE_5__ data; TYPE_3__ bitrate; TYPE_2__ qual; TYPE_1__ freq; int mode; TYPE_4__ ap_addr; } ;
struct iw_event {TYPE_6__ u; void* cmd; } ;
struct hostap_bss_info {int* ssid; size_t ssid_len; int* bssid; int capab_info; int chan; int wpa_ie_len; char* wpa_ie; int rsn_ie_len; char* rsn_ie; } ;
struct hfa384x_hostscan_result {int* ssid; int* bssid; int* sup_rates; int atim; int rate; int beacon_interval; int anl; int sl; int chid; int capability; int ssid_len; } ;
struct TYPE_15__ {scalar_t__ last_scan_type; } ;
typedef TYPE_7__ local_info_t ;
typedef int iwe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int* VAR_31 ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,...) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,char*,struct iw_event*,int ) ;
 int FUNC_4 (struct iw_request_info*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int*,int ) ;
 int FUNC_9 (struct iw_event*,int ,int) ;
 int FUNC_10 (char*,char*,int) ;
 void* FUNC_11 (char*) ;

__attribute__((used)) static char * FUNC_12(local_info_t *VAR_32,
          struct iw_request_info *VAR_33,
          struct hfa384x_hostscan_result *VAR_34,
          struct hostap_bss_info *VAR_35,
          char *VAR_36, char *VAR_37)
{
 int VAR_38, VAR_39;
 struct iw_event VAR_40;
 char *VAR_41;
 u16 VAR_42;
 u8 *VAR_43;
 u8 *VAR_44, *VAR_45;
 size_t VAR_46;
 char *VAR_47;

 if (VAR_35) {
  VAR_44 = VAR_35->ssid;
  VAR_46 = VAR_35->ssid_len;
  VAR_45 = VAR_35->bssid;
 } else {
  VAR_44 = VAR_34->ssid;
  VAR_46 = FUNC_7(VAR_34->ssid_len);
  VAR_45 = VAR_34->bssid;
 }
 if (VAR_46 > 32)
  VAR_46 = 32;


 FUNC_9(&VAR_40, 0, sizeof(VAR_40));
 VAR_40.cmd = VAR_22;
 VAR_40.u.ap_addr.sa_family = VAR_0;
 FUNC_8(VAR_40.u.ap_addr.sa_data, VAR_45, VAR_1);
 VAR_36 = FUNC_1(VAR_33, VAR_36, VAR_37, &VAR_40,
       VAR_9);



 FUNC_9(&VAR_40, 0, sizeof(VAR_40));
 VAR_40.cmd = VAR_24;
 VAR_40.u.data.length = VAR_46;
 VAR_40.u.data.flags = 1;
 VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37,
       &VAR_40, VAR_44);

 FUNC_9(&VAR_40, 0, sizeof(VAR_40));
 VAR_40.cmd = VAR_26;
 if (VAR_35) {
  VAR_42 = VAR_35->capab_info;
 } else {
  VAR_42 = FUNC_7(VAR_34->capability);
 }
 if (VAR_42 & (VAR_28 |
       VAR_29)) {
  if (VAR_42 & VAR_28)
   VAR_40.u.mode = VAR_15;
  else
   VAR_40.u.mode = VAR_14;
  VAR_36 = FUNC_1(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_13);
 }

 FUNC_9(&VAR_40, 0, sizeof(VAR_40));
 VAR_40.cmd = VAR_25;
 if (VAR_34) {
  VAR_39 = FUNC_7(VAR_34->chid);
 } else if (VAR_35) {
  VAR_39 = VAR_35->chan;
 } else {
  VAR_39 = 0;
 }

 if (VAR_39 > 0) {
  VAR_40.u.freq.m = VAR_31[VAR_39 - 1] * 100000;
  VAR_40.u.freq.e = 1;
  VAR_36 = FUNC_1(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_10);
 }

 if (VAR_34) {
  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_5;
  if (VAR_32->last_scan_type == VAR_21) {
   VAR_40.u.qual.level = FUNC_7(VAR_34->sl);
   VAR_40.u.qual.noise = FUNC_7(VAR_34->anl);
  } else {
   VAR_40.u.qual.level =
    FUNC_0(FUNC_7(VAR_34->sl));
   VAR_40.u.qual.noise =
    FUNC_0(FUNC_7(VAR_34->anl));
  }
  VAR_40.u.qual.updated = VAR_17
   | VAR_18
   | VAR_19
   | VAR_16;
  VAR_36 = FUNC_1(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_12);
 }

 FUNC_9(&VAR_40, 0, sizeof(VAR_40));
 VAR_40.cmd = VAR_23;
 if (VAR_42 & VAR_30)
  VAR_40.u.data.flags = VAR_7 | VAR_8;
 else
  VAR_40.u.data.flags = VAR_6;
 VAR_40.u.data.length = 0;
 VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37, &VAR_40, "");


 if (VAR_34) {
  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_27;
  VAR_41 = VAR_36 + FUNC_4(VAR_33);
  VAR_43 = VAR_34->sup_rates;
  for (VAR_38 = 0; VAR_38 < sizeof(VAR_34->sup_rates); VAR_38++) {
   if (VAR_43[VAR_38] == 0)
    break;

   VAR_40.u.bitrate.value = ((VAR_43[VAR_38] & 0x7f) * 500000);
   VAR_41 = FUNC_3(
    VAR_33, VAR_36, VAR_41, VAR_37, &VAR_40,
    VAR_11);
  }

  if ((VAR_41 - VAR_36) > FUNC_4(VAR_33))
   VAR_36 = VAR_41;
 }


 VAR_47 = FUNC_6(VAR_20 * 2 + 30, VAR_2);
 if (VAR_47 && VAR_34) {
  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_3;
  FUNC_10(VAR_47, "bcn_int=%d", FUNC_7(VAR_34->beacon_interval));
  VAR_40.u.data.length = FUNC_11(VAR_47);
  VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_47);

  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_3;
  FUNC_10(VAR_47, "resp_rate=%d", FUNC_7(VAR_34->rate));
  VAR_40.u.data.length = FUNC_11(VAR_47);
  VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_47);

  if (VAR_32->last_scan_type == VAR_21 &&
      (VAR_42 & VAR_29)) {
   FUNC_9(&VAR_40, 0, sizeof(VAR_40));
   VAR_40.cmd = VAR_3;
   FUNC_10(VAR_47, "atim=%d", FUNC_7(VAR_34->atim));
   VAR_40.u.data.length = FUNC_11(VAR_47);
   VAR_36 = FUNC_2(VAR_33, VAR_36,
         VAR_37, &VAR_40, VAR_47);
  }
 }
 FUNC_5(VAR_47);

 if (VAR_35 && VAR_35->wpa_ie_len > 0 && VAR_35->wpa_ie_len <= VAR_20) {
  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_4;
  VAR_40.u.data.length = VAR_35->wpa_ie_len;
  VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_35->wpa_ie);
 }

 if (VAR_35 && VAR_35->rsn_ie_len > 0 && VAR_35->rsn_ie_len <= VAR_20) {
  FUNC_9(&VAR_40, 0, sizeof(VAR_40));
  VAR_40.cmd = VAR_4;
  VAR_40.u.data.length = VAR_35->rsn_ie_len;
  VAR_36 = FUNC_2(VAR_33, VAR_36, VAR_37,
        &VAR_40, VAR_35->rsn_ie);
 }

 return VAR_36;
}
