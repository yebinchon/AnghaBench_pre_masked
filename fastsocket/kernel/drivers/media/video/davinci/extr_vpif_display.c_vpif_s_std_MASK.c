
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_fh {struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct TYPE_12__ {int width; int bytesperline; } ;
struct TYPE_13__ {TYPE_4__ pix; } ;
struct TYPE_14__ {TYPE_5__ fmt; } ;
struct common_obj {int lock; TYPE_6__ fmt; scalar_t__ started; } ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_11__ {TYPE_2__ std_info; } ;
struct TYPE_9__ {int stdid; } ;
struct channel_obj {size_t channel_id; TYPE_3__ vpifparams; TYPE_1__ video; struct common_obj* common; } ;
struct TYPE_16__ {int* channel_bufsize; } ;
struct TYPE_15__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 TYPE_8__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_3 (struct channel_obj*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct channel_obj*) ;
 TYPE_7__ VAR_10 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_11, void *VAR_12, v4l2_std_id *VAR_13)
{
 struct vpif_fh *VAR_14 = VAR_12;
 struct channel_obj *VAR_15 = VAR_14->channel;
 struct common_obj *VAR_16 = &VAR_15->common[VAR_4];
 int VAR_17 = 0;

 if (!(*VAR_13 & VAR_0))
  return -VAR_2;

 if (VAR_16->started) {
  FUNC_4("streaming in progress\n");
  return -VAR_1;
 }


 if (FUNC_0(&VAR_16->lock))
  return -VAR_3;

 VAR_15->video.stdid = *VAR_13;

 if (FUNC_5(VAR_15)) {
  FUNC_4("Error getting the standard info\n");
  return -VAR_2;
 }

 if ((VAR_15->vpifparams.std_info.width *
  VAR_15->vpifparams.std_info.height * 2) >
  VAR_5.channel_bufsize[VAR_15->channel_id]) {
  FUNC_4("invalid std for this size\n");
  VAR_17 = -VAR_2;
  goto s_std_exit;
 }

 VAR_16->fmt.fmt.pix.bytesperline = VAR_16->fmt.fmt.pix.width;

 FUNC_3(VAR_15);

 VAR_17 = FUNC_2(&VAR_10.v4l2_dev, 1, VAR_9,
      VAR_8, *VAR_13);
 if (VAR_17 < 0) {
  FUNC_4("Failed to set output standard\n");
  goto s_std_exit;
 }

 VAR_17 = FUNC_2(&VAR_10.v4l2_dev, 1, VAR_6,
       VAR_7, *VAR_13);
 if (VAR_17 < 0)
  FUNC_4("Failed to set standard for sub devices\n");

s_std_exit:
 FUNC_1(&VAR_16->lock);
 return VAR_17;
}
