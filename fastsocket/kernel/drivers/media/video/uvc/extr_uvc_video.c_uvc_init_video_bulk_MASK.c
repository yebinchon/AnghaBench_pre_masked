
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct TYPE_6__ {unsigned int max_payload_size; } ;
struct TYPE_5__ {unsigned int dwMaxPayloadTransferSize; } ;
struct uvc_streaming {scalar_t__ type; struct urb** urb; int * urb_dma; int * urb_buffer; TYPE_3__* dev; TYPE_2__ bulk; TYPE_1__ ctrl; } ;
struct TYPE_8__ {int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_4__ desc; } ;
struct urb {int transfer_dma; int transfer_flags; } ;
typedef int gfp_t ;
struct TYPE_7__ {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 struct urb* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct urb*,int ,unsigned int,int ,unsigned int,int ,struct uvc_streaming*) ;
 unsigned int FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (int ,int ) ;
 unsigned int FUNC_6 (struct uvc_streaming*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (struct uvc_streaming*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct uvc_streaming *VAR_5,
 struct usb_host_endpoint *VAR_6, gfp_t VAR_7)
{
 struct urb *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;
 u16 VAR_12;
 u32 VAR_13;

 VAR_12 = FUNC_0(VAR_6->desc.wMaxPacketSize) & 0x07ff;
 VAR_13 = VAR_5->ctrl.dwMaxPayloadTransferSize;
 VAR_5->bulk.max_payload_size = VAR_13;

 VAR_9 = FUNC_6(VAR_5, VAR_13, VAR_12, VAR_7);
 if (VAR_9 == 0)
  return -VAR_0;

 VAR_13 = VAR_9 * VAR_12;

 if (FUNC_2(&VAR_6->desc))
  VAR_10 = FUNC_4(VAR_5->dev->udev,
           VAR_6->desc.bEndpointAddress);
 else
  VAR_10 = FUNC_5(VAR_5->dev->udev,
           VAR_6->desc.bEndpointAddress);

 if (VAR_5->type == VAR_3)
  VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_8 = FUNC_1(0, VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_7(VAR_5, 1);
   return -VAR_0;
  }

  FUNC_3(VAR_8, VAR_5->dev->udev, VAR_10,
   VAR_5->urb_buffer[VAR_11], VAR_13, VAR_4,
   VAR_5);
  VAR_8->transfer_flags = VAR_1;
  VAR_8->transfer_dma = VAR_5->urb_dma[VAR_11];

  VAR_5->urb[VAR_11] = VAR_8;
 }

 return 0;
}
