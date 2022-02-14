
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {int * io_allowed; struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct common_obj {int buffer_queue; int lock; scalar_t__ started; } ;
struct channel_obj {scalar_t__ channel_id; size_t curr_sd_index; struct common_obj* common; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int * sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ,char*) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int FUNC_9(struct file *VAR_11, void *VAR_12,
    enum v4l2_buf_type VAR_13)
{

 struct vpif_fh *VAR_14 = VAR_12;
 struct channel_obj *VAR_15 = VAR_14->channel;
 struct common_obj *VAR_16 = &VAR_15->common[VAR_6];
 int VAR_17;

 FUNC_8(2, VAR_7, "vpif_streamoff\n");

 if (VAR_13 != VAR_4) {
  FUNC_8(1, VAR_7, "buffer type not supported\n");
  return -VAR_1;
 }


 if (!VAR_14->io_allowed[VAR_6]) {
  FUNC_8(1, VAR_7, "io not allowed\n");
  return -VAR_0;
 }


 if (!VAR_16->started) {
  FUNC_8(1, VAR_7, "channel->started\n");
  return -VAR_1;
 }

 if (FUNC_4(&VAR_16->lock))
  return -VAR_3;


 if (VAR_5 == VAR_15->channel_id) {
  FUNC_2(0);
  FUNC_0(0);
 } else {
  FUNC_3(0);
  FUNC_1(0);
 }

 VAR_16->started = 0;

 VAR_17 = FUNC_6(VAR_10.sd[VAR_15->curr_sd_index], VAR_9,
    VAR_8, 0);

 if (VAR_17 && (VAR_17 != -VAR_2))
  FUNC_8(1, VAR_7, "stream off failed in subdev\n");

 FUNC_5(&VAR_16->lock);

 return FUNC_7(&VAR_16->buffer_queue);
}
