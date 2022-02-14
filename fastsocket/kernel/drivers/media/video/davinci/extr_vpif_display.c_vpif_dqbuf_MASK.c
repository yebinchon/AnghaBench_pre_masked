
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpif_fh {struct channel_obj* channel; } ;
struct v4l2_buffer {int dummy; } ;
struct file {int f_flags; } ;
struct common_obj {int buffer_queue; } ;
struct channel_obj {struct common_obj* common; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 struct vpif_fh *VAR_5 = VAR_3;
 struct channel_obj *VAR_6 = VAR_5->channel;
 struct common_obj *VAR_7 = &VAR_6->common[VAR_1];

 return FUNC_0(&VAR_7->buffer_queue, VAR_4,
     (VAR_2->f_flags & VAR_0));
}
