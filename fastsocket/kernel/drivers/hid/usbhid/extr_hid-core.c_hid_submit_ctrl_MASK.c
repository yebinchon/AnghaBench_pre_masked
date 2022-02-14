
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbhid_device {size_t ctrltail; int bufsize; int ifnum; int restart_work; int last_ctrl; TYPE_3__* urbctrl; TYPE_2__* cr; TYPE_1__* ctrl; int ctrlbuf; int iofl; } ;
struct hid_report {int size; int id; int type; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_6__ {int transfer_buffer_length; int dev; int pipe; } ;
struct TYPE_5__ {unsigned char bRequestType; scalar_t__ bRequest; void* wLength; void* wIndex; void* wValue; } ;
struct TYPE_4__ {char* raw_report; unsigned char dir; struct hid_report* report; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,void*,void*,void*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct hid_device*) ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int *) ;
 int VAR_8 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_13(struct hid_device *VAR_9)
{
 struct hid_report *VAR_10;
 unsigned char VAR_11;
 char *VAR_12;
 int VAR_13;
 struct usbhid_device *VAR_14 = VAR_9->driver_data;

 VAR_10 = VAR_14->ctrl[VAR_14->ctrltail].report;
 VAR_12 = VAR_14->ctrl[VAR_14->ctrltail].raw_report;
 VAR_11 = VAR_14->ctrl[VAR_14->ctrltail].dir;

 if (!FUNC_8(VAR_1, &VAR_14->iofl)) {
  VAR_13 = ((VAR_10->size - 1) >> 3) + 1 + (VAR_10->id > 0);
  if (VAR_11 == VAR_4) {
   VAR_14->urbctrl->pipe = FUNC_11(FUNC_4(VAR_9), 0);
   VAR_14->urbctrl->transfer_buffer_length = VAR_13;
   if (VAR_12) {
    FUNC_6(VAR_14->ctrlbuf, VAR_12, VAR_13);
    FUNC_5(VAR_12);
    VAR_14->ctrl[VAR_14->ctrltail].raw_report = ((void*)0);
   }
  } else {
   int VAR_15, VAR_16;

   VAR_14->urbctrl->pipe = FUNC_10(FUNC_4(VAR_9), 0);
   VAR_15 = FUNC_9(FUNC_4(VAR_9), VAR_14->urbctrl->pipe, 0);
   if (VAR_15 > 0) {
    VAR_16 = FUNC_0(VAR_13, VAR_15);
    VAR_16 *= VAR_15;
    if (VAR_16 > VAR_14->bufsize)
     VAR_16 = VAR_14->bufsize;
   } else
    VAR_16 = 0;
   VAR_14->urbctrl->transfer_buffer_length = VAR_16;
  }
  VAR_14->urbctrl->dev = FUNC_4(VAR_9);

  VAR_14->cr->bRequestType = VAR_6 | VAR_5 | VAR_11;
  VAR_14->cr->bRequest = (VAR_11 == VAR_4) ? VAR_3 : VAR_2;
  VAR_14->cr->wValue = FUNC_1(((VAR_10->type + 1) << 8) | VAR_10->id);
  VAR_14->cr->wIndex = FUNC_1(VAR_14->ifnum);
  VAR_14->cr->wLength = FUNC_1(VAR_13);

  FUNC_2("submitting ctrl urb: %s wValue=0x%04x wIndex=0x%04x wLength=%u\n",
   VAR_14->cr->bRequest == VAR_3 ? "Set_Report" : "Get_Report",
   VAR_14->cr->wValue, VAR_14->cr->wIndex, VAR_14->cr->wLength);

  if (FUNC_12(VAR_14->urbctrl, VAR_0)) {
   FUNC_3("usb_submit_urb(ctrl) failed");
   return -1;
  }
  VAR_14->last_ctrl = VAR_7;
 } else {





  FUNC_7(VAR_8, &VAR_14->restart_work);
 }

 return 0;
}
