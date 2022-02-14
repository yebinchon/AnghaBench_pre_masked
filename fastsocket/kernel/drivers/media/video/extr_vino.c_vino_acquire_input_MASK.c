
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vino_channel_settings {scalar_t__ channel; int input; int data_norm; } ;
struct TYPE_10__ {int std; } ;
struct TYPE_7__ {int input; int data_norm; } ;
struct TYPE_6__ {int input; int data_norm; } ;
struct TYPE_9__ {scalar_t__ camera_owner; scalar_t__ decoder_owner; int input_lock; TYPE_2__ a; TYPE_1__ b; scalar_t__ decoder; scalar_t__ camera; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_13 ;
 TYPE_5__* VAR_14 ;
 TYPE_4__* VAR_15 ;
 int FUNC_4 (int) ;
 TYPE_3__* VAR_16 ;
 int FUNC_5 (struct vino_channel_settings*) ;
 int FUNC_6 (struct vino_channel_settings*) ;
 int FUNC_7 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_8(struct vino_channel_settings *VAR_17)
{
 unsigned long VAR_18;
 int VAR_19 = 0;

 FUNC_1("vino_acquire_input():\n");

 FUNC_2(&VAR_15->input_lock, VAR_18);


 if (VAR_15->camera
     && (VAR_15->camera_owner == VAR_8)) {
  VAR_15->camera_owner = VAR_17->channel;
  VAR_17->input = VAR_6;
  VAR_17->data_norm = VAR_3;
 } else if (VAR_15->decoder
     && (VAR_15->decoder_owner == VAR_8)) {
  int VAR_20;
  int VAR_21;
  v4l2_std_id VAR_22;

  VAR_20 = VAR_5;

  VAR_19 = FUNC_0(VAR_13, VAR_11,
    FUNC_4(VAR_20), 0, 0);
  if (VAR_19) {
   VAR_19 = -VAR_0;
   goto out;
  }

  FUNC_3(&VAR_15->input_lock, VAR_18);




  VAR_19 = FUNC_0(VAR_13, VAR_10, &VAR_22);
  if (!VAR_19) {
   for (VAR_21 = 0; VAR_21 < 3; VAR_21++) {
    if (VAR_14[VAR_21].std & VAR_22)
     break;
   }
   if (VAR_21 == 3)
    VAR_21 = VAR_4;
   VAR_19 = FUNC_0(VAR_9, VAR_12, VAR_22);
  }

  FUNC_2(&VAR_15->input_lock, VAR_18);

  if (VAR_19) {
   VAR_19 = -VAR_0;
   goto out;
  }

  VAR_15->decoder_owner = VAR_17->channel;

  VAR_17->input = VAR_20;
  VAR_17->data_norm = VAR_21;
 } else {
  VAR_17->input = (VAR_17->channel == VAR_2) ?
   VAR_15->b.input : VAR_15->a.input;
  VAR_17->data_norm = (VAR_17->channel == VAR_2) ?
   VAR_15->b.data_norm : VAR_15->a.data_norm;
 }

 if (VAR_17->input == VAR_7) {
  VAR_19 = -VAR_1;
  goto out;
 }

 FUNC_5(VAR_17);
 FUNC_7(VAR_17);
 FUNC_6(VAR_17);

 FUNC_1("vino_acquire_input(): %s\n", VAR_16[VAR_17->input].name);

out:
 FUNC_3(&VAR_15->input_lock, VAR_18);

 return VAR_19;
}
