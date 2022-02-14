
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {int fh_lock; } ;
struct v4l2_subscribed_event {int list; } ;
struct v4l2_fh {int vdev; } ;
struct v4l2_event_subscription {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subscribed_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct v4l2_subscribed_event* FUNC_4 (struct v4l2_fh*,scalar_t__) ;
 int FUNC_5 (struct v4l2_fh*) ;
 struct video_device_shadow* FUNC_6 (int ) ;

int FUNC_7(struct v4l2_fh *VAR_2,
      struct v4l2_event_subscription *VAR_3)
{
 struct v4l2_subscribed_event *VAR_4;
 unsigned long VAR_5;
 struct video_device_shadow *VAR_6 = FUNC_6(VAR_2->vdev);

 if (VAR_3->type == VAR_1) {
  FUNC_5(VAR_2);
  return 0;
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_2(&VAR_6->fh_lock, VAR_5);

 VAR_4 = FUNC_4(VAR_2, VAR_3->type);
 if (VAR_4 != ((void*)0))
  FUNC_1(&VAR_4->list);

 FUNC_3(&VAR_6->fh_lock, VAR_5);

 FUNC_0(VAR_4);

 return 0;
}
