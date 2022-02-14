
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_device {int name; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct amradio_device {double curfreq; int stereo; struct amradio_device* buffer; TYPE_1__* videodev; int lock; int usbdev; scalar_t__ users; scalar_t__ removed; struct v4l2_device v4l2_dev; } ;
struct TYPE_5__ {int release; int * ioctl_ops; int * fops; struct v4l2_device* v4l2_dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct amradio_device*) ;
 struct amradio_device* FUNC_3 (int ,int ) ;
 struct amradio_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct usb_interface*,struct amradio_device*) ;
 int FUNC_8 (int *,struct v4l2_device*) ;
 int FUNC_9 (struct v4l2_device*) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (TYPE_1__*,struct amradio_device*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_10,
    const struct usb_device_id *VAR_11)
{
 struct amradio_device *VAR_12;
 struct v4l2_device *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(sizeof(struct amradio_device), VAR_4);

 if (!VAR_12) {
  FUNC_0(&VAR_10->dev, "kmalloc for amradio_device failed\n");
  return -VAR_2;
 }

 VAR_12->buffer = FUNC_3(VAR_0, VAR_4);

 if (!VAR_12->buffer) {
  FUNC_0(&VAR_10->dev, "kmalloc for radio->buffer failed\n");
  FUNC_2(VAR_12);
  return -VAR_2;
 }

 VAR_13 = &VAR_12->v4l2_dev;
 VAR_14 = FUNC_8(&VAR_10->dev, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_10->dev, "couldn't register v4l2_device\n");
  FUNC_2(VAR_12->buffer);
  FUNC_2(VAR_12);
  return VAR_14;
 }

 VAR_12->videodev = FUNC_10();

 if (!VAR_12->videodev) {
  FUNC_0(&VAR_10->dev, "video_device_alloc failed\n");
  FUNC_2(VAR_12->buffer);
  FUNC_2(VAR_12);
  return -VAR_2;
 }

 FUNC_6(VAR_12->videodev->name, VAR_13->name, sizeof(VAR_12->videodev->name));
 VAR_12->videodev->v4l2_dev = VAR_13;
 VAR_12->videodev->fops = &VAR_7;
 VAR_12->videodev->ioctl_ops = &VAR_8;
 VAR_12->videodev->release = VAR_9;

 VAR_12->removed = 0;
 VAR_12->users = 0;
 VAR_12->usbdev = FUNC_1(VAR_10);
 VAR_12->curfreq = 95.16 * VAR_3;
 VAR_12->stereo = -1;

 FUNC_5(&VAR_12->lock);

 FUNC_13(VAR_12->videodev, VAR_12);

 VAR_14 = FUNC_12(VAR_12->videodev, VAR_5, VAR_6);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_10->dev, "could not register video device\n");
  FUNC_11(VAR_12->videodev);
  FUNC_9(VAR_13);
  FUNC_2(VAR_12->buffer);
  FUNC_2(VAR_12);
  return -VAR_1;
 }

 FUNC_7(VAR_10, VAR_12);
 return 0;
}
