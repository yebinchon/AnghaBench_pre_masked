
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libipw_rx_stats {scalar_t__ freq; scalar_t__ len; int received_channel; } ;
struct TYPE_4__ {struct libipw_rx_stats* addr3; } ;
struct libipw_probe_response {int info_element; int beacon_interval; int * time_stamp; int capability; TYPE_2__ header; } ;
struct TYPE_3__ {scalar_t__ old_param_count; scalar_t__ param_count; scalar_t__ supported; scalar_t__ active; } ;
struct libipw_network {int capability; int listen_interval; int flags; int erp_value; int stats; int * bssid; scalar_t__ ssid_len; int ssid; int mode; scalar_t__ rsn_ie_len; scalar_t__ wpa_ie_len; int channel; scalar_t__ atim_window; scalar_t__ last_associate; scalar_t__ rates_ex_len; scalar_t__ rates_len; void* beacon_interval; void** time_stamp; int last_scanned; TYPE_1__ qos_data; } ;
struct libipw_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,struct libipw_network*) ;
 int FUNC_5 (int *,struct libipw_rx_stats*,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct libipw_device *VAR_10, struct libipw_probe_response
      *VAR_11,
      struct libipw_network *VAR_12,
      struct libipw_rx_stats *VAR_13)
{
 FUNC_0(VAR_9);

 VAR_12->qos_data.active = 0;
 VAR_12->qos_data.supported = 0;
 VAR_12->qos_data.param_count = 0;
 VAR_12->qos_data.old_param_count = 0;


 FUNC_5(VAR_12->bssid, VAR_11->header.addr3, VAR_0);
 VAR_12->capability = FUNC_2(VAR_11->capability);
 VAR_12->last_scanned = VAR_8;
 VAR_12->time_stamp[0] = FUNC_3(VAR_11->time_stamp[0]);
 VAR_12->time_stamp[1] = FUNC_3(VAR_11->time_stamp[1]);
 VAR_12->beacon_interval = FUNC_2(VAR_11->beacon_interval);

 VAR_12->listen_interval = 0x0A;
 VAR_12->rates_len = VAR_12->rates_ex_len = 0;
 VAR_12->last_associate = 0;
 VAR_12->ssid_len = 0;
 VAR_12->flags = 0;
 VAR_12->atim_window = 0;
 VAR_12->erp_value = (VAR_12->capability & VAR_7) ?
     0x3 : 0x0;

 if (VAR_13->freq == VAR_4) {

  VAR_12->channel = VAR_13->received_channel;
 } else
  VAR_12->flags |= VAR_5;

 VAR_12->wpa_ie_len = 0;
 VAR_12->rsn_ie_len = 0;

 if (FUNC_4
     (VAR_11->info_element, VAR_13->len - sizeof(*VAR_11), VAR_12))
  return 1;

 VAR_12->mode = 0;
 if (VAR_13->freq == VAR_4)
  VAR_12->mode = VAR_1;
 else {
  if (VAR_12->flags & VAR_6)
   VAR_12->mode |= VAR_3;
  if (VAR_12->flags & VAR_5)
   VAR_12->mode |= VAR_2;
 }

 if (VAR_12->mode == 0) {
  FUNC_1("Filtered out '%s (%pM)' "
         "network.\n",
         FUNC_6(VAR_9, VAR_12->ssid,
       VAR_12->ssid_len),
         VAR_12->bssid);
  return 1;
 }

 FUNC_5(&VAR_12->stats, VAR_13, sizeof(VAR_12->stats));

 return 0;
}
