
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {scalar_t__ speed; int dev; int devnum; } ;
struct sisusb_usb_data {int ibufsize; int numobufs; int obufsize; int completein; int present; int ready; struct usb_device* sisusb_dev; int wait_q; void* SiS_Pr; scalar_t__* urbstatus; TYPE_1__* urbout_context; void** sisurbout; void* sisurbin; void** obuf; void* ibuf; int ioportbase; int mmiosize; int mmiobase; int vrambase; int minor; int lock; int kref; } ;
struct SiS_Private {int dummy; } ;
struct TYPE_2__ {int urbindex; void* sisusb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct sisusb_usb_data*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 struct sisusb_usb_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sisusb_usb_data*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_11 (struct sisusb_usb_data*) ;
 int FUNC_12 (struct sisusb_usb_data*) ;
 scalar_t__ FUNC_13 (struct sisusb_usb_data*,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (struct sisusb_usb_data*) ;
 void* FUNC_15 (int ,int ) ;
 int FUNC_16 (struct usb_interface*,int *) ;
 int FUNC_17 (struct usb_device*) ;
 int FUNC_18 (struct usb_interface*,int *) ;
 int FUNC_19 (struct usb_interface*,struct sisusb_usb_data*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_20(struct usb_interface *VAR_15,
   const struct usb_device_id *VAR_16)
{
 struct usb_device *VAR_17 = FUNC_4(VAR_15);
 struct sisusb_usb_data *VAR_18;
 int VAR_19 = 0, VAR_20;

 FUNC_2(&VAR_17->dev, "USB2VGA dongle found at address %d\n",
  VAR_17->devnum);


 if (!(VAR_18 = FUNC_8(sizeof(*VAR_18), VAR_2))) {
  FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to allocate memory for private data\n");
  return -VAR_1;
 }
 FUNC_7(&VAR_18->kref);

 FUNC_9(&(VAR_18->lock));


 if ((VAR_19 = FUNC_18(VAR_15, &VAR_14))) {
  FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to get a minor for device %d\n",
   VAR_17->devnum);
  VAR_19 = -VAR_0;
  goto error_1;
 }

 VAR_18->sisusb_dev = VAR_17;
 VAR_18->minor = VAR_15->minor;
 VAR_18->vrambase = VAR_8;
 VAR_18->mmiobase = VAR_9;
 VAR_18->mmiosize = VAR_10;
 VAR_18->ioportbase = VAR_7;



 VAR_18->ibufsize = VAR_5;
 if (!(VAR_18->ibuf = FUNC_6(VAR_5, VAR_2))) {
  FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to allocate memory for input buffer");
  VAR_19 = -VAR_1;
  goto error_2;
 }

 VAR_18->numobufs = 0;
 VAR_18->obufsize = VAR_6;
 for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
  if (!(VAR_18->obuf[VAR_20] = FUNC_6(VAR_6, VAR_2))) {
   if (VAR_20 == 0) {
    FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to allocate memory for output buffer\n");
    VAR_19 = -VAR_1;
    goto error_3;
   }
   break;
  } else
   VAR_18->numobufs++;

 }


 if (!(VAR_18->sisurbin = FUNC_15(0, VAR_2))) {
  FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to allocate URBs\n");
  VAR_19 = -VAR_1;
  goto error_3;
 }
 VAR_18->completein = 1;

 for (VAR_20 = 0; VAR_20 < VAR_18->numobufs; VAR_20++) {
  if (!(VAR_18->sisurbout[VAR_20] = FUNC_15(0, VAR_2))) {
   FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to allocate URBs\n");
   VAR_19 = -VAR_1;
   goto error_4;
  }
  VAR_18->urbout_context[VAR_20].sisusb = (void *)VAR_18;
  VAR_18->urbout_context[VAR_20].urbindex = VAR_20;
  VAR_18->urbstatus[VAR_20] = 0;
 }

 FUNC_2(&VAR_18->sisusb_dev->dev, "Allocated %d output buffers\n", VAR_18->numobufs);
 FUNC_3(&VAR_18->wait_q);

 FUNC_19(VAR_15, VAR_18);

 FUNC_17(VAR_18->sisusb_dev);

 VAR_18->present = 1;

 if (VAR_17->speed == VAR_11) {
  int VAR_21 = 1;







  if (FUNC_13(VAR_18, VAR_21))
   FUNC_1(&VAR_18->sisusb_dev->dev, "Failed to early initialize device\n");

 } else
  FUNC_2(&VAR_18->sisusb_dev->dev, "Not attached to USB 2.0 hub, deferring init\n");

 VAR_18->ready = 1;
 return 0;

error_4:
 FUNC_12(VAR_18);
error_3:
 FUNC_11(VAR_18);
error_2:
 FUNC_16(VAR_15, &VAR_14);
error_1:
 FUNC_5(VAR_18);
 return VAR_19;
}
