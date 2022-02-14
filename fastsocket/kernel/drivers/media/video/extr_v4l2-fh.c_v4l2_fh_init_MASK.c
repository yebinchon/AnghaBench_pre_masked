
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* ioctl_ops; int flags; } ;
struct v4l2_fh {int * events; struct video_device* vdev; int list; } ;
struct TYPE_2__ {scalar_t__ vidioc_subscribe_event; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct v4l2_fh*) ;

int FUNC_3(struct v4l2_fh *VAR_1, struct video_device *VAR_2)
{
 VAR_1->vdev = VAR_2;
 FUNC_0(&VAR_1->list);
 FUNC_1(VAR_0, &VAR_1->vdev->flags);





 if (VAR_2->ioctl_ops && VAR_2->ioctl_ops->vidioc_subscribe_event)
  return FUNC_2(VAR_1);

 VAR_1->events = ((void*)0);

 return 0;
}
