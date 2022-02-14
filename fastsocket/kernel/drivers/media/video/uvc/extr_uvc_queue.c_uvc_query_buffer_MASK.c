
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {size_t index; } ;
struct uvc_video_queue {size_t count; int mutex; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct uvc_video_queue *VAR_1,
  struct v4l2_buffer *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_1->mutex);
 if (VAR_2->index >= VAR_1->count) {
  VAR_3 = -VAR_0;
  goto done;
 }

 FUNC_0(&VAR_1->buffer[VAR_2->index], VAR_2);

done:
 FUNC_2(&VAR_1->mutex);
 return VAR_3;
}
