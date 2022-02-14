
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_buffer {scalar_t__ type; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct common_obj {int buffer_queue; TYPE_1__ fmt; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_buffer *VAR_4)
{
 struct vpif_fh *VAR_5 = VAR_3;
 struct channel_obj *VAR_6 = VAR_5->channel;
 struct common_obj *VAR_7 = &VAR_6->common[VAR_1];

 if (VAR_7->fmt.type != VAR_4->type)
  return -VAR_0;

 return FUNC_0(&VAR_7->buffer_queue, VAR_4);
}
