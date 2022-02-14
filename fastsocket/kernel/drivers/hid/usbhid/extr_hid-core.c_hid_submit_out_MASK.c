
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {size_t outtail; int restart_work; int last_out; TYPE_2__* urbout; TYPE_1__* out; int outbuf; int iofl; } ;
struct hid_report {int size; scalar_t__ id; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_4__ {int transfer_buffer_length; int dev; } ;
struct TYPE_3__ {char* raw_report; struct hid_report* report; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct hid_device*) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_4)
{
 struct hid_report *VAR_5;
 char *VAR_6;
 struct usbhid_device *VAR_7 = VAR_4->driver_data;

 VAR_5 = VAR_7->out[VAR_7->outtail].report;
 VAR_6 = VAR_7->out[VAR_7->outtail].raw_report;

 if (!FUNC_6(VAR_1, &VAR_7->iofl)) {
  VAR_7->urbout->transfer_buffer_length = ((VAR_5->size - 1) >> 3) + 1 + (VAR_5->id > 0);
  VAR_7->urbout->dev = FUNC_2(VAR_4);
  if (VAR_6) {
   FUNC_4(VAR_7->outbuf, VAR_6,
    VAR_7->urbout->transfer_buffer_length);
   FUNC_3(VAR_6);
   VAR_7->out[VAR_7->outtail].raw_report = ((void*)0);
  }

  FUNC_0("submitting out urb\n");

  if (FUNC_7(VAR_7->urbout, VAR_0)) {
   FUNC_1("usb_submit_urb(out) failed");
   return -1;
  }
  VAR_7->last_out = VAR_2;
 } else {





  FUNC_5(VAR_3, &VAR_7->restart_work);
 }

 return 0;
}
