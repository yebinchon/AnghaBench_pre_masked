
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_buffer {int dummy; } ;
struct video_device {scalar_t__ vfl_type; } ;
struct TYPE_4__ {int users; struct front_face* front; } ;
struct TYPE_3__ {int users; int context; } ;
struct poseidon {int state; int lock; int interface; int kref; TYPE_2__ vbi_data; TYPE_1__ video_data; int cur_transfer_mode; } ;
struct front_face {int queue_lock; int active; int * curr_frame; struct poseidon* pd; int q; void* type; } ;
struct file {struct front_face* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct front_face*) ;
 int FUNC_3 (int *) ;
 struct front_face* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct poseidon*) ;
 int VAR_12 ;
 int FUNC_9 (struct video_device*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_13 ;
 struct video_device* FUNC_13 (struct file*) ;
 struct poseidon* FUNC_14 (struct video_device*) ;
 int FUNC_15 (int *,int *,int *,int *,void*,int ,int,struct front_face*,int *) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_14)
{
 struct video_device *VAR_15 = FUNC_13(VAR_14);
 struct poseidon *VAR_16 = FUNC_14(VAR_15);
 struct front_face *VAR_17 = ((void*)0);
 int VAR_18 = -VAR_1;

 FUNC_6(&VAR_16->lock);
 FUNC_11(VAR_16->interface);

 if (VAR_15->vfl_type == VAR_9
  && !(VAR_16->state & VAR_3)) {
  VAR_17 = FUNC_4(sizeof(struct front_face), VAR_2);
  if (!VAR_17)
   goto out;

  VAR_16->cur_transfer_mode = VAR_13;
  FUNC_1(&VAR_16->video_data.context);

  VAR_18 = FUNC_8(VAR_16);
  if (VAR_18 < 0) {
   FUNC_2(VAR_17);
   VAR_18 = -1;
   goto out;
  }

  VAR_16->state |= VAR_3;
  VAR_17->type = VAR_6;
  VAR_16->video_data.users++;
  FUNC_9(VAR_15, VAR_11);

  FUNC_15(&VAR_17->q, &VAR_12,
    ((void*)0), &VAR_17->queue_lock,
    VAR_6,
    VAR_7,
    sizeof(struct videobuf_buffer),
    VAR_17, ((void*)0));
 } else if (VAR_15->vfl_type == VAR_10
  && !(VAR_16->state & VAR_4)) {
  VAR_17 = FUNC_4(sizeof(struct front_face), VAR_2);
  if (!VAR_17)
   goto out;

  VAR_16->state |= VAR_4;
  VAR_17->type = VAR_5;
  VAR_16->vbi_data.front = VAR_17;
  VAR_16->vbi_data.users++;

  FUNC_15(&VAR_17->q, &VAR_12,
    ((void*)0), &VAR_17->queue_lock,
    VAR_5,
    VAR_8,
    sizeof(struct videobuf_buffer),
    VAR_17, ((void*)0));
 } else {

  FUNC_5("other ");
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_17->pd = VAR_16;
 VAR_17->curr_frame = ((void*)0);
 FUNC_0(&VAR_17->active);
 FUNC_10(&VAR_17->queue_lock);

 VAR_14->private_data = VAR_17;
 FUNC_3(&VAR_16->kref);

 FUNC_7(&VAR_16->lock);
 return 0;
out:
 FUNC_12(VAR_16->interface);
 FUNC_7(&VAR_16->lock);
 return VAR_18;
}
