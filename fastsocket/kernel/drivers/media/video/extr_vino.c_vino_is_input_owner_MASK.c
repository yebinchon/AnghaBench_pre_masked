
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int input; int channel; } ;
struct TYPE_2__ {int camera_owner; int decoder_owner; } ;





 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vino_channel_settings *VAR_1)
{
 switch(VAR_1->input) {
 case 130:
 case 128:
  return VAR_0->decoder_owner == VAR_1->channel;
 case 129:
  return VAR_0->camera_owner == VAR_1->channel;
 default:
  return 0;
 }
}
