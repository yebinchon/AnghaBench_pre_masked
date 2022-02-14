
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wdm_device {int wMaxCommand; struct wdm_device* irq; struct wdm_device* orq; struct wdm_device* ubuf; TYPE_6__* validity; void* sbuf; void* wMaxPacketSize; struct usb_interface* intf; TYPE_5__* response; void* inbuf; void* bMaxPacketSize0; void* command; int rxwork; int inum; int wait; int iuspin; int plock; int rlock; int wlock; } ;
struct usb_interface {scalar_t__ minor; int dev; struct usb_host_interface* cur_altsetting; TYPE_1__* altsetting; } ;
struct TYPE_8__ {int bNumEndpoints; scalar_t__ bInterfaceNumber; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_10__ {void* bMaxPacketSize0; } ;
struct usb_device {TYPE_4__ descriptor; } ;
struct usb_ctrlrequest {int dummy; } ;
struct usb_cdc_dmm_desc {int wMaxCommand; } ;
struct TYPE_12__ {int transfer_dma; int transfer_flags; } ;
struct TYPE_11__ {int transfer_dma; } ;
struct TYPE_9__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_7__ {int* extra; int extralen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 int FUNC_5 (struct wdm_device*) ;
 int FUNC_6 (int *) ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct wdm_device*) ;
 void* FUNC_9 (int,int ) ;
 struct wdm_device* FUNC_10 (int,int ) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int ,int ) ;
 void* FUNC_15 (struct usb_device*,void*,int ,int *) ;
 int FUNC_16 (struct usb_device*,void*,void*,int ) ;
 int FUNC_17 (struct usb_endpoint_descriptor*) ;
 int FUNC_18 (TYPE_6__*,struct usb_device*,int ,void*,void*,int ,struct wdm_device*,int ) ;
 int FUNC_19 (struct usb_device*,int ) ;
 int FUNC_20 (struct usb_interface*,int *) ;
 int FUNC_21 (struct usb_interface*,struct wdm_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_22(struct usb_interface *VAR_9, const struct usb_device_id *VAR_10)
{
 int VAR_11 = -VAR_0;
 struct usb_device *VAR_12 = FUNC_7(VAR_9);
 struct wdm_device *VAR_13;
 struct usb_host_interface *VAR_14;
 struct usb_endpoint_descriptor *VAR_15;
 struct usb_cdc_dmm_desc *VAR_16;
 u8 *VAR_17 = VAR_9->altsetting->extra;
 int VAR_18 = VAR_9->altsetting->extralen;
 u16 VAR_19 = 0;

 if (!VAR_17)
  goto out;

 while (VAR_18 > 2) {
  if (VAR_17 [1] != VAR_4) {
   FUNC_3(&VAR_9->dev, "skipping garbage\n");
   goto next_desc;
  }

  switch (VAR_17 [2]) {
  case 128:
   break;
  case 129:
   VAR_16 = (struct usb_cdc_dmm_desc *)VAR_17;
   VAR_19 = FUNC_11(VAR_16->wMaxCommand);
   FUNC_2(&VAR_9->dev,
    "Finding maximum buffer length: %d", VAR_19);
   break;
  default:
   FUNC_3(&VAR_9->dev,
    "Ignoring extra header, type %d, length %d\n",
    VAR_17[2], VAR_17[0]);
   break;
  }
next_desc:
  VAR_18 -= VAR_17[0];
  VAR_17 += VAR_17[0];
 }

 VAR_11 = -VAR_1;
 VAR_13 = FUNC_10(sizeof(struct wdm_device), VAR_2);
 if (!VAR_13)
  goto out;
 FUNC_12(&VAR_13->wlock);
 FUNC_12(&VAR_13->rlock);
 FUNC_12(&VAR_13->plock);
 FUNC_13(&VAR_13->iuspin);
 FUNC_6(&VAR_13->wait);
 VAR_13->wMaxCommand = VAR_19;

 VAR_13->inum = FUNC_1((u16)VAR_9->cur_altsetting->desc.bInterfaceNumber);
 VAR_13->intf = VAR_9;
 FUNC_0(&VAR_13->rxwork, VAR_8);

 VAR_11 = -VAR_0;
 VAR_14 = VAR_9->cur_altsetting;
 if (VAR_14->desc.bNumEndpoints != 1)
  goto err;
 VAR_15 = &VAR_14->endpoint[0].desc;
 if (!VAR_15 || !FUNC_17(VAR_15))
  goto err;

 VAR_13->wMaxPacketSize = FUNC_11(VAR_15->wMaxPacketSize);
 VAR_13->bMaxPacketSize0 = VAR_12->descriptor.bMaxPacketSize0;

 VAR_13->orq = FUNC_9(sizeof(struct usb_ctrlrequest), VAR_2);
 if (!VAR_13->orq)
  goto err;
 VAR_13->irq = FUNC_9(sizeof(struct usb_ctrlrequest), VAR_2);
 if (!VAR_13->irq)
  goto err;

 VAR_13->validity = FUNC_14(0, VAR_2);
 if (!VAR_13->validity)
  goto err;

 VAR_13->response = FUNC_14(0, VAR_2);
 if (!VAR_13->response)
  goto err;

 VAR_13->command = FUNC_14(0, VAR_2);
 if (!VAR_13->command)
  goto err;

 VAR_13->ubuf = FUNC_9(VAR_13->wMaxCommand, VAR_2);
 if (!VAR_13->ubuf)
  goto err;

 VAR_13->sbuf = FUNC_15(FUNC_7(VAR_9),
     VAR_13->wMaxPacketSize,
     VAR_2,
     &VAR_13->validity->transfer_dma);
 if (!VAR_13->sbuf)
  goto err;

 VAR_13->inbuf = FUNC_15(FUNC_7(VAR_9),
     VAR_13->bMaxPacketSize0,
     VAR_2,
     &VAR_13->response->transfer_dma);
 if (!VAR_13->inbuf)
  goto err2;

 FUNC_18(
  VAR_13->validity,
  FUNC_7(VAR_9),
  FUNC_19(FUNC_7(VAR_9), VAR_15->bEndpointAddress),
  VAR_13->sbuf,
  VAR_13->wMaxPacketSize,
  VAR_7,
  VAR_13,
  VAR_15->bInterval
 );
 VAR_13->validity->transfer_flags |= VAR_3;

 FUNC_21(VAR_9, VAR_13);
 VAR_11 = FUNC_20(VAR_9, &VAR_6);
 if (VAR_11 < 0)
  goto err3;
 else
  FUNC_4(&VAR_9->dev, "cdc-wdm%d: USB WDM device\n",
   VAR_9->minor - VAR_5);
out:
 return VAR_11;
err3:
 FUNC_21(VAR_9, ((void*)0));
 FUNC_16(FUNC_7(VAR_13->intf),
   VAR_13->bMaxPacketSize0,
   VAR_13->inbuf,
   VAR_13->response->transfer_dma);
err2:
 FUNC_16(FUNC_7(VAR_13->intf),
   VAR_13->wMaxPacketSize,
   VAR_13->sbuf,
   VAR_13->validity->transfer_dma);
err:
 FUNC_5(VAR_13);
 FUNC_8(VAR_13->ubuf);
 FUNC_8(VAR_13->orq);
 FUNC_8(VAR_13->irq);
 FUNC_8(VAR_13);
 return VAR_11;
}
