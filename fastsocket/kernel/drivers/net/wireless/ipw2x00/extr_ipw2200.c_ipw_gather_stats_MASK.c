
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ beacon_interval; } ;
struct ipw_priv {int status; int quality; int missed_beacons; int last_missed_beacons; int last_rx_err; int last_tx_failures; int rx_packets; int last_rx_packets; int tx_packets; int last_tx_packets; int last_rate; int gather_stats; TYPE_2__* ieee; int exp_avg_rssi; int average_missed_beacons; TYPE_1__ assoc_request; } ;
typedef int s16 ;
struct TYPE_4__ {int perfect_rssi; int worst_rssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*,int ,int*,int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct ipw_priv *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16 = 0;
 u32 VAR_17 = sizeof(u32);
 s16 VAR_18;
 u32 VAR_19, VAR_20, VAR_21, VAR_22,
     VAR_23;
 u32 VAR_24;

 if (!(VAR_7->status & VAR_6)) {
  VAR_7->quality = 0;
  return;
 }


 FUNC_4(VAR_7, VAR_2,
   &VAR_7->missed_beacons, &VAR_17);
 VAR_15 = VAR_7->missed_beacons - VAR_7->last_missed_beacons;
 VAR_7->last_missed_beacons = VAR_7->missed_beacons;
 if (VAR_7->assoc_request.beacon_interval) {
  VAR_14 = VAR_15 *
      (VAR_1 * FUNC_5(VAR_7->assoc_request.beacon_interval)) /
      (VAR_5 * 10);
 } else {
  VAR_14 = 0;
 }
 FUNC_1(&VAR_7->average_missed_beacons, VAR_14);

 FUNC_4(VAR_7, VAR_3, &VAR_8, &VAR_17);
 VAR_9 = VAR_8 - VAR_7->last_rx_err;
 VAR_7->last_rx_err = VAR_8;

 FUNC_4(VAR_7, VAR_4, &VAR_11, &VAR_17);
 VAR_12 = VAR_11 - VAR_7->last_tx_failures;
 VAR_7->last_tx_failures = VAR_11;

 VAR_10 = VAR_7->rx_packets - VAR_7->last_rx_packets;
 VAR_7->last_rx_packets = VAR_7->rx_packets;

 VAR_13 = VAR_7->tx_packets - VAR_7->last_tx_packets;
 VAR_7->last_tx_packets = VAR_7->tx_packets;
 VAR_19 = 100 - VAR_14;
 if (VAR_19 < 5)
  VAR_19 = 0;
 else
  VAR_19 = (VAR_19 - 5) * 100 /
      (100 - 5);
 FUNC_0("Missed beacon: %3d%% (%d%%)\n",
   VAR_19, VAR_14);

 VAR_7->last_rate = FUNC_2(VAR_7);
 VAR_24 = FUNC_3(VAR_7);
 VAR_23 = VAR_7->last_rate * 40 / VAR_24 + 60;
 FUNC_0("Rate quality : %3d%% (%dMbs)\n",
   VAR_23, VAR_7->last_rate / 1000000);

 if (VAR_10 > 100 && VAR_10 + VAR_9)
  VAR_22 = 100 - (VAR_9 * 100) /
      (VAR_10 + VAR_9);
 else
  VAR_22 = 100;
 FUNC_0("Rx quality   : %3d%% (%u errors, %u packets)\n",
   VAR_22, VAR_9, VAR_10);

 if (VAR_13 > 100 && VAR_13 + VAR_12)
  VAR_21 = 100 - (VAR_12 * 100) /
      (VAR_13 + VAR_12);
 else
  VAR_21 = 100;
 FUNC_0("Tx quality   : %3d%% (%u errors, %u packets)\n",
   VAR_21, VAR_12, VAR_13);

 VAR_18 = VAR_7->exp_avg_rssi;
 VAR_20 =
     (100 *
      (VAR_7->ieee->perfect_rssi - VAR_7->ieee->worst_rssi) *
      (VAR_7->ieee->perfect_rssi - VAR_7->ieee->worst_rssi) -
      (VAR_7->ieee->perfect_rssi - VAR_18) *
      (15 * (VAR_7->ieee->perfect_rssi - VAR_7->ieee->worst_rssi) +
       62 * (VAR_7->ieee->perfect_rssi - VAR_18))) /
     ((VAR_7->ieee->perfect_rssi - VAR_7->ieee->worst_rssi) *
      (VAR_7->ieee->perfect_rssi - VAR_7->ieee->worst_rssi));
 if (VAR_20 > 100)
  VAR_20 = 100;
 else if (VAR_20 < 1)
  VAR_20 = 0;

 FUNC_0("Signal level : %3d%% (%d dBm)\n",
   VAR_20, VAR_18);

 VAR_16 = FUNC_6(VAR_22, VAR_20);
 VAR_16 = FUNC_6(VAR_21, VAR_16);
 VAR_16 = FUNC_6(VAR_23, VAR_16);
 VAR_16 = FUNC_6(VAR_19, VAR_16);
 if (VAR_16 == VAR_19)
  FUNC_0("Quality (%d%%): Clamped to missed beacons.\n",
    VAR_16);
 if (VAR_16 == VAR_23)
  FUNC_0("Quality (%d%%): Clamped to rate quality.\n",
    VAR_16);
 if (VAR_16 == VAR_21)
  FUNC_0("Quality (%d%%): Clamped to Tx quality.\n",
    VAR_16);
 if (VAR_16 == VAR_22)
  FUNC_0("Quality (%d%%): Clamped to Rx quality.\n",
    VAR_16);
 if (VAR_16 == VAR_20)
  FUNC_0("Quality (%d%%): Clamped to signal quality.\n",
    VAR_16);

 VAR_7->quality = VAR_16;

 FUNC_7(&VAR_7->gather_stats, VAR_5);
}
