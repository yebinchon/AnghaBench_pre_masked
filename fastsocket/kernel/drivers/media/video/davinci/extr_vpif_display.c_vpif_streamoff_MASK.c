
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {int * io_allowed; struct channel_obj* channel; } ;
struct file {int dummy; } ;
struct common_obj {int started; int buffer_queue; int lock; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_7, void *VAR_8,
    enum v4l2_buf_type VAR_9)
{
 struct vpif_fh *VAR_10 = VAR_8;
 struct channel_obj *VAR_11 = VAR_10->channel;
 struct common_obj *VAR_12 = &VAR_11->common[VAR_6];

 if (VAR_9 != VAR_3) {
  FUNC_7("buffer type not supported\n");
  return -VAR_1;
 }

 if (!VAR_10->io_allowed[VAR_6]) {
  FUNC_7("fh->io_allowed\n");
  return -VAR_0;
 }

 if (!VAR_12->started) {
  FUNC_7("channel->started\n");
  return -VAR_1;
 }

 if (FUNC_4(&VAR_12->lock))
  return -VAR_2;

 if (VAR_9 == VAR_3) {

  if (VAR_4 == VAR_11->channel_id) {
   FUNC_2(0);
   FUNC_0(0);
  }
  if ((VAR_5 == VAR_11->channel_id) ||
     (2 == VAR_12->started)) {
   FUNC_3(0);
   FUNC_1(0);
  }
 }

 VAR_12->started = 0;
 FUNC_5(&VAR_12->lock);

 return FUNC_6(&VAR_12->buffer_queue);
}
