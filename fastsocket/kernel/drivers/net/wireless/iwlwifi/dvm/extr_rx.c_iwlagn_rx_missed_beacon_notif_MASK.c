
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {scalar_t__ missed_beacon_threshold; int status; } ;
struct iwl_missed_beacon_notif {int num_expected_beacons; int num_recvd_beacons; int total_missed_becons; int consecutive_missed_beacons; } ;
struct iwl_device_cmd {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct iwl_rx_packet* FUNC_3 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_1,
           struct iwl_rx_cmd_buffer *VAR_2,
           struct iwl_device_cmd *VAR_3)

{
 struct iwl_rx_packet *VAR_4 = FUNC_3(VAR_2);
 struct iwl_missed_beacon_notif *VAR_5 = (void *)VAR_4->data;

 if (FUNC_2(VAR_5->consecutive_missed_beacons) >
     VAR_1->missed_beacon_threshold) {
  FUNC_0(VAR_1,
      "missed bcn cnsq %d totl %d rcd %d expctd %d\n",
      FUNC_2(VAR_5->consecutive_missed_beacons),
      FUNC_2(VAR_5->total_missed_becons),
      FUNC_2(VAR_5->num_recvd_beacons),
      FUNC_2(VAR_5->num_expected_beacons));
  if (!FUNC_4(VAR_0, &VAR_1->status))
   FUNC_1(VAR_1);
 }
 return 0;
}
