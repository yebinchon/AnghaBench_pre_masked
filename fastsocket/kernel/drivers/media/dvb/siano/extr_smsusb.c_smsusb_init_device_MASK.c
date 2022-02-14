
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct smsusb_device_t {int coredev; TYPE_3__* surbs; TYPE_4__* udev; int buffer_size; int response_alignment; } ;
struct smsdevice_params_t {int device_type; int devpath; struct smsusb_device_t* context; int sendrequest_handler; int num_buffers; int buffer_size; int * device; int flags; int detectmode_handler; int setmode_handler; } ;
struct SmsMsgHdr_ST {int dummy; } ;
typedef int params ;
struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int dev; TYPE_2__** ep_in; } ;
struct TYPE_9__ {int urb; struct smsusb_device_t* dev; } ;
struct TYPE_7__ {int wMaxPacketSize; } ;
struct TYPE_8__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (struct usb_interface*) ;
 struct smsusb_device_t* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smsdevice_params_t*,int ,int) ;
 int FUNC_4 (char*,...) ;
 TYPE_5__* FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct smsdevice_params_t*,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct smsusb_device_t*) ;
 int FUNC_11 (struct usb_interface*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,int ,int) ;
 int FUNC_14 (struct usb_interface*,struct smsusb_device_t*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_10, int VAR_11)
{
 struct smsdevice_params_t VAR_12;
 struct smsusb_device_t *VAR_13;
 int VAR_14, VAR_15;


 VAR_13 = FUNC_1(sizeof(struct smsusb_device_t), VAR_1);
 if (!VAR_13) {
  FUNC_4("kzalloc(sizeof(struct smsusb_device_t) failed");
  return -VAR_0;
 }

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 FUNC_14(VAR_10, VAR_13);
 VAR_13->udev = FUNC_0(VAR_10);

 VAR_12.device_type = FUNC_5(VAR_11)->type;

 switch (VAR_12.device_type) {
 case 129:
  VAR_13->buffer_size = VAR_5;

  VAR_12.setmode_handler = VAR_8;
  VAR_12.detectmode_handler = VAR_7;
  break;
 default:
  FUNC_4("Unspecified sms device type!");

 case 131:
 case 130:
 case 128:
  VAR_13->buffer_size = VAR_6;
  VAR_13->response_alignment =
      FUNC_2(VAR_13->udev->ep_in[1]->desc.wMaxPacketSize) -
      sizeof(struct SmsMsgHdr_ST);

  VAR_12.flags |= VAR_4;
  break;
 }

 VAR_12.device = &VAR_13->udev->dev;
 VAR_12.buffer_size = VAR_13->buffer_size;
 VAR_12.num_buffers = VAR_2;
 VAR_12.sendrequest_handler = VAR_9;
 VAR_12.context = VAR_13;
 FUNC_13(VAR_13->udev, VAR_12.devpath, sizeof(VAR_12.devpath));


 VAR_15 = FUNC_7(&VAR_12, &VAR_13->coredev);
 if (VAR_15 < 0) {
  FUNC_4("smscore_register_device(...) failed, rc %d", VAR_15);
  FUNC_11(VAR_10);
  return VAR_15;
 }

 FUNC_8(VAR_13->coredev, VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  VAR_13->surbs[VAR_14].dev = VAR_13;
  FUNC_12(&VAR_13->surbs[VAR_14].urb);
 }

 FUNC_6("smsusb_start_streaming(...).");
 VAR_15 = FUNC_10(VAR_13);
 if (VAR_15 < 0) {
  FUNC_4("smsusb_start_streaming(...) failed");
  FUNC_11(VAR_10);
  return VAR_15;
 }

 VAR_15 = FUNC_9(VAR_13->coredev);
 if (VAR_15 < 0) {
  FUNC_4("smscore_start_device(...) failed");
  FUNC_11(VAR_10);
  return VAR_15;
 }

 FUNC_6("device %p created", VAR_13);

 return VAR_15;
}
