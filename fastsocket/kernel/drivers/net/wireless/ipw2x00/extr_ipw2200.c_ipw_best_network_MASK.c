
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rssi; } ;
struct libipw_network {int capability; scalar_t__ ssid_len; scalar_t__ last_associate; scalar_t__ last_scanned; scalar_t__ channel; int bssid; int ssid; int mode; TYPE_1__ stats; } ;
struct ipw_supported_rates {scalar_t__ num_rates; } ;
struct ipw_priv {int config; scalar_t__ essid_len; scalar_t__ channel; int capability; TYPE_2__* ieee; int bssid; int essid; } ;
struct ipw_network_match {struct libipw_network* network; int rates; } ;
typedef int escaped ;
struct TYPE_5__ {scalar_t__ iw_mode; scalar_t__ scan_age; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (char*,char*,int ,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ipw_priv*,struct libipw_network*,struct ipw_supported_rates*) ;
 int FUNC_3 (int *,struct ipw_supported_rates*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int VAR_13 ;
 int FUNC_10 (char*,int ,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct ipw_priv *VAR_14,
       struct ipw_network_match *VAR_15,
       struct libipw_network *VAR_16, int VAR_17)
{
 struct ipw_supported_rates VAR_18;
 FUNC_0(VAR_13);



 if ((VAR_14->ieee->iw_mode == VAR_8 &&
      !(VAR_16->capability & VAR_9)) ||
     (VAR_14->ieee->iw_mode == VAR_7 &&
      !(VAR_16->capability & VAR_10))) {
  FUNC_1("Network '%s (%pM)' excluded due to "
    "capability mismatch.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid);
  return 0;
 }

 if (FUNC_12(VAR_17)) {


  if ((VAR_16->ssid_len != VAR_15->network->ssid_len) ||
      FUNC_7(VAR_16->ssid, VAR_15->network->ssid,
      VAR_16->ssid_len)) {
   FUNC_1("Network '%s (%pM)' excluded "
     "because of non-network ESSID.\n",
     FUNC_9(VAR_13, VAR_16->ssid,
         VAR_16->ssid_len),
     VAR_16->bssid);
   return 0;
  }
 } else {


  if ((VAR_14->config & VAR_3) &&
      ((VAR_16->ssid_len != VAR_14->essid_len) ||
       FUNC_7(VAR_16->ssid, VAR_14->essid,
       FUNC_8(VAR_16->ssid_len, VAR_14->essid_len)))) {
   char VAR_19[VAR_6 * 2 + 1];
   FUNC_10(VAR_19,
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    sizeof(VAR_19));
   FUNC_1("Network '%s (%pM)' excluded "
     "because of ESSID mismatch: '%s'.\n",
     VAR_19, VAR_16->bssid,
     FUNC_9(VAR_13, VAR_14->essid,
         VAR_14->essid_len));
   return 0;
  }
 }



 if (VAR_15->network && VAR_15->network->stats.rssi > VAR_16->stats.rssi) {
  char VAR_20[VAR_6 * 2 + 1];
  FUNC_10(VAR_20,
   FUNC_9(VAR_13, VAR_16->ssid, VAR_16->ssid_len),
   sizeof(VAR_20));
  FUNC_1("Network '%s (%pM)' excluded because "
    "'%s (%pM)' has a stronger signal.\n",
    VAR_20, VAR_16->bssid,
    FUNC_9(VAR_13, VAR_15->network->ssid,
        VAR_15->network->ssid_len),
    VAR_15->network->bssid);
  return 0;
 }



 if (VAR_16->last_associate &&
     FUNC_11(VAR_16->last_associate + (VAR_5 * 3UL), VAR_12)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of storming (%ums since last "
    "assoc attempt).\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid,
    FUNC_4(VAR_12 -
       VAR_16->last_associate));
  return 0;
 }


 if (VAR_14->ieee->scan_age != 0 &&
     FUNC_11(VAR_12, VAR_16->last_scanned + VAR_14->ieee->scan_age)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of age: %ums.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid,
    FUNC_4(VAR_12 -
       VAR_16->last_scanned));
  return 0;
 }

 if ((VAR_14->config & VAR_2) &&
     (VAR_16->channel != VAR_14->channel)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of channel mismatch: %d != %d.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid,
    VAR_16->channel, VAR_14->channel);
  return 0;
 }


 if (((VAR_14->capability & VAR_0) ? 1 : 0) !=
     ((VAR_16->capability & VAR_11) ? 1 : 0)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of privacy mismatch: %s != %s.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid,
    VAR_14->capability & VAR_0 ? "on" :
    "off",
    VAR_16->capability &
    VAR_11 ? "on" : "off");
  return 0;
 }

 if ((VAR_14->config & VAR_1) &&
     FUNC_7(VAR_16->bssid, VAR_14->bssid, VAR_4)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of BSSID mismatch: %pM.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid, VAR_14->bssid);
  return 0;
 }


 if (!FUNC_6(VAR_14->ieee, VAR_16->mode)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of invalid frequency/mode "
    "combination.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid);
  return 0;
 }


 if (!FUNC_5(VAR_14->ieee, VAR_16->channel)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of invalid channel in current GEO\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid);
  return 0;
 }



 if (!FUNC_2(VAR_14, VAR_16, &VAR_18)) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because configured rate mask excludes "
    "AP mandatory rate.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid);
  return 0;
 }

 if (VAR_18.num_rates == 0) {
  FUNC_1("Network '%s (%pM)' excluded "
    "because of no compatible rates.\n",
    FUNC_9(VAR_13, VAR_16->ssid,
        VAR_16->ssid_len),
    VAR_16->bssid);
  return 0;
 }






 FUNC_3(&VAR_15->rates, &VAR_18);
 VAR_15->network = VAR_16;

 FUNC_1("Network '%s (%pM)' is a viable match.\n",
   FUNC_9(VAR_13, VAR_16->ssid, VAR_16->ssid_len),
   VAR_16->bssid);

 return 1;
}
