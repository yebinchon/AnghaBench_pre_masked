
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_fh {int initialized; int prio; struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct common_obj {int lock; scalar_t__ started; } ;
struct TYPE_3__ {int stdid; } ;
struct channel_obj {scalar_t__ channel_id; size_t curr_sd_index; TYPE_1__ video; int prio; struct common_obj* common; } ;
struct TYPE_4__ {int * sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct channel_obj*) ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (char*) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_7 (struct channel_obj*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_10, void *VAR_11, v4l2_std_id *VAR_12)
{
 struct vpif_fh *VAR_13 = VAR_11;
 struct channel_obj *VAR_14 = VAR_13->channel;
 struct common_obj *VAR_15 = &VAR_14->common[VAR_5];
 int VAR_16 = 0;

 FUNC_5(2, VAR_7, "vpif_s_std\n");

 if (VAR_15->started) {
  FUNC_6("streaming in progress\n");
  return -VAR_0;
 }

 if ((VAR_3 == VAR_14->channel_id) ||
     (VAR_4 == VAR_14->channel_id)) {
  if (!VAR_13->initialized) {
   FUNC_5(1, VAR_7, "Channel Busy\n");
   return -VAR_0;
  }
 }

 VAR_16 = FUNC_2(&VAR_14->prio, &VAR_13->prio);
 if (0 != VAR_16)
  return VAR_16;

 VAR_13->initialized = 1;


 if (FUNC_0(&VAR_15->lock))
  return -VAR_2;

 VAR_14->video.stdid = *VAR_12;


 if (FUNC_7(VAR_14)) {
  VAR_16 = -VAR_1;
  FUNC_6("Error getting the standard info\n");
  goto s_std_exit;
 }


 FUNC_4(VAR_14);


 VAR_16 = FUNC_3(VAR_9.sd[VAR_14->curr_sd_index], VAR_6,
    VAR_8, *VAR_12);
 if (VAR_16 < 0)
  FUNC_5(1, VAR_7, "Failed to set standard for sub devices\n");

s_std_exit:
 FUNC_1(&VAR_15->lock);
 return VAR_16;
}
