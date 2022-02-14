
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
 int VAR_2 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;
 int FUNC_1 (int,int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, struct v4l2_buffer *VAR_5)
{
 struct vpif_fh *VAR_6 = VAR_4;
 struct channel_obj *VAR_7 = VAR_6->channel;
 struct common_obj *VAR_8 = &VAR_7->common[VAR_1];

 FUNC_1(2, VAR_2, "vpif_dqbuf\n");

 return FUNC_0(&VAR_8->buffer_queue, VAR_5,
     VAR_3->f_flags & VAR_0);
}
