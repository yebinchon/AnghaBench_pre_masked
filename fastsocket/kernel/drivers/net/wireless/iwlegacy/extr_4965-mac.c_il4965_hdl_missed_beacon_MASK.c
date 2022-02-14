
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_missed_beacon_notif {int num_expected_beacons; int num_recvd_beacons; int total_missed_becons; int consecutive_missed_beacons; } ;
struct TYPE_2__ {struct il_missed_beacon_notif missed_beacon; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {scalar_t__ missed_beacon_threshold; int status; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct il_rx_pkt* FUNC_3 (struct il_rx_buf*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_3(VAR_2);
 struct il_missed_beacon_notif *VAR_4;

 VAR_4 = &VAR_3->u.missed_beacon;
 if (FUNC_2(VAR_4->consecutive_missed_beacons) >
     VAR_1->missed_beacon_threshold) {
  FUNC_0("missed bcn cnsq %d totl %d rcd %d expctd %d\n",
   FUNC_2(VAR_4->consecutive_missed_beacons),
   FUNC_2(VAR_4->total_missed_becons),
   FUNC_2(VAR_4->num_recvd_beacons),
   FUNC_2(VAR_4->num_expected_beacons));
  if (!FUNC_4(VAR_0, &VAR_1->status))
   FUNC_1(VAR_1);
 }
}
