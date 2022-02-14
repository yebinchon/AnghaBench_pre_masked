
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw_priv {int exp_avg_rssi; int exp_avg_noise; scalar_t__ rx_packets; scalar_t__ tx_packets; scalar_t__ missed_beacons; scalar_t__ missed_adhoc_beacons; scalar_t__ last_tx_failures; scalar_t__ last_rx_err; scalar_t__ last_tx_packets; scalar_t__ last_rx_packets; scalar_t__ last_missed_beacons; scalar_t__ last_rate; int average_missed_beacons; scalar_t__ quality; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipw_priv*,int ,scalar_t__*,int*) ;

__attribute__((used)) static void FUNC_2(struct ipw_priv *VAR_2)
{
 u32 VAR_3 = sizeof(u32);

 VAR_2->quality = 0;

 FUNC_0(&VAR_2->average_missed_beacons);
 VAR_2->exp_avg_rssi = -60;
 VAR_2->exp_avg_noise = -85 + 0x100;

 VAR_2->last_rate = 0;
 VAR_2->last_missed_beacons = 0;
 VAR_2->last_rx_packets = 0;
 VAR_2->last_tx_packets = 0;
 VAR_2->last_tx_failures = 0;



 FUNC_1(VAR_2, VAR_0,
   &VAR_2->last_rx_err, &VAR_3);
 FUNC_1(VAR_2, VAR_1,
   &VAR_2->last_tx_failures, &VAR_3);


 VAR_2->missed_adhoc_beacons = 0;
 VAR_2->missed_beacons = 0;
 VAR_2->tx_packets = 0;
 VAR_2->rx_packets = 0;

}
