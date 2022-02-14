
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uvd {int curframe; int last_error; int video_endp; int streaming; TYPE_4__* sbuf; int ifaceAltActive; int iface; scalar_t__ user_data; struct usb_device* dev; } ;
struct usb_interface {int dummy; } ;
struct usb_host_interface {TYPE_2__* endpoint; } ;
struct usb_device {int dummy; } ;
struct urb {int interval; int number_of_packets; int transfer_buffer_length; TYPE_3__* iso_frame_desc; void* complete; int transfer_buffer; void* transfer_flags; void* pipe; struct uvd* context; struct usb_device* dev; } ;
struct konicawc {size_t speed; struct urb** sts_urb; int * last_data_urb; int * sts_buf; } ;
struct TYPE_8__ {struct urb* urb; int data; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_5__ {int wMaxPacketSize; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


 int FUNC_0 (struct uvd*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct uvd*) ;
 void* VAR_7 ;
 int FUNC_4 (int ) ;
 int * VAR_8 ;
 struct usb_host_interface* FUNC_5 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_6 (struct usb_device*,int ) ;
 void* FUNC_7 (struct usb_device*,int) ;
 int FUNC_8 (struct usb_device*,int ,int ) ;
 int FUNC_9 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_10(struct uvd *VAR_9)
{
 struct usb_device *VAR_10 = VAR_9->dev;
 int VAR_11, VAR_12;
 struct konicawc *VAR_13 = (struct konicawc *)VAR_9->user_data;
 int VAR_14;
 struct usb_interface *VAR_15;
 struct usb_host_interface *VAR_16 = ((void*)0);

 VAR_15 = FUNC_6(VAR_10, VAR_9->iface);
 if (VAR_15)
  VAR_16 = FUNC_5(VAR_15,
    VAR_8[VAR_13->speed]);
 if (!VAR_16)
  return -VAR_2;
 VAR_14 = FUNC_4(VAR_16->endpoint[1].desc.wMaxPacketSize);
 FUNC_1(1, "pktsz = %d", VAR_14);
 if (!FUNC_0(VAR_9)) {
  FUNC_2("Camera is not operational");
  return -VAR_1;
 }
 VAR_9->curframe = -1;
 FUNC_3(VAR_9);

 VAR_11 = FUNC_8(VAR_10, VAR_9->iface, VAR_9->ifaceAltActive);
 if (VAR_11 < 0) {
  FUNC_2("usb_set_interface error");
  VAR_9->last_error = VAR_11;
  return -VAR_0;
 }


 for (VAR_11=0; VAR_11 < VAR_6; VAR_11++) {
  int VAR_17, VAR_18;
  struct urb *VAR_19 = VAR_9->sbuf[VAR_11].urb;
  VAR_19->dev = VAR_10;
  VAR_19->context = VAR_9;
  VAR_19->pipe = FUNC_7(VAR_10, VAR_9->video_endp);
  VAR_19->interval = 1;
  VAR_19->transfer_flags = VAR_5;
  VAR_19->transfer_buffer = VAR_9->sbuf[VAR_11].data;
  VAR_19->complete = VAR_7;
  VAR_19->number_of_packets = VAR_3;
  VAR_19->transfer_buffer_length = VAR_14 * VAR_3;
  for (VAR_17=VAR_18=0; VAR_17 < VAR_3; VAR_17++, VAR_18 += VAR_14) {
   VAR_19->iso_frame_desc[VAR_17].offset = VAR_18;
   VAR_19->iso_frame_desc[VAR_17].length = VAR_14;
  }

  VAR_19 = VAR_13->sts_urb[VAR_11];
  VAR_19->dev = VAR_10;
  VAR_19->context = VAR_9;
  VAR_19->pipe = FUNC_7(VAR_10, VAR_9->video_endp-1);
  VAR_19->interval = 1;
  VAR_19->transfer_flags = VAR_5;
  VAR_19->transfer_buffer = VAR_13->sts_buf[VAR_11];
  VAR_19->complete = VAR_7;
  VAR_19->number_of_packets = VAR_3;
  VAR_19->transfer_buffer_length = VAR_3;
  for (VAR_17=0; VAR_17 < VAR_3; VAR_17++) {
   VAR_19->iso_frame_desc[VAR_17].offset = VAR_17;
   VAR_19->iso_frame_desc[VAR_17].length = 1;
  }
 }

 VAR_13->last_data_urb = ((void*)0);


 for (VAR_11=0; VAR_11 < VAR_6; VAR_11++) {
  VAR_12 = FUNC_9(VAR_13->sts_urb[VAR_11], VAR_4);
  if (VAR_12)
   FUNC_2("usb_submit_isoc(%d) ret %d", VAR_11, VAR_12);

  VAR_12 = FUNC_9(VAR_9->sbuf[VAR_11].urb, VAR_4);
  if (VAR_12)
   FUNC_2 ("usb_submit_isoc(%d) ret %d", VAR_11, VAR_12);
 }

 VAR_9->streaming = 1;
 FUNC_1(1, "streaming=1 video_endp=$%02x", VAR_9->video_endp);
 return 0;
}
