
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int frame_wait_queue; int queue_lock; int queue_mutex; } ;
struct vino_channel_settings {unsigned int channel; int decimation; TYPE_3__* vdev; TYPE_1__ fb_queue; int capture_lock; int mutex; scalar_t__ capturing; int data_norm; int data_format; scalar_t__ users; scalar_t__ alpha; int input; } ;
struct video_device {int dummy; } ;
struct TYPE_8__ {int * v4l2_dev; int release; int name; } ;
struct TYPE_7__ {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*) ;
 int VAR_4 ;
 TYPE_3__* FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (TYPE_3__*,struct vino_channel_settings*) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vino_channel_settings*) ;
 int FUNC_9 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_10(struct vino_channel_settings *VAR_8,
     unsigned int VAR_9, const char *VAR_10)
{
 VAR_8->channel = VAR_9;
 VAR_8->input = VAR_3;
 VAR_8->alpha = 0;
 VAR_8->users = 0;
 VAR_8->data_format = VAR_1;
 VAR_8->data_norm = VAR_2;
 VAR_8->decimation = 1;
 FUNC_8(VAR_8);
 FUNC_9(VAR_8);

 VAR_8->capturing = 0;

 FUNC_2(&VAR_8->mutex);
 FUNC_3(&VAR_8->capture_lock);

 FUNC_2(&VAR_8->fb_queue.queue_mutex);
 FUNC_3(&VAR_8->fb_queue.queue_lock);
 FUNC_0(&VAR_8->fb_queue.frame_wait_queue);

 VAR_8->vdev = FUNC_5();
 if (!VAR_8->vdev) {
  FUNC_7(VAR_7);
  return -VAR_0;
 }
 VAR_7++;

 FUNC_1(VAR_8->vdev, &VAR_4,
        sizeof(struct video_device));
 FUNC_4(VAR_8->vdev->name, VAR_10);
 VAR_8->vdev->release = VAR_5;
 VAR_8->vdev->v4l2_dev = &VAR_6->v4l2_dev;

 FUNC_6(VAR_8->vdev, VAR_8);

 return 0;
}
