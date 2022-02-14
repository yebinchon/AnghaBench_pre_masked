
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_line6_variax {int dummy; } ;
struct usb_line6_pod {int dummy; } ;
struct usb_line6 {int message_length; int interface_number; int ifcdev; TYPE_3__* usbdev; int buffer_message; TYPE_1__* line6midi; } ;
struct urb {int actual_length; int transfer_buffer; int status; scalar_t__ context; } ;
struct MidiBuffer {int dummy; } ;
struct TYPE_5__ {int idProduct; } ;
struct TYPE_6__ {TYPE_2__ descriptor; } ;
struct TYPE_4__ {int midi_mask_receive; struct MidiBuffer midibuf_in; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct usb_line6*,int ,int) ;
 int FUNC_4 (struct usb_line6*) ;
 int FUNC_5 (struct usb_line6*,char,int ,int) ;
 int FUNC_6 (struct MidiBuffer*,int) ;
 int FUNC_7 (struct MidiBuffer*,int ,int ) ;
 scalar_t__ FUNC_8 (struct MidiBuffer*,int ) ;
 int FUNC_9 (struct MidiBuffer*,int ,int) ;
 int FUNC_10 (struct usb_line6_pod*) ;
 int FUNC_11 (struct usb_line6_variax*) ;

__attribute__((used)) static void FUNC_12(struct urb *VAR_3)
{
 struct usb_line6 *VAR_4 = (struct usb_line6 *)VAR_3->context;
 struct MidiBuffer *VAR_5 = &VAR_4->line6midi->midibuf_in;
 int VAR_6;

 if (VAR_3->status == -VAR_0)
  return;





 VAR_6 = FUNC_9(VAR_5, VAR_3->transfer_buffer, VAR_3->actual_length);

 if (VAR_6 < VAR_3->actual_length) {
  FUNC_6(VAR_5, VAR_6);
  FUNC_0(FUNC_1(VAR_4->ifcdev, "%d %d buffer overflow - message skipped\n", VAR_6, VAR_3->actual_length));
 }

 for (;;) {
  VAR_6 = FUNC_7(VAR_5, VAR_4->buffer_message, VAR_1);

  if (VAR_6 == 0)
   break;


  if (FUNC_8(VAR_5, VAR_4->line6midi->midi_mask_receive))
   continue;

  VAR_4->message_length = VAR_6;



  FUNC_3(VAR_4, VAR_4->buffer_message, VAR_6);

  switch (VAR_4->usbdev->descriptor.idProduct) {
  case 137:
  case 136:
  case 135:
  case 133:
  case 131:
  case 134:
   FUNC_10((struct usb_line6_pod *)VAR_4);
   break;

  case 132:
   switch (VAR_4->interface_number) {
   case 129:
    FUNC_10((struct usb_line6_pod *)VAR_4);
    break;

   case 128:
    FUNC_11((struct usb_line6_variax *)VAR_4);
    break;

   default:
    FUNC_1(VAR_4->ifcdev, "PODxt Live interface %d not supported\n", VAR_4->interface_number);
   }
   break;

  case 130:
   FUNC_11((struct usb_line6_variax *)VAR_4);
   break;

  default:
   VAR_2;
  }
 }

 FUNC_4(VAR_4);
}
