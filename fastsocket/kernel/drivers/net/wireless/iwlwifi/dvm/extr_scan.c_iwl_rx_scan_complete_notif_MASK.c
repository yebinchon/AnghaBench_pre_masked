
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scancomplete_notification {scalar_t__ bt_status; int status; int tsf_high; int tsf_low; int scanned_channels; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ scan_band; scalar_t__ iw_mode; scalar_t__ bt_status; int bt_traffic_change_work; int workqueue; int bt_traffic_load; int bt_ch_announce; int scan_completed; int status; scalar_t__ scan_start; } ;
struct iwl_device_cmd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,char*,int ,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct iwl_priv*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 struct iwl_rx_packet* FUNC_5 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct iwl_priv *VAR_7,
           struct iwl_rx_cmd_buffer *VAR_8,
           struct iwl_device_cmd *VAR_9)
{
 struct iwl_rx_packet *VAR_10 = FUNC_5(VAR_8);
 struct iwl_scancomplete_notification *VAR_11 = (void *)VAR_10->data;

 FUNC_0(VAR_7, "Scan complete: %d channels (TSF 0x%08X:%08X) - %d\n",
         VAR_11->scanned_channels,
         VAR_11->tsf_low,
         VAR_11->tsf_high, VAR_11->status);

 FUNC_0(VAR_7, "Scan on %sGHz took %dms\n",
         (VAR_7->scan_band == VAR_0) ? "2.4" : "5.2",
         FUNC_3(VAR_6 - VAR_7->scan_start));
 FUNC_6(VAR_4, &VAR_7->status);
 FUNC_1(VAR_5, &VAR_7->status);
 FUNC_4(VAR_7->workqueue, &VAR_7->scan_completed);

 if (VAR_7->iw_mode != VAR_3 &&
     FUNC_2(VAR_7) &&
     VAR_7->bt_status != VAR_11->bt_status) {
  if (VAR_11->bt_status) {

   if (!VAR_7->bt_ch_announce)
    VAR_7->bt_traffic_load =
     VAR_1;




  } else {

   VAR_7->bt_traffic_load =
    VAR_2;
  }
  VAR_7->bt_status = VAR_11->bt_status;
  FUNC_4(VAR_7->workqueue,
      &VAR_7->bt_traffic_change_work);
 }
 return 0;
}
