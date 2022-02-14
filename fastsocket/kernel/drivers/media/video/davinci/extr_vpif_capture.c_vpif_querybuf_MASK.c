
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_buffer {scalar_t__ type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct common_obj {scalar_t__ memory; int buffer_queue; TYPE_1__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct v4l2_buffer*) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
    struct v4l2_buffer *VAR_6)
{
 struct vpif_fh *VAR_7 = VAR_5;
 struct channel_obj *VAR_8 = VAR_7->channel;
 struct common_obj *VAR_9 = &VAR_8->common[VAR_2];

 FUNC_1(2, VAR_3, "vpif_querybuf\n");

 if (VAR_9->fmt.type != VAR_6->type)
  return -VAR_0;

 if (VAR_9->memory != VAR_1) {
  FUNC_1(1, VAR_3, "Invalid memory\n");
  return -VAR_0;
 }

 return FUNC_0(&VAR_9->buffer_queue, VAR_6);
}
