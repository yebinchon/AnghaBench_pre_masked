
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpif_fh {struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct common_obj {int lock; } ;
struct channel_obj {size_t curr_sd_index; struct common_obj* common; } ;
struct TYPE_2__ {int * sd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,char*) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, v4l2_std_id *VAR_8)
{
 struct vpif_fh *VAR_9 = VAR_7;
 struct channel_obj *VAR_10 = VAR_9->channel;
 struct common_obj *VAR_11 = &VAR_10->common[VAR_1];
 int VAR_12 = 0;

 FUNC_3(2, VAR_2, "vpif_querystd\n");

 if (FUNC_0(&VAR_11->lock))
  return -VAR_0;


 VAR_12 = FUNC_2(VAR_5.sd[VAR_10->curr_sd_index], VAR_4,
    VAR_3, VAR_8);
 if (VAR_12 < 0)
  FUNC_3(1, VAR_2, "Failed to set standard for sub devices\n");

 FUNC_1(&VAR_11->lock);
 return VAR_12;
}
