
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stats_rx_non_phy {int beacon_silence_rssi_c; int beacon_silence_rssi_b; int beacon_silence_rssi_a; } ;
struct TYPE_4__ {struct stats_rx_non_phy general; } ;
struct TYPE_5__ {TYPE_1__ rx; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct il_priv {TYPE_3__ _4965; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_2)
{
 struct stats_rx_non_phy *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_3 = &(VAR_2->_4965.stats.rx.general);
 VAR_6 =
     FUNC_1(VAR_3->beacon_silence_rssi_a) & VAR_1;
 VAR_7 =
     FUNC_1(VAR_3->beacon_silence_rssi_b) & VAR_1;
 VAR_8 =
     FUNC_1(VAR_3->beacon_silence_rssi_c) & VAR_1;

 if (VAR_6) {
  VAR_5 += VAR_6;
  VAR_4++;
 }
 if (VAR_7) {
  VAR_5 += VAR_7;
  VAR_4++;
 }
 if (VAR_8) {
  VAR_5 += VAR_8;
  VAR_4++;
 }


 if (VAR_4)
  VAR_9 = (VAR_5 / VAR_4) - 107;
 else
  VAR_9 = VAR_0;

 FUNC_0("inband silence a %u, b %u, c %u, dBm %d\n", VAR_6,
  VAR_7, VAR_8, VAR_9);
}
