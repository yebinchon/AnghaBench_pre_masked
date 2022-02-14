
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vfe_demux_cfg {int ch2Gain; int ch1Gain; int ch0OddGain; int ch0EvenGain; } ;
struct vfe_cmd_demux_channel_gain_config {int ch2Gain; int ch1Gain; int ch0OddGain; int ch0EvenGain; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ vfebase; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct vfe_demux_cfg*,int ,int) ;
 int FUNC_1 (scalar_t__,int *,int) ;

void FUNC_2(
 struct vfe_cmd_demux_channel_gain_config *VAR_2)
{
 struct vfe_demux_cfg VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.ch0EvenGain = VAR_2->ch0EvenGain;
 VAR_3.ch0OddGain = VAR_2->ch0OddGain;
 VAR_3.ch1Gain = VAR_2->ch1Gain;
 VAR_3.ch2Gain = VAR_2->ch2Gain;

 FUNC_1(VAR_1->vfebase + VAR_0,
  (uint32_t *)&VAR_3, sizeof(VAR_3));
}
