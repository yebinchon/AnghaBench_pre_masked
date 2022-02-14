
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {scalar_t__ lock; } ;
struct v4l2_fh {int vdev; struct v4l2_events* events; } ;
struct v4l2_events {scalar_t__ navailable; int wait; } ;
struct v4l2_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_fh*,struct v4l2_event*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct video_device_shadow* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(struct v4l2_fh *VAR_1, struct v4l2_event *VAR_2,
         int VAR_3)
{
 struct v4l2_events *VAR_4 = VAR_1->events;
 int VAR_5;
 struct video_device_shadow *VAR_6 = FUNC_3(VAR_1->vdev);

 if (VAR_3)
  return FUNC_0(VAR_1, VAR_2);


 if (VAR_6 && VAR_6->lock)
  FUNC_2(VAR_6->lock);

 do {
  VAR_5 = FUNC_4(VAR_4->wait,
            VAR_4->navailable != 0);
  if (VAR_5 < 0)
   break;

  VAR_5 = FUNC_0(VAR_1, VAR_2);
 } while (VAR_5 == -VAR_0);

 if (VAR_6 && VAR_6->lock)
  FUNC_1(VAR_6->lock);

 return VAR_5;
}
