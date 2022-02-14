
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_video_queue {unsigned int count; int mutex; int flags; TYPE_1__* buffer; int mainqueue; scalar_t__ buf_used; } ;
struct TYPE_2__ {int state; scalar_t__ error; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uvc_video_queue*,int ) ;
 scalar_t__ FUNC_4 (struct uvc_video_queue*) ;

int FUNC_5(struct uvc_video_queue *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;

 FUNC_1(&VAR_3->mutex);
 if (VAR_4) {
  if (FUNC_4(VAR_3)) {
   VAR_6 = -VAR_0;
   goto done;
  }
  VAR_3->flags |= VAR_2;
  VAR_3->buf_used = 0;
 } else {
  FUNC_3(VAR_3, 0);
  FUNC_0(&VAR_3->mainqueue);

  for (VAR_5 = 0; VAR_5 < VAR_3->count; ++VAR_5) {
   VAR_3->buffer[VAR_5].error = 0;
   VAR_3->buffer[VAR_5].state = VAR_1;
  }

  VAR_3->flags &= ~VAR_2;
 }

done:
 FUNC_2(&VAR_3->mutex);
 return VAR_6;
}
