
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_device {int name; } ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int release; int * ioctl_ops; int * fops; struct v4l2_device* v4l2_dev; int name; } ;
struct dsbr100_device {int curfreq; struct dsbr100_device* transfer_buffer; TYPE_1__ videodev; int status; int usbdev; scalar_t__ removed; int lock; struct v4l2_device v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct dsbr100_device*) ;
 struct dsbr100_device* FUNC_2 (int ,int ) ;
 struct dsbr100_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct usb_interface*,struct dsbr100_device*) ;
 int FUNC_7 (int *,struct v4l2_device*) ;
 int FUNC_8 (struct v4l2_device*) ;
 int FUNC_9 (struct v4l2_device*,char*) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,struct dsbr100_device*) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_12,
    const struct usb_device_id *VAR_13)
{
 struct dsbr100_device *VAR_14;
 struct v4l2_device *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(sizeof(struct dsbr100_device), VAR_4);

 if (!VAR_14)
  return -VAR_1;

 VAR_14->transfer_buffer = FUNC_2(VAR_6, VAR_4);

 if (!(VAR_14->transfer_buffer)) {
  FUNC_1(VAR_14);
  return -VAR_1;
 }

 VAR_15 = &VAR_14->v4l2_dev;

 VAR_16 = FUNC_7(&VAR_12->dev, VAR_15);
 if (VAR_16 < 0) {
  FUNC_9(VAR_15, "couldn't register v4l2_device\n");
  FUNC_1(VAR_14->transfer_buffer);
  FUNC_1(VAR_14);
  return VAR_16;
 }

 FUNC_5(VAR_14->videodev.name, VAR_15->name, sizeof(VAR_14->videodev.name));
 VAR_14->videodev.v4l2_dev = VAR_15;
 VAR_14->videodev.fops = &VAR_9;
 VAR_14->videodev.ioctl_ops = &VAR_10;
 VAR_14->videodev.release = VAR_11;

 FUNC_4(&VAR_14->lock);

 VAR_14->removed = 0;
 VAR_14->usbdev = FUNC_0(VAR_12);
 VAR_14->curfreq = VAR_2 * VAR_3;
 VAR_14->status = VAR_5;

 FUNC_11(&VAR_14->videodev, VAR_14);

 VAR_16 = FUNC_10(&VAR_14->videodev, VAR_7, VAR_8);
 if (VAR_16 < 0) {
  FUNC_9(VAR_15, "couldn't register video device\n");
  FUNC_8(VAR_15);
  FUNC_1(VAR_14->transfer_buffer);
  FUNC_1(VAR_14);
  return -VAR_0;
 }
 FUNC_6(VAR_12, VAR_14);
 return 0;
}
