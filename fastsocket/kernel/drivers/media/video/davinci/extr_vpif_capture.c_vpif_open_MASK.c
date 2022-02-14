
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_params {int dummy; } ;
struct vpif_fh {int initialized; int prio; scalar_t__* io_allowed; struct channel_obj* channel; } ;
struct vpif_capture_config {int subdev_count; int * subdev_info; } ;
struct video_obj {scalar_t__ input_idx; } ;
struct video_device {int dummy; } ;
struct file {struct vpif_fh* private_data; } ;
struct common_obj {int lock; } ;
struct channel_obj {int initialized; int prio; int usrs; int vpifparams; int * curr_subdev_info; struct common_obj* common; struct video_obj video; } ;
struct TYPE_4__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_3__ {scalar_t__* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 struct vpif_fh* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 struct video_device* FUNC_5 (struct file*) ;
 struct channel_obj* FUNC_6 (struct video_device*) ;
 int FUNC_7 (int,int ,char*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static int FUNC_9(struct file *VAR_9)
{
 struct vpif_capture_config *VAR_10 = VAR_7->platform_data;
 struct video_device *VAR_11 = FUNC_5(VAR_9);
 struct common_obj *VAR_12;
 struct video_obj *VAR_13;
 struct channel_obj *VAR_14;
 struct vpif_fh *VAR_15;
 int VAR_16, VAR_17 = 0;

 FUNC_7(2, VAR_6, "vpif_open\n");

 VAR_14 = FUNC_6(VAR_11);

 VAR_13 = &VAR_14->video;
 VAR_12 = &VAR_14->common[VAR_5];

 if (FUNC_2(&VAR_12->lock))
  return -VAR_2;

 if (((void*)0) == VAR_14->curr_subdev_info) {




  for (VAR_16 = 0; VAR_16 < VAR_10->subdev_count; VAR_16++) {
   if (VAR_8.sd[VAR_16]) {

    VAR_14->curr_subdev_info = &VAR_10->subdev_info[VAR_16];

    VAR_13->input_idx = 0;
    break;
   }
  }
  if (VAR_16 == VAR_10->subdev_count) {
   FUNC_8("No sub device registered\n");
   VAR_17 = -VAR_0;
   goto exit;
  }
 }


 VAR_15 = FUNC_0(sizeof(struct vpif_fh), VAR_3);
 if (((void*)0) == VAR_15) {
  FUNC_8("unable to allocate memory for file handle object\n");
  VAR_17 = -VAR_1;
  goto exit;
 }


 VAR_9->private_data = VAR_15;
 VAR_15->channel = VAR_14;
 VAR_15->initialized = 0;

 if (!VAR_14->initialized) {
  VAR_15->initialized = 1;
  VAR_14->initialized = 1;
  FUNC_1(&(VAR_14->vpifparams), 0, sizeof(struct vpif_params));
 }

 VAR_14->usrs++;

 VAR_15->io_allowed[VAR_5] = 0;

 VAR_15->prio = VAR_4;
 FUNC_4(&VAR_14->prio, &VAR_15->prio);
exit:
 FUNC_3(&VAR_12->lock);
 return VAR_17;
}
