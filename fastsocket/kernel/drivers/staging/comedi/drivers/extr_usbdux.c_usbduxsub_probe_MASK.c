
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {TYPE_2__* altsetting; struct device dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {scalar_t__ speed; int dev; } ;
struct urb {int dummy; } ;
struct TYPE_19__ {int probed; int ifnum; int high_speed; int numOfInBuffers; int numOfOutBuffers; int sizePwmBuf; scalar_t__ pwm_cmd_running; scalar_t__ ao_cmd_running; scalar_t__ ai_cmd_running; TYPE_7__* urbPwm; TYPE_6__** urbOut; struct usb_device* usbdev; TYPE_4__** urbIn; void* outBuffer; void* insnBuffer; void* inBuffer; void* dux_commands; void* dac_commands; struct usb_interface* interface; int sem; } ;
struct TYPE_18__ {void* transfer_buffer; } ;
struct TYPE_17__ {int number_of_packets; int transfer_buffer_length; int interval; TYPE_5__* iso_frame_desc; int complete; void* transfer_buffer; void* transfer_flags; int pipe; int * context; struct usb_device* dev; } ;
struct TYPE_16__ {int length; scalar_t__ offset; } ;
struct TYPE_15__ {int number_of_packets; int transfer_buffer_length; TYPE_3__* iso_frame_desc; int complete; void* transfer_buffer; void* transfer_flags; int pipe; int * context; struct usb_device* dev; } ;
struct TYPE_14__ {int length; scalar_t__ offset; } ;
struct TYPE_12__ {int bInterfaceNumber; } ;
struct TYPE_13__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,char*,int *,int ,TYPE_8__*,int ) ;
 int VAR_20 ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (struct usb_device*,int ) ;
 int FUNC_12 (struct usb_device*,int,int) ;
 int FUNC_13 (struct usb_interface*,TYPE_8__*) ;
 int FUNC_14 (struct usb_device*,int ) ;
 int VAR_21 ;
 TYPE_8__* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_25,
      const struct usb_device_id *VAR_26)
{
 struct usb_device *VAR_27 = FUNC_5(VAR_25);
 struct device *VAR_28 = &VAR_25->dev;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 FUNC_0(VAR_28, "comedi_: usbdux_: "
  "finding a free structure for the usb-device\n");

 FUNC_3(&VAR_20);

 VAR_30 = -1;
 for (VAR_29 = 0; VAR_29 < VAR_12; VAR_29++) {
  if (!(VAR_22[VAR_29].probed)) {
   VAR_30 = VAR_29;
   break;
  }
 }


 if (VAR_30 == -1) {
  FUNC_1(VAR_28, "Too many usbdux-devices connected.\n");
  FUNC_9(&VAR_20);
  return -VAR_0;
 }
 FUNC_0(VAR_28, "comedi_: usbdux: "
  "usbduxsub[%d] is ready to connect to comedi.\n", VAR_30);

 FUNC_4(&(VAR_22[VAR_30].sem));

 VAR_22[VAR_30].usbdev = VAR_27;


 VAR_22[VAR_30].interface = VAR_25;

 VAR_22[VAR_30].ifnum = VAR_25->altsetting->desc.bInterfaceNumber;


 FUNC_13(VAR_25, &(VAR_22[VAR_30]));

 FUNC_0(VAR_28, "comedi_: usbdux: ifnum=%d\n", VAR_22[VAR_30].ifnum);


 VAR_22[VAR_30].high_speed =
     (VAR_22[VAR_30].usbdev->speed == VAR_19);


 VAR_22[VAR_30].dac_commands = FUNC_6(VAR_11, VAR_4);
 if (!VAR_22[VAR_30].dac_commands) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "error alloc space for dac commands\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }

 VAR_22[VAR_30].dux_commands = FUNC_6(VAR_15, VAR_4);
 if (!VAR_22[VAR_30].dux_commands) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "error alloc space for dac commands\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }

 VAR_22[VAR_30].inBuffer = FUNC_6(VAR_13, VAR_4);
 if (!(VAR_22[VAR_30].inBuffer)) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "could not alloc space for inBuffer\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }

 VAR_22[VAR_30].insnBuffer = FUNC_6(VAR_14, VAR_4);
 if (!(VAR_22[VAR_30].insnBuffer)) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "could not alloc space for insnBuffer\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }

 VAR_22[VAR_30].outBuffer = FUNC_6(VAR_16, VAR_4);
 if (!(VAR_22[VAR_30].outBuffer)) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "could not alloc space for outBuffer\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }

 VAR_29 = FUNC_12(VAR_22[VAR_30].usbdev,
         VAR_22[VAR_30].ifnum, 3);
 if (VAR_29 < 0) {
  FUNC_1(VAR_28, "comedi_: usbdux%d: "
   "could not set alternate setting 3 in high speed.\n",
   VAR_30);
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_1;
 }
 if (VAR_22[VAR_30].high_speed)
  VAR_22[VAR_30].numOfInBuffers = VAR_8;
 else
  VAR_22[VAR_30].numOfInBuffers = VAR_7;

 VAR_22[VAR_30].urbIn =
     FUNC_6(sizeof(struct urb *) * VAR_22[VAR_30].numOfInBuffers,
      VAR_4);
 if (!(VAR_22[VAR_30].urbIn)) {
  FUNC_1(VAR_28, "comedi_: usbdux: Could not alloc. urbIn array\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }
 for (VAR_29 = 0; VAR_29 < VAR_22[VAR_30].numOfInBuffers; VAR_29++) {

  VAR_22[VAR_30].urbIn[VAR_29] = FUNC_10(1, VAR_4);
  if (VAR_22[VAR_30].urbIn[VAR_29] == ((void*)0)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "Could not alloc. urb(%d)\n", VAR_30, VAR_29);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
  VAR_22[VAR_30].urbIn[VAR_29]->dev = VAR_22[VAR_30].usbdev;


  VAR_22[VAR_30].urbIn[VAR_29]->context = ((void*)0);
  VAR_22[VAR_30].urbIn[VAR_29]->pipe =
      FUNC_11(VAR_22[VAR_30].usbdev, VAR_5);
  VAR_22[VAR_30].urbIn[VAR_29]->transfer_flags = VAR_18;
  VAR_22[VAR_30].urbIn[VAR_29]->transfer_buffer =
      FUNC_6(VAR_13, VAR_4);
  if (!(VAR_22[VAR_30].urbIn[VAR_29]->transfer_buffer)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "could not alloc. transb.\n", VAR_30);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
  VAR_22[VAR_30].urbIn[VAR_29]->complete = VAR_23;
  VAR_22[VAR_30].urbIn[VAR_29]->number_of_packets = 1;
  VAR_22[VAR_30].urbIn[VAR_29]->transfer_buffer_length = VAR_13;
  VAR_22[VAR_30].urbIn[VAR_29]->iso_frame_desc[0].offset = 0;
  VAR_22[VAR_30].urbIn[VAR_29]->iso_frame_desc[0].length = VAR_13;
 }


 if (VAR_22[VAR_30].high_speed)
  VAR_22[VAR_30].numOfOutBuffers = VAR_10;
 else
  VAR_22[VAR_30].numOfOutBuffers = VAR_9;

 VAR_22[VAR_30].urbOut =
     FUNC_6(sizeof(struct urb *) * VAR_22[VAR_30].numOfOutBuffers,
      VAR_4);
 if (!(VAR_22[VAR_30].urbOut)) {
  FUNC_1(VAR_28, "comedi_: usbdux: "
   "Could not alloc. urbOut array\n");
  FUNC_8(&(VAR_22[VAR_30]));
  FUNC_9(&VAR_20);
  return -VAR_2;
 }
 for (VAR_29 = 0; VAR_29 < VAR_22[VAR_30].numOfOutBuffers; VAR_29++) {

  VAR_22[VAR_30].urbOut[VAR_29] = FUNC_10(1, VAR_4);
  if (VAR_22[VAR_30].urbOut[VAR_29] == ((void*)0)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "Could not alloc. urb(%d)\n", VAR_30, VAR_29);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
  VAR_22[VAR_30].urbOut[VAR_29]->dev = VAR_22[VAR_30].usbdev;


  VAR_22[VAR_30].urbOut[VAR_29]->context = ((void*)0);
  VAR_22[VAR_30].urbOut[VAR_29]->pipe =
      FUNC_14(VAR_22[VAR_30].usbdev, VAR_6);
  VAR_22[VAR_30].urbOut[VAR_29]->transfer_flags = VAR_18;
  VAR_22[VAR_30].urbOut[VAR_29]->transfer_buffer =
      FUNC_6(VAR_16, VAR_4);
  if (!(VAR_22[VAR_30].urbOut[VAR_29]->transfer_buffer)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "could not alloc. transb.\n", VAR_30);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
  VAR_22[VAR_30].urbOut[VAR_29]->complete = VAR_24;
  VAR_22[VAR_30].urbOut[VAR_29]->number_of_packets = 1;
  VAR_22[VAR_30].urbOut[VAR_29]->transfer_buffer_length = VAR_16;
  VAR_22[VAR_30].urbOut[VAR_29]->iso_frame_desc[0].offset = 0;
  VAR_22[VAR_30].urbOut[VAR_29]->iso_frame_desc[0].length =
      VAR_16;
  if (VAR_22[VAR_30].high_speed) {

   VAR_22[VAR_30].urbOut[VAR_29]->interval = 8;
  } else {

   VAR_22[VAR_30].urbOut[VAR_29]->interval = 1;
  }
 }


 if (VAR_22[VAR_30].high_speed) {

  VAR_22[VAR_30].sizePwmBuf = 512;
  VAR_22[VAR_30].urbPwm = FUNC_10(0, VAR_4);
  if (VAR_22[VAR_30].urbPwm == ((void*)0)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "Could not alloc. pwm urb\n", VAR_30);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
  VAR_22[VAR_30].urbPwm->transfer_buffer =
      FUNC_6(VAR_22[VAR_30].sizePwmBuf, VAR_4);
  if (!(VAR_22[VAR_30].urbPwm->transfer_buffer)) {
   FUNC_1(VAR_28, "comedi_: usbdux%d: "
    "could not alloc. transb. for pwm\n", VAR_30);
   FUNC_8(&(VAR_22[VAR_30]));
   FUNC_9(&VAR_20);
   return -VAR_2;
  }
 } else {
  VAR_22[VAR_30].urbPwm = ((void*)0);
  VAR_22[VAR_30].sizePwmBuf = 0;
 }

 VAR_22[VAR_30].ai_cmd_running = 0;
 VAR_22[VAR_30].ao_cmd_running = 0;
 VAR_22[VAR_30].pwm_cmd_running = 0;


 VAR_22[VAR_30].probed = 1;
 FUNC_9(&VAR_20);

 VAR_31 = FUNC_7(VAR_17,
          VAR_3,
          "usbdux_firmware.bin",
          &VAR_27->dev,
          VAR_4,
          VAR_22 + VAR_30,
          VAR_21);

 if (VAR_31) {
  FUNC_1(VAR_28, "Could not load firmware (err=%d)\n", VAR_31);
  return VAR_31;
 }

 FUNC_2(VAR_28, "comedi_: usbdux%d "
   "has been successfully initialised.\n", VAR_30);

 return 0;
}
