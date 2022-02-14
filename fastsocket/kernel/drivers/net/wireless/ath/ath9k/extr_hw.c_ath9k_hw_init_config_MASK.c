
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_beacon_response_time; int sw_beacon_response_time; int ack_6mb; int analog_shiftreg; int enable_ani; int rx_intr_mitigation; int pcieSerDesWrite; int serialize_regmode; void*** spurchans; scalar_t__ pcie_waen; scalar_t__ pcie_clock_req; scalar_t__ cwm_ignore_extcca; scalar_t__ additional_swba_backoff; } ;
struct ath_hw {TYPE_1__ config; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ath_hw *VAR_3)
{
 int VAR_4;

 VAR_3->config.dma_beacon_response_time = 1;
 VAR_3->config.sw_beacon_response_time = 6;
 VAR_3->config.additional_swba_backoff = 0;
 VAR_3->config.ack_6mb = 0x0;
 VAR_3->config.cwm_ignore_extcca = 0;
 VAR_3->config.pcie_clock_req = 0;
 VAR_3->config.pcie_waen = 0;
 VAR_3->config.analog_shiftreg = 1;
 VAR_3->config.enable_ani = 1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->config.spurchans[VAR_4][0] = VAR_1;
  VAR_3->config.spurchans[VAR_4][1] = VAR_1;
 }

 VAR_3->config.rx_intr_mitigation = 1;
 VAR_3->config.pcieSerDesWrite = 1;
 if (FUNC_0() > 1)
  VAR_3->config.serialize_regmode = VAR_2;
}
