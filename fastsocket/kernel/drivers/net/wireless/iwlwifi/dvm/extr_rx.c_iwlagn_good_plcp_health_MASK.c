
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct statistics_rx_phy {int plcp_err; } ;
struct statistics_rx_ht_phy {int plcp_err; } ;
struct TYPE_5__ {int plcp_err; } ;
struct TYPE_4__ {int plcp_err; } ;
struct TYPE_6__ {TYPE_2__ rx_ofdm_ht; TYPE_1__ rx_ofdm; } ;
struct iwl_priv {int plcp_delta_threshold; TYPE_3__ statistics; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct iwl_priv *VAR_1,
     struct statistics_rx_phy *VAR_2,
     struct statistics_rx_ht_phy *VAR_3,
     unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_1->plcp_delta_threshold;

 if (VAR_6 == VAR_0) {
  FUNC_0(VAR_1, "plcp_err check disabled\n");
  return 1;
 }

 VAR_5 = FUNC_1(VAR_2->plcp_err) -
  FUNC_1(VAR_1->statistics.rx_ofdm.plcp_err) +
  FUNC_1(VAR_3->plcp_err) -
  FUNC_1(VAR_1->statistics.rx_ofdm_ht.plcp_err);


 if (VAR_5 <= 0)
  return 1;

 if ((VAR_5 * 100 / VAR_4) > VAR_6) {
  FUNC_0(VAR_1,
    "plcp health threshold %u delta %d msecs %u\n",
    VAR_6, VAR_5, VAR_4);
  return 0;
 }

 return 1;
}
