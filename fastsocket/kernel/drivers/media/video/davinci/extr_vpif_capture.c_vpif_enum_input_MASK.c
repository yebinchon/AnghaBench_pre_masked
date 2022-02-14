
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct vpif_capture_config {struct vpif_capture_chan_config* chan_config; } ;
struct vpif_capture_chan_config {size_t input_count; TYPE_1__* inputs; } ;
struct v4l2_input {size_t index; } ;
struct file {int dummy; } ;
struct channel_obj {size_t channel_id; } ;
struct TYPE_4__ {struct vpif_capture_config* platform_data; } ;
struct TYPE_3__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_input*,int *,int) ;
 int FUNC_1 (int,int ,char*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_input *VAR_5)
{

 struct vpif_capture_config *VAR_6 = VAR_2->platform_data;
 struct vpif_capture_chan_config *VAR_7;
 struct vpif_fh *VAR_8 = VAR_4;
 struct channel_obj *VAR_9 = VAR_8->channel;

 VAR_7 = &VAR_6->chan_config[VAR_9->channel_id];

 if (VAR_5->index >= VAR_7->input_count) {
  FUNC_1(1, VAR_1, "Invalid input index\n");
  return -VAR_0;
 }

 FUNC_0(VAR_5, &VAR_7->inputs[VAR_5->index].input,
  sizeof(*VAR_5));
 return 0;
}
