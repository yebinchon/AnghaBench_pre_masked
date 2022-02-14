
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct video_obj {unsigned int output_id; } ;
struct file {int dummy; } ;
struct common_obj {int lock; scalar_t__ started; } ;
struct channel_obj {struct common_obj* common; struct video_obj video; } ;
struct TYPE_2__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int ,int ,int ,unsigned int,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 struct vpif_fh *VAR_9 = VAR_7;
 struct channel_obj *VAR_10 = VAR_9->channel;
 struct video_obj *VAR_11 = &VAR_10->video;
 struct common_obj *VAR_12 = &VAR_10->common[VAR_2];
 int VAR_13 = 0;

 if (FUNC_0(&VAR_12->lock))
  return -VAR_1;

 if (VAR_12->started) {
  FUNC_3("Streaming in progress\n");
  VAR_13 = -VAR_0;
  goto s_output_exit;
 }

 VAR_13 = FUNC_2(&VAR_5.v4l2_dev, 1, VAR_4,
       VAR_3, 0, VAR_8, 0);

 if (VAR_13 < 0)
  FUNC_3("Failed to set output standard\n");

 VAR_11->output_id = VAR_8;

s_output_exit:
 FUNC_1(&VAR_12->lock);
 return VAR_13;
}
