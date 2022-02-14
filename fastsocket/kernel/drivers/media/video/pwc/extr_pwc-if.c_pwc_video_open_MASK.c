
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct pwc_device {int usb_init; size_t vsize; int vframes; int type; int modlock; scalar_t__ vopen; int vcompression; scalar_t__ vsnapshot; scalar_t__ error_status; scalar_t__ visoc_errors; scalar_t__ vframes_error; scalar_t__ vframes_dumped; scalar_t__ vframe_count; scalar_t__* image_used; TYPE_1__* vdev; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct pwc_device*) ;
 int FUNC_5 (struct pwc_device*,int) ;
 int FUNC_6 (struct pwc_device*) ;
 int FUNC_7 (struct pwc_device*) ;
 int FUNC_8 (struct pwc_device*,int*) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct pwc_device*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct pwc_device*,int,int ) ;
 int FUNC_12 (struct pwc_device*,int) ;
 scalar_t__ FUNC_13 (struct pwc_device*,int ,int ) ;
 int FUNC_14 (struct pwc_device*,int ,int ,int,int ,int ) ;
 struct video_device* FUNC_15 (struct file*) ;
 struct pwc_device* FUNC_16 (struct video_device*) ;

__attribute__((used)) static int FUNC_17(struct file *VAR_8)
{
 int VAR_9, VAR_10;
 struct video_device *VAR_11 = FUNC_15(VAR_8);
 struct pwc_device *VAR_12;

 FUNC_1(">> video_open called(vdev = 0x%p).\n", VAR_11);

 VAR_12 = FUNC_16(VAR_11);
 FUNC_0(!VAR_12);
 if (VAR_12->vopen) {
  FUNC_1("I'm busy, someone is using the device.\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_12->modlock);
 FUNC_6(VAR_12);
 if (!VAR_12->usb_init) {
  FUNC_1("Doing first time initialization.\n");
  VAR_12->usb_init = 1;


  VAR_10 = FUNC_8(VAR_12, &VAR_9);
  if (VAR_10 >= 0)
  {
   FUNC_1("This %s camera is equipped with a %s (%d).\n",
     VAR_12->vdev->name,
     FUNC_10(VAR_9), VAR_9);
  }
 }


 if (VAR_5) {
  VAR_9 = FUNC_5(VAR_12, 1);
  if (VAR_9 < 0)
   FUNC_1("Failed to restore power to the camera! (%d)\n", VAR_9);
 }

 if (FUNC_13(VAR_12, VAR_4, VAR_3) < 0)
  FUNC_1("Failed to set LED on/off time.\n");



 VAR_9 = FUNC_4(VAR_12);
 if (VAR_9 < 0) {
  FUNC_1("Failed to allocate buffers memory.\n");
  FUNC_7(VAR_12);
  FUNC_3(&VAR_12->modlock);
  return VAR_9;
 }


 FUNC_9(VAR_12);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_12->image_used[VAR_9] = 0;
 VAR_12->vframe_count = 0;
 VAR_12->vframes_dumped = 0;
 VAR_12->vframes_error = 0;
 VAR_12->visoc_errors = 0;
 VAR_12->error_status = 0;
 FUNC_6(VAR_12);


 VAR_12->vsnapshot = 0;





 VAR_9 = FUNC_14(VAR_12, VAR_6[VAR_12->vsize].x, VAR_6[VAR_12->vsize].y, VAR_12->vframes, VAR_12->vcompression, 0);
 if (VAR_9) {
  unsigned int VAR_13;
  FUNC_1("First attempt at set_video_mode failed.\n");
  if (VAR_12->type>= 730)
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_1;

  VAR_9 = FUNC_14(VAR_12,
           VAR_6[VAR_13].x,
           VAR_6[VAR_13].y,
           10,
           VAR_12->vcompression,
           0);
 }
 if (VAR_9) {
  FUNC_1("Second attempt at set_video_mode failed.\n");
  FUNC_7(VAR_12);
  FUNC_3(&VAR_12->modlock);
  return VAR_9;
 }


 FUNC_12(VAR_12, 0x7fff);
 FUNC_11(VAR_12, 1, 0);

 VAR_12->vopen++;
 VAR_8->private_data = VAR_11;
 FUNC_3(&VAR_12->modlock);
 FUNC_1("<< video_open() returns 0.\n");
 return 0;
}
