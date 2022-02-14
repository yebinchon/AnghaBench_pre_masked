
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {scalar_t__ channel; scalar_t__ input; } ;
struct TYPE_2__ {scalar_t__ camera_owner; scalar_t__ decoder_owner; int input_lock; struct vino_channel_settings a; struct vino_channel_settings b; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_3(struct vino_channel_settings *VAR_7)
{
 struct vino_channel_settings *VAR_8 = (VAR_7->channel == VAR_0) ?
  &VAR_6->b : &VAR_6->a;
 unsigned long VAR_9;

 FUNC_0("vino_release_input():\n");

 FUNC_1(&VAR_6->input_lock, VAR_9);




 if (VAR_6->camera_owner == VAR_7->channel) {
  if (VAR_8->input == VAR_2) {
   VAR_6->camera_owner = VAR_8->channel;
  } else {
   VAR_6->camera_owner = VAR_5;
  }
 } else if (VAR_6->decoder_owner == VAR_7->channel) {
  if ((VAR_8->input == VAR_1) ||
    (VAR_8->input == VAR_4)) {
   VAR_6->decoder_owner = VAR_8->channel;
  } else {
   VAR_6->decoder_owner = VAR_5;
  }
 }
 VAR_7->input = VAR_3;

 FUNC_2(&VAR_6->input_lock, VAR_9);
}
