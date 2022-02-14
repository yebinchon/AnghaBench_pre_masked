
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct libipw_rx_stats {scalar_t__ freq; scalar_t__ len; int received_channel; } ;
struct TYPE_3__ {scalar_t__ old_param_count; scalar_t__ param_count; scalar_t__ supported; scalar_t__ active; } ;
struct libipw_network {int flags; int capability; int erp_value; int stats; int mode; scalar_t__ rsn_ie_len; scalar_t__ wpa_ie_len; int channel; scalar_t__ ssid_len; scalar_t__ last_associate; scalar_t__ rates_ex_len; scalar_t__ rates_len; int last_scanned; int * bssid; void* listen_interval; void* atim_window; TYPE_1__ qos_data; int * ibss_dfs; } ;
struct libipw_device {int (* handle_assoc_response ) (struct net_device*,struct libipw_assoc_response*,struct libipw_network*) ;struct net_device* dev; } ;
struct TYPE_4__ {struct libipw_rx_stats* addr3; } ;
struct libipw_assoc_response {int info_element; int capability; TYPE_2__ header; int status; int aid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,struct libipw_network*) ;
 int FUNC_2 (int *,struct libipw_rx_stats*,int) ;
 int FUNC_3 (struct net_device*,struct libipw_assoc_response*,struct libipw_network*) ;

__attribute__((used)) static int FUNC_4(struct libipw_device *VAR_9, struct libipw_assoc_response
           *VAR_10, struct libipw_rx_stats *VAR_11)
{
 struct libipw_network VAR_12 = {
  .ibss_dfs = ((void*)0),
 };
 struct libipw_network *VAR_13 = &VAR_12;
 struct net_device *VAR_14 = VAR_9->dev;

 VAR_13->flags = 0;
 VAR_13->qos_data.active = 0;
 VAR_13->qos_data.supported = 0;
 VAR_13->qos_data.param_count = 0;
 VAR_13->qos_data.old_param_count = 0;


 VAR_13->atim_window = FUNC_0(VAR_10->aid);
 VAR_13->listen_interval = FUNC_0(VAR_10->status);
 FUNC_2(VAR_13->bssid, VAR_10->header.addr3, VAR_0);
 VAR_13->capability = FUNC_0(VAR_10->capability);
 VAR_13->last_scanned = VAR_8;
 VAR_13->rates_len = VAR_13->rates_ex_len = 0;
 VAR_13->last_associate = 0;
 VAR_13->ssid_len = 0;
 VAR_13->erp_value =
     (VAR_13->capability & VAR_7) ? 0x3 : 0x0;

 if (VAR_11->freq == VAR_4) {

  VAR_13->channel = VAR_11->received_channel;
 } else
  VAR_13->flags |= VAR_5;

 VAR_13->wpa_ie_len = 0;
 VAR_13->rsn_ie_len = 0;

 if (FUNC_1
     (VAR_10->info_element, VAR_11->len - sizeof(*VAR_10), VAR_13))
  return 1;

 VAR_13->mode = 0;
 if (VAR_11->freq == VAR_4)
  VAR_13->mode = VAR_1;
 else {
  if (VAR_13->flags & VAR_6)
   VAR_13->mode |= VAR_3;
  if (VAR_13->flags & VAR_5)
   VAR_13->mode |= VAR_2;
 }

 FUNC_2(&VAR_13->stats, VAR_11, sizeof(VAR_13->stats));

 if (VAR_9->handle_assoc_response != ((void*)0))
  VAR_9->handle_assoc_response(VAR_14, VAR_10, VAR_13);

 return 0;
}
