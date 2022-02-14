
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_powertable_cmd {int flags; int lprx_rssi_threshold; int tx_data_timeout; int rx_data_timeout; int keep_alive_seconds; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {int power_scheme; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_2,
         struct iwl_powertable_cmd *VAR_3)
{
 FUNC_0(VAR_2,
   "Sending power table command for power level %d, flags = 0x%X\n",
   VAR_1.power_scheme,
   FUNC_2(VAR_3->flags));
 FUNC_0(VAR_2, "Keep alive = %u sec\n", VAR_3->keep_alive_seconds);

 if (VAR_3->flags & FUNC_1(VAR_0)) {
  FUNC_0(VAR_2, "Rx timeout = %u usec\n",
    FUNC_3(VAR_3->rx_data_timeout));
  FUNC_0(VAR_2, "Tx timeout = %u usec\n",
    FUNC_3(VAR_3->tx_data_timeout));
  FUNC_0(VAR_2, "LP RX RSSI threshold = %u\n",
    VAR_3->lprx_rssi_threshold);
 }
}
