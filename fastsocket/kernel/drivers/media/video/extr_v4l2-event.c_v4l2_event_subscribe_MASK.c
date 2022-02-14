
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {int fh_lock; } ;
struct v4l2_subscribed_event {int list; int type; } ;
struct v4l2_fh {struct v4l2_events* events; int vdev; } ;
struct v4l2_events {int subscribed; } ;
struct v4l2_event_subscription {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct v4l2_subscribed_event*) ;
 struct v4l2_subscribed_event* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int * FUNC_7 (struct v4l2_fh*,int ) ;
 struct video_device_shadow* FUNC_8 (int ) ;

int FUNC_9(struct v4l2_fh *VAR_2,
    struct v4l2_event_subscription *VAR_3)
{
 struct v4l2_events *VAR_4 = VAR_2->events;
 struct v4l2_subscribed_event *VAR_5;
 unsigned long VAR_6;
 struct video_device_shadow *VAR_7 = FUNC_8(VAR_2->vdev);

 if (VAR_2->events == ((void*)0) || !VAR_7) {
  FUNC_1(1);
  return -VAR_0;
 }

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(&VAR_7->fh_lock, VAR_6);

 if (FUNC_7(VAR_2, VAR_3->type) == ((void*)0)) {
  FUNC_0(&VAR_5->list);
  VAR_5->type = VAR_3->type;

  FUNC_4(&VAR_5->list, &VAR_4->subscribed);
  VAR_5 = ((void*)0);
 }

 FUNC_6(&VAR_7->fh_lock, VAR_6);

 FUNC_2(VAR_5);

 return 0;
}
