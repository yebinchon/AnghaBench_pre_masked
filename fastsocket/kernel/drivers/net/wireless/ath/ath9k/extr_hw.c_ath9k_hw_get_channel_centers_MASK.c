
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chan_centers {scalar_t__ synth_center; scalar_t__ ext_center; scalar_t__ ctl_center; } ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {scalar_t__ chanmode; scalar_t__ channel; } ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath9k_channel*) ;

void FUNC_1(struct ath_hw *VAR_3,
      struct ath9k_channel *VAR_4,
      struct chan_centers *VAR_5)
{
 int8_t VAR_6;

 if (!FUNC_0(VAR_4)) {
  VAR_5->ctl_center = VAR_5->ext_center =
   VAR_5->synth_center = VAR_4->channel;
  return;
 }

 if ((VAR_4->chanmode == VAR_0) ||
     (VAR_4->chanmode == VAR_1)) {
  VAR_5->synth_center =
   VAR_4->channel + VAR_2;
  VAR_6 = 1;
 } else {
  VAR_5->synth_center =
   VAR_4->channel - VAR_2;
  VAR_6 = -1;
 }

 VAR_5->ctl_center =
  VAR_5->synth_center - (VAR_6 * VAR_2);

 VAR_5->ext_center =
  VAR_5->synth_center + (VAR_6 * VAR_2);
}
