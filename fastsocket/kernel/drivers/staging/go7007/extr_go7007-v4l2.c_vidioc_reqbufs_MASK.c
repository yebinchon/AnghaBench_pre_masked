
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ type; scalar_t__ memory; scalar_t__ mapped; unsigned int count; unsigned int index; int state; struct go7007* go; } ;
struct go7007_file {unsigned int buf_count; int lock; struct v4l2_requestbuffers* bufs; struct go7007* go; } ;
struct go7007_buffer {int dummy; } ;
struct go7007 {int in_use; int hw_lock; scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct v4l2_requestbuffers*) ;
 struct v4l2_requestbuffers* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct v4l2_requestbuffers*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_7, void *VAR_8,
     struct v4l2_requestbuffers *VAR_9)
{
 struct go7007_file *VAR_10 = VAR_8;
 struct go7007 *VAR_11 = VAR_10->go;
 int VAR_12 = -VAR_1;
 unsigned int VAR_13, VAR_14;

 if (VAR_11->streaming)
  return VAR_12;

 if (VAR_9->type != VAR_5 ||
   VAR_9->memory != VAR_6)
  return -VAR_2;

 FUNC_3(&VAR_10->lock);
 for (VAR_14 = 0; VAR_14 < VAR_10->buf_count; ++VAR_14)
  if (VAR_10->bufs[VAR_14].mapped > 0)
   goto unlock_and_return;

 FUNC_3(&VAR_11->hw_lock);
 if (VAR_11->in_use > 0 && VAR_10->buf_count == 0) {
  FUNC_4(&VAR_11->hw_lock);
  goto unlock_and_return;
 }

 if (VAR_10->buf_count > 0)
  FUNC_0(VAR_10->bufs);

 VAR_12 = -VAR_3;
 VAR_13 = VAR_9->count;
 if (VAR_13 > 0) {
  if (VAR_13 < 2)
   VAR_13 = 2;
  if (VAR_13 > 32)
   VAR_13 = 32;

  VAR_10->bufs = FUNC_1(VAR_13 * sizeof(struct go7007_buffer),
         VAR_4);

  if (!VAR_10->bufs) {
   FUNC_4(&VAR_11->hw_lock);
   goto unlock_and_return;
  }

  FUNC_2(VAR_10->bufs, 0, VAR_13 * sizeof(struct go7007_buffer));

  for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
   VAR_10->bufs[VAR_14].go = VAR_11;
   VAR_10->bufs[VAR_14].index = VAR_14;
   VAR_10->bufs[VAR_14].state = VAR_0;
   VAR_10->bufs[VAR_14].mapped = 0;
  }

  VAR_11->in_use = 1;
 } else {
  VAR_11->in_use = 0;
 }

 VAR_10->buf_count = VAR_13;
 FUNC_4(&VAR_11->hw_lock);
 FUNC_4(&VAR_10->lock);

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->count = VAR_13;
 VAR_9->type = VAR_5;
 VAR_9->memory = VAR_6;

 return 0;

unlock_and_return:
 FUNC_4(&VAR_10->lock);
 return VAR_12;
}
