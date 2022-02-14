
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video_queue {int type; int flags; int irqqueue; int mainqueue; int irqlock; int mutex; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct uvc_video_queue *VAR_1, enum v4l2_buf_type VAR_2,
      int VAR_3)
{
 FUNC_1(&VAR_1->mutex);
 FUNC_2(&VAR_1->irqlock);
 FUNC_0(&VAR_1->mainqueue);
 FUNC_0(&VAR_1->irqqueue);
 VAR_1->flags = VAR_3 ? VAR_0 : 0;
 VAR_1->type = VAR_2;
}
