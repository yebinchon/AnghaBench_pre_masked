
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wpa_leader ;
typedef int u16_t ;
struct zsBssInfo {char* ssid; int* capability; int channel; int* supportedRates; int* extSupportedRates; int* beaconInterval; scalar_t__* wpaIe; scalar_t__* rsnIe; int signalQuality; int signalStrength; int bssid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_11__ {char length; int flags; } ;
struct TYPE_9__ {int value; scalar_t__ disabled; scalar_t__ fixed; } ;
struct TYPE_8__ {int updated; int qual; scalar_t__ noise; int level; } ;
struct TYPE_7__ {int m; int e; } ;
struct TYPE_10__ {int sa_data; int sa_family; } ;
struct TYPE_12__ {TYPE_5__ data; TYPE_3__ bitrate; TYPE_2__ qual; TYPE_1__ freq; int mode; TYPE_4__ ap_addr; } ;
struct iw_event {TYPE_6__ u; void* cmd; } ;
typedef int rsn_leader ;
typedef int iwe ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* FUNC_0 (char*,int,scalar_t__*,scalar_t__,char const*,int) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 char* FUNC_3 (struct iw_request_info*,char*,char*,char*,struct iw_event*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct iw_event*,int ,int) ;
 int FUNC_6 (char*,int,char*,int) ;
 char FUNC_7 (char*) ;

char *FUNC_8(struct net_device *VAR_25,
 struct iw_request_info *VAR_26, char *VAR_27,
 char *VAR_28, struct zsBssInfo *VAR_29)
{
 struct iw_event VAR_30;
 u16_t VAR_31;
 char *VAR_32;
 char *VAR_33;
 int VAR_34;
 char VAR_35[64*2 + 30];

 VAR_33 = VAR_27;


 VAR_30.cmd = VAR_19;
 VAR_30.u.ap_addr.sa_family = VAR_0;
 FUNC_4(VAR_30.u.ap_addr.sa_data, VAR_29->bssid, VAR_1);
 VAR_27 = FUNC_1(VAR_26, VAR_27,
     VAR_28, &VAR_30, VAR_8);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;




 VAR_30.u.data.length = VAR_29->ssid[1];
 if (VAR_30.u.data.length > 32)
  VAR_30.u.data.length = 32;
 VAR_30.cmd = VAR_21;
 VAR_30.u.data.flags = 1;
 VAR_27 = FUNC_2(VAR_26, VAR_27,
     VAR_28, &VAR_30, &VAR_29->ssid[2]);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;


 VAR_30.cmd = VAR_23;
 VAR_31 = (VAR_29->capability[1] << 8) + VAR_29->capability[0];
 if (VAR_31 & (0x01 | 0x02)) {
  if (VAR_31 & 0x01)
   VAR_30.u.mode = VAR_15;
  else
   VAR_30.u.mode = VAR_14;
   VAR_27 = FUNC_1(VAR_26, VAR_27,
      VAR_28, &VAR_30, VAR_13);
 }


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;


 VAR_30.cmd = VAR_22;
 VAR_30.u.freq.m = VAR_29->channel;

 if (VAR_30.u.freq.m > 14) {
  if ((184 <= VAR_30.u.freq.m) && (VAR_30.u.freq.m <= 196))
   VAR_30.u.freq.m = 4000 + VAR_30.u.freq.m * 5;
  else
   VAR_30.u.freq.m = 5000 + VAR_30.u.freq.m * 5;
 } else {
  if (VAR_30.u.freq.m == 14)
   VAR_30.u.freq.m = 2484;
  else
   VAR_30.u.freq.m = 2412 + (VAR_30.u.freq.m - 1) * 5;
 }
 VAR_30.u.freq.e = 6;
 VAR_27 = FUNC_1(VAR_26, VAR_27,
     VAR_28, &VAR_30, VAR_9);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;


 VAR_30.cmd = VAR_4;
 VAR_30.u.qual.updated = VAR_18 | VAR_16
    | VAR_17;
 VAR_30.u.qual.level = VAR_29->signalStrength;
 VAR_30.u.qual.noise = 0;
 VAR_30.u.qual.qual = VAR_29->signalQuality;
 VAR_27 = FUNC_1(VAR_26, VAR_27,
     VAR_28, &VAR_30, VAR_12);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;



 VAR_30.cmd = VAR_20;
 if (VAR_31 & 0x10)
  VAR_30.u.data.flags = VAR_6 | VAR_7;
 else
  VAR_30.u.data.flags = VAR_5;

 VAR_30.u.data.length = 0;
 VAR_27 = FUNC_2(VAR_26, VAR_27,
     VAR_28, &VAR_30, VAR_29->ssid);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;




 VAR_32 = VAR_27 + VAR_10;

 VAR_30.cmd = VAR_24;

 VAR_30.u.bitrate.fixed = VAR_30.u.bitrate.disabled = 0;

 for (VAR_34 = 0 ; VAR_34 < VAR_29->supportedRates[1] ; VAR_34++) {

  VAR_30.u.bitrate.value = ((VAR_29->supportedRates[VAR_34+2] & 0x7f)
     * 500000);

  VAR_32 = FUNC_3(VAR_26, VAR_27,
    VAR_32, VAR_28, &VAR_30, VAR_11);


  if (VAR_33 == VAR_32)
   return VAR_28;

  VAR_33 = VAR_32;
 }

 for (VAR_34 = 0 ; VAR_34 < VAR_29->extSupportedRates[1] ; VAR_34++) {

  VAR_30.u.bitrate.value = ((VAR_29->extSupportedRates[VAR_34+2] & 0x7f)
     * 500000);

  VAR_32 = FUNC_3(VAR_26, VAR_27,
    VAR_32, VAR_28, &VAR_30, VAR_11);


  if (VAR_33 == VAR_32)
   return VAR_28;

  VAR_33 = VAR_27;
 }


 if ((VAR_32 - VAR_27) > VAR_10)
  VAR_27 = VAR_32;

 FUNC_5(&VAR_30, 0, sizeof(VAR_30));
 VAR_30.cmd = VAR_3;
 FUNC_6(VAR_35, sizeof(VAR_35), "bcn_int=%d", (VAR_29->beaconInterval[1] << 8)
      + VAR_29->beaconInterval[0]);
 VAR_30.u.data.length = FUNC_7(VAR_35);
 VAR_27 = FUNC_2(VAR_26, VAR_27,
      VAR_28, &VAR_30, VAR_35);


 if (VAR_33 == VAR_27)
  return VAR_28;

 VAR_33 = VAR_27;

 if (VAR_29->wpaIe[1] != 0) {
  static const char VAR_36[] = "rsn_ie=";
  static const char VAR_37[] = "wpa_ie=";

  FUNC_5(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.cmd = VAR_3;
  if (VAR_29->wpaIe[0] == 0x30)
   VAR_30.u.data.length = FUNC_0(VAR_35, sizeof(VAR_35),
     VAR_29->wpaIe, VAR_29->wpaIe[1]+2,
     VAR_36, sizeof(VAR_36)-1);
  else
   VAR_30.u.data.length = FUNC_0(VAR_35, sizeof(VAR_35),
     VAR_29->wpaIe, VAR_29->wpaIe[1]+2,
     VAR_37, sizeof(VAR_37)-1);

  if (VAR_30.u.data.length != 0)
   VAR_27 = FUNC_2(VAR_26, VAR_27,
       VAR_28, &VAR_30, VAR_35);


  if (VAR_33 == VAR_27)
   return VAR_28;

  VAR_33 = VAR_27;
 }

 if (VAR_29->rsnIe[1] != 0) {
  static const char VAR_38[] = "rsn_ie=";
  FUNC_5(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.cmd = VAR_3;

  if (VAR_29->rsnIe[0] == 0x30) {
   VAR_30.u.data.length = FUNC_0(VAR_35, sizeof(VAR_35),
   VAR_29->rsnIe, VAR_29->rsnIe[1]+2,
   VAR_38, sizeof(VAR_38)-1);
   if (VAR_30.u.data.length != 0)
    VAR_27 = FUNC_2(VAR_26,
     VAR_27, VAR_28, &VAR_30, VAR_35);


   if (VAR_33 == VAR_27)
    return VAR_28;

   VAR_33 = VAR_27;
  }
 }



 return VAR_27;
}
