
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef int u16 ;
struct TYPE_5__ {unsigned int dwMaxVideoFrameSize; } ;
struct uvc_streaming {struct urb** urb; int * urb_dma; int * urb_buffer; TYPE_2__* dev; TYPE_1__ ctrl; } ;
struct TYPE_7__ {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct urb {int transfer_flags; unsigned int number_of_packets; unsigned int transfer_buffer_length; TYPE_4__* iso_frame_desc; int complete; int transfer_dma; int transfer_buffer; int interval; int pipe; struct uvc_streaming* context; int dev; } ;
typedef int gfp_t ;
struct TYPE_8__ {unsigned int offset; int length; } ;
struct TYPE_6__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 struct urb* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct uvc_streaming*,unsigned int,int,int ) ;
 int FUNC_4 (struct uvc_streaming*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct uvc_streaming *VAR_5,
 struct usb_host_endpoint *VAR_6, gfp_t VAR_7)
{
 struct urb *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 u16 VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_0(VAR_6->desc.wMaxPacketSize);
 VAR_12 = (VAR_12 & 0x07ff) * (1 + ((VAR_12 >> 11) & 3));
 VAR_13 = VAR_5->ctrl.dwMaxVideoFrameSize;

 VAR_9 = FUNC_3(VAR_5, VAR_13, VAR_12, VAR_7);
 if (VAR_9 == 0)
  return -VAR_0;

 VAR_13 = VAR_9 * VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
  VAR_8 = FUNC_1(VAR_9, VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_4(VAR_5, 1);
   return -VAR_0;
  }

  VAR_8->dev = VAR_5->dev->udev;
  VAR_8->context = VAR_5;
  VAR_8->pipe = FUNC_2(VAR_5->dev->udev,
    VAR_6->desc.bEndpointAddress);
  VAR_8->transfer_flags = VAR_1 | VAR_2;
  VAR_8->interval = VAR_6->desc.bInterval;
  VAR_8->transfer_buffer = VAR_5->urb_buffer[VAR_10];
  VAR_8->transfer_dma = VAR_5->urb_dma[VAR_10];
  VAR_8->complete = VAR_4;
  VAR_8->number_of_packets = VAR_9;
  VAR_8->transfer_buffer_length = VAR_13;

  for (VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11) {
   VAR_8->iso_frame_desc[VAR_11].offset = VAR_11 * VAR_12;
   VAR_8->iso_frame_desc[VAR_11].length = VAR_12;
  }

  VAR_5->urb[VAR_10] = VAR_8;
 }

 return 0;
}
