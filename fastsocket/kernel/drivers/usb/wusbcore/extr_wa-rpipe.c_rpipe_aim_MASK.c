
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wahc {TYPE_1__* usb_iface; } ;
struct TYPE_6__ {int bDeviceAddress; int bEndpointAddress; int bmAttribute; int bmRetryOptions; int wRPipeIndex; scalar_t__ wNumTransactionErrors; scalar_t__ bOverTheAirInterval; int bInterval; scalar_t__ bMaxDataSequence; int dwCurrentWindow; scalar_t__ bDataSequence; int bSpeed; int bHSHubPort; scalar_t__ bHSHubAddress; void* wMaxPacketSize; void* wBlocks; int wRequests; } ;
struct wa_rpipe {TYPE_3__ descr; int segs_available; } ;
struct usb_wireless_ep_comp_descriptor {scalar_t__ bMaxSequence; } ;
struct TYPE_5__ {int bEndpointAddress; int wMaxPacketSize; int bmAttributes; int bInterval; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;
struct usb_device {int devnum; int portnum; int authenticated; scalar_t__ wusb; } ;
struct urb {struct usb_device* dev; int pipe; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wahc*,int ) ;
 int FUNC_1 (struct wahc*,TYPE_3__*,int ) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct device*,char*,int,int,int ,scalar_t__,int ) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (int ) ;
 struct usb_wireless_ep_comp_descriptor* FUNC_8 (struct device*,struct usb_host_endpoint*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct wa_rpipe *VAR_3, struct wahc *VAR_4,
       struct usb_host_endpoint *VAR_5, struct urb *VAR_6, gfp_t VAR_7)
{
 int VAR_8 = -VAR_0;
 struct device *VAR_9 = &VAR_4->usb_iface->dev;
 struct usb_device *VAR_10 = VAR_6->dev;
 struct usb_wireless_ep_comp_descriptor *VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_8(VAR_9, VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_9, "ep 0x%02x: can't find companion descriptor\n",
   VAR_5->desc.bEndpointAddress);
  goto error;
 }
 VAR_12 = VAR_10->wusb && !VAR_10->authenticated ? 0x80 : 0;
 FUNC_0(VAR_4, FUNC_7(VAR_3->descr.wRPipeIndex));
 FUNC_2(&VAR_3->segs_available, FUNC_7(VAR_3->descr.wRequests));


 VAR_3->descr.wBlocks = FUNC_3(16);

 VAR_3->descr.wMaxPacketSize = FUNC_3(VAR_5->desc.wMaxPacketSize);
 VAR_3->descr.bHSHubAddress = 0;
 VAR_3->descr.bHSHubPort = FUNC_11(VAR_6->dev->portnum);

 VAR_3->descr.bSpeed = FUNC_10(VAR_6->pipe) == 0 ?
  VAR_2 : VAR_1;

 FUNC_5(VAR_9, "addr %u (0x%02x) rpipe #%u ep# %u speed %d\n",
  VAR_6->dev->devnum, VAR_6->dev->devnum | VAR_12,
  FUNC_7(VAR_3->descr.wRPipeIndex),
  FUNC_10(VAR_6->pipe), VAR_3->descr.bSpeed);


 if (FUNC_9(VAR_6->dev->devnum == 0x80))
  VAR_3->descr.bDeviceAddress = 0;
 else
  VAR_3->descr.bDeviceAddress = VAR_6->dev->devnum | VAR_12;
 VAR_3->descr.bEndpointAddress = VAR_5->desc.bEndpointAddress;

 VAR_3->descr.bDataSequence = 0;

 VAR_3->descr.dwCurrentWindow = FUNC_4(1);

 VAR_3->descr.bMaxDataSequence = VAR_11->bMaxSequence - 1;
 VAR_3->descr.bInterval = VAR_5->desc.bInterval;

 VAR_3->descr.bOverTheAirInterval = 0;

 VAR_3->descr.bmAttribute = VAR_5->desc.bmAttributes & 0x03;


 VAR_3->descr.bmRetryOptions = 15;

 VAR_3->descr.wNumTransactionErrors = 0;
 VAR_8 = FUNC_1(VAR_4, &VAR_3->descr,
       FUNC_7(VAR_3->descr.wRPipeIndex));
 if (VAR_8 < 0) {
  FUNC_6(VAR_9, "Cannot aim rpipe: %d\n", VAR_8);
  goto error;
 }
 VAR_8 = 0;
error:
 return VAR_8;
}
