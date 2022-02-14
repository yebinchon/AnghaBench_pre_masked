
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device_shadow {int fh_lock; } ;
struct v4l2_kevent {int list; } ;
struct v4l2_fh {int vdev; struct v4l2_events* events; } ;
struct v4l2_events {unsigned int nallocated; int free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct v4l2_kevent* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct video_device_shadow* FUNC_5 (int ) ;

int FUNC_6(struct v4l2_fh *VAR_2, unsigned int VAR_3)
{
 struct v4l2_events *VAR_4 = VAR_2->events;
 unsigned long VAR_5;
 struct video_device_shadow *VAR_6 = FUNC_5(VAR_2->vdev);

 if (!VAR_4 || !VAR_6) {
  FUNC_0(1);
  return -VAR_0;
 }

 while (VAR_4->nallocated < VAR_3) {
  struct v4l2_kevent *VAR_7;

  VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
  if (VAR_7 == ((void*)0))
   return -VAR_0;

  FUNC_3(&VAR_6->fh_lock, VAR_5);
  FUNC_2(&VAR_7->list, &VAR_4->free);
  VAR_4->nallocated++;
  FUNC_4(&VAR_6->fh_lock, VAR_5);
 }

 return 0;
}
