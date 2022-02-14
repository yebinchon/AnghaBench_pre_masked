
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int * agc_params; } ;
struct audio_in {TYPE_1__ agc; scalar_t__ agc_enable; } ;
typedef int cmd ;
struct TYPE_6__ {int cmd_id; int tx_agc_param_mask; int tx_agc_enable_flag; int static_gain; int param_mask; int aig_attackk; int adaptive_gain_flag; int expander_th; int expander_slope; int compressor_th; int compressor_slope; int aig_leak_down; int aig_leak_up; int aig_max; int aig_min; int aig_releasek; int aig_leakrate_fast; int aig_leakrate_slow; int attackk_msw; int attackk_lsw; int delay; int releasek_msw; int releasek_lsw; int rms_tav; } ;
typedef TYPE_2__ audpreproc_cmd_cfg_agc_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct audio_in*,TYPE_2__*,int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct audio_in *VAR_22)
{
 audpreproc_cmd_cfg_agc_params VAR_23;

 FUNC_2(&VAR_23, 0, sizeof(VAR_23));
 VAR_23.cmd_id = VAR_0;

 if (VAR_22->agc_enable) {

  VAR_23.tx_agc_param_mask =
  (1 << VAR_16) |
  (1 << VAR_18) |
  (1 << VAR_19) |
  (1 << VAR_20) |
  (1 << VAR_15) |
  (1 << VAR_17) |
  (1 << VAR_21);
  VAR_23.tx_agc_enable_flag =
   VAR_14;
  FUNC_1(&VAR_23.static_gain, &VAR_22->agc.agc_params[0],
   sizeof(uint16_t) * 6);

  VAR_23.param_mask =
   (1 << VAR_12) |
   (1 << VAR_11) |
   (1 << VAR_6) |
   (1 << VAR_5) |
   (1 << VAR_8) |
   (1 << VAR_7) |
   (1 << VAR_4) |
   (1 << VAR_3) |
   (1 << VAR_2) |
   (1 << VAR_10) |
   (1 << VAR_9) |
   (1 << VAR_1);
  FUNC_1(&VAR_23.aig_attackk, &VAR_22->agc.agc_params[6],
   sizeof(uint16_t) * 14);

 } else {
  VAR_23.tx_agc_param_mask =
   (1 << VAR_21);
  VAR_23.tx_agc_enable_flag =
   VAR_13;
 }
 return FUNC_0(VAR_22, &VAR_23, sizeof(VAR_23));
}
