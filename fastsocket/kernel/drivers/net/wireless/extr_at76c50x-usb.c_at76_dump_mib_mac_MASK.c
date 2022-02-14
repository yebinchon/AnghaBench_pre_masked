
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_mac {int desired_bsstype; int desired_bssid; int desired_ssid; int listen_interval; int max_channel_time; int min_channel_time; int probe_delay; int scan_channel; int scan_type; int long_retry_time; int short_retry_time; int cwmax; int cwmin; int rts_threshold; int frag_threshold; int max_rx_lifetime; int max_tx_msdu_lifetime; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,struct mib_mac*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mib_mac*) ;
 struct mib_mac* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct at76_priv *VAR_4)
{
 int VAR_5;
 struct mib_mac *VAR_6 = FUNC_4(sizeof(struct mib_mac), VAR_1);

 if (!VAR_6)
  return;

 VAR_5 = FUNC_1(VAR_4->udev, VAR_3, VAR_6, sizeof(struct mib_mac));
 if (VAR_5 < 0) {
  FUNC_7(VAR_4->hw->wiphy,
     "at76_get_mib (MAC) failed: %d\n", VAR_5);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB MAC: max_tx_msdu_lifetime %d "
   "max_rx_lifetime %d frag_threshold %d rts_threshold %d "
   "cwmin %d cwmax %d short_retry_time %d long_retry_time %d "
   "scan_type %d scan_channel %d probe_delay %u "
   "min_channel_time %d max_channel_time %d listen_int %d "
   "desired_ssid %s desired_bssid %pM desired_bsstype %d",
   FUNC_8(VAR_4->hw->wiphy),
   FUNC_6(VAR_6->max_tx_msdu_lifetime),
   FUNC_6(VAR_6->max_rx_lifetime),
   FUNC_5(VAR_6->frag_threshold), FUNC_5(VAR_6->rts_threshold),
   FUNC_5(VAR_6->cwmin), FUNC_5(VAR_6->cwmax),
   VAR_6->short_retry_time, VAR_6->long_retry_time, VAR_6->scan_type,
   VAR_6->scan_channel, FUNC_5(VAR_6->probe_delay),
   FUNC_5(VAR_6->min_channel_time),
   FUNC_5(VAR_6->max_channel_time),
   FUNC_5(VAR_6->listen_interval),
   FUNC_2(VAR_6->desired_ssid, VAR_2),
   VAR_6->desired_bssid, VAR_6->desired_bsstype);
exit:
 FUNC_3(VAR_6);
}
