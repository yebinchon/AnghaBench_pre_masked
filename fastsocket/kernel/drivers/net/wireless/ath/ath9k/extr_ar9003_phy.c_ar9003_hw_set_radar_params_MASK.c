
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_radar_conf {scalar_t__ ext_channel; int radar_inband; int pulse_inband_step; int pulse_maxlen; int pulse_inband; int pulse_rssi; int pulse_height; int radar_rssi; int fir_power; } ;
struct ath_hw {int dummy; } ;


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
 int FUNC_0 (struct ath_hw*,int ,int) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_16,
           struct ath_hw_radar_conf *VAR_17)
{
 u32 VAR_18 = 0, VAR_19 = 0;

 if (!VAR_17) {
  FUNC_0(VAR_16, VAR_0, VAR_1);
  return;
 }

 VAR_18 |= VAR_1 | VAR_2;
 VAR_18 |= FUNC_3(VAR_17->fir_power, VAR_3);
 VAR_18 |= FUNC_3(VAR_17->radar_rssi, VAR_7);
 VAR_18 |= FUNC_3(VAR_17->pulse_height, VAR_4);
 VAR_18 |= FUNC_3(VAR_17->pulse_rssi, VAR_6);
 VAR_18 |= FUNC_3(VAR_17->pulse_inband, VAR_5);

 VAR_19 |= VAR_11;
 VAR_19 |= VAR_9;
 VAR_19 |= FUNC_3(VAR_17->pulse_maxlen, VAR_10);
 VAR_19 |= FUNC_3(VAR_17->pulse_inband_step, VAR_13);
 VAR_19 |= FUNC_3(VAR_17->radar_inband, VAR_12);

 FUNC_2(VAR_16, VAR_0, VAR_18);
 FUNC_2(VAR_16, VAR_8, VAR_19);
 if (VAR_17->ext_channel)
  FUNC_1(VAR_16, VAR_14, VAR_15);
 else
  FUNC_0(VAR_16, VAR_14, VAR_15);
}
