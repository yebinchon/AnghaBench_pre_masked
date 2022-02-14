
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {int initialized; int prio; struct channel_obj* channel; } ;
struct v4l2_pix_format {int dummy; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct common_obj {int lock; struct v4l2_format fmt; scalar_t__ started; } ;
struct channel_obj {scalar_t__ channel_id; int prio; struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct channel_obj*,struct v4l2_pix_format*) ;
 int FUNC_4 (int,int ,char*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6, void *VAR_7,
    struct v4l2_format *VAR_8)
{
 struct vpif_fh *VAR_9 = VAR_7;
 struct v4l2_pix_format *VAR_10;
 struct channel_obj *VAR_11 = VAR_9->channel;
 struct common_obj *VAR_12 = &VAR_11->common[VAR_4];
 int VAR_13 = 0;

 if ((VAR_2 == VAR_11->channel_id)
     || (VAR_3 == VAR_11->channel_id)) {
  if (!VAR_9->initialized) {
   FUNC_4(1, VAR_5, "Channel Busy\n");
   return -VAR_0;
  }


  VAR_13 = FUNC_2(&VAR_11->prio, &VAR_9->prio);
  if (0 != VAR_13)
   return VAR_13;
  VAR_9->initialized = 1;
 }

 if (VAR_12->started) {
  FUNC_4(1, VAR_5, "Streaming in progress\n");
  return -VAR_0;
 }

 VAR_10 = &VAR_8->fmt.pix;

 VAR_13 = FUNC_3(VAR_11, VAR_10);
 if (VAR_13)
  return VAR_13;


 VAR_12->fmt.fmt.pix = *VAR_10;

 if (FUNC_0(&VAR_12->lock))
  return -VAR_1;

 VAR_12->fmt = *VAR_8;
 FUNC_1(&VAR_12->lock);

 return 0;
}
