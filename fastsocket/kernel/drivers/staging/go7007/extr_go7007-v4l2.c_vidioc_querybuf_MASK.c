
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int offset; } ;
struct v4l2_buffer {scalar_t__ type; unsigned int index; unsigned int length; TYPE_2__ m; int memory; int flags; } ;
struct go7007_file {unsigned int buf_count; int lock; TYPE_1__* bufs; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int state; scalar_t__ mapped; } ;




 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_buffer*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
      struct v4l2_buffer *VAR_9)
{
 struct go7007_file *VAR_10 = VAR_8;
 int VAR_11 = -VAR_0;
 unsigned int VAR_12;

 if (VAR_9->type != VAR_5)
  return VAR_11;

 VAR_12 = VAR_9->index;

 FUNC_1(&VAR_10->lock);
 if (VAR_12 >= VAR_10->buf_count)
  goto unlock_and_return;

 FUNC_0(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->index = VAR_12;
 VAR_9->type = VAR_5;

 switch (VAR_10->bufs[VAR_12].state) {
 case 128:
  VAR_9->flags = VAR_4;
  break;
 case 129:
  VAR_9->flags = VAR_2;
  break;
 default:
  VAR_9->flags = 0;
 }

 if (VAR_10->bufs[VAR_12].mapped)
  VAR_9->flags |= VAR_3;
 VAR_9->memory = VAR_6;
 VAR_9->m.offset = VAR_12 * VAR_1;
 VAR_9->length = VAR_1;
 FUNC_2(&VAR_10->lock);

 return 0;

unlock_and_return:
 FUNC_2(&VAR_10->lock);
 return VAR_11;
}
