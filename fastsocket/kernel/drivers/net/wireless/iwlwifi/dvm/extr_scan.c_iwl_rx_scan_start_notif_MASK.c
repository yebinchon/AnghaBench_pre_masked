
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scanstart_notification {int beacon_timer; int status; int tsf_low; int tsf_high; scalar_t__ band; int channel; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ scan_type; int hw_roc_start_notified; int hw; int scan_start_tsf; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ,char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_1,
        struct iwl_rx_cmd_buffer *VAR_2,
        struct iwl_device_cmd *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_3(VAR_2);
 struct iwl_scanstart_notification *VAR_5 = (void *)VAR_4->data;

 VAR_1->scan_start_tsf = FUNC_2(VAR_5->tsf_low);
 FUNC_0(VAR_1, "Scan start: "
         "%d [802.11%s] "
         "(TSF: 0x%08X:%08X) - %d (beacon timer %u)\n",
         VAR_5->channel,
         VAR_5->band ? "bg" : "a",
         FUNC_2(VAR_5->tsf_high),
         FUNC_2(VAR_5->tsf_low),
         VAR_5->status, VAR_5->beacon_timer);

 if (VAR_1->scan_type == VAR_0 &&
     !VAR_1->hw_roc_start_notified) {
  FUNC_1(VAR_1->hw);
  VAR_1->hw_roc_start_notified = 1;
 }

 return 0;
}
