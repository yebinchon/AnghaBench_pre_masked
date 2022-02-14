
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int bufsize; void* ctrlbuf; void* cr; void* outbuf; void* inbuf; int ctrlbuf_dma; int cr_dma; int outbuf_dma; int inbuf_dma; } ;
struct usb_device {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 void* FUNC_0 (struct usb_device*,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_1, struct hid_device *VAR_2)
{
 struct usbhid_device *VAR_3 = VAR_2->driver_data;

 VAR_3->inbuf = FUNC_0(VAR_1, VAR_3->bufsize, VAR_0,
   &VAR_3->inbuf_dma);
 VAR_3->outbuf = FUNC_0(VAR_1, VAR_3->bufsize, VAR_0,
   &VAR_3->outbuf_dma);
 VAR_3->cr = FUNC_0(VAR_1, sizeof(*VAR_3->cr), VAR_0,
   &VAR_3->cr_dma);
 VAR_3->ctrlbuf = FUNC_0(VAR_1, VAR_3->bufsize, VAR_0,
   &VAR_3->ctrlbuf_dma);
 if (!VAR_3->inbuf || !VAR_3->outbuf || !VAR_3->cr ||
   !VAR_3->ctrlbuf)
  return -1;

 return 0;
}
