
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct ati_remote2 {TYPE_2__** urb; int * buf_dma; TYPE_1__** ep; int * buf; struct usb_device* udev; } ;
struct TYPE_5__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_4__ {int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct usb_device*,int,int ,int *) ;
 int FUNC_2 (TYPE_2__*,struct usb_device*,int,int ,int,int ,struct ati_remote2*,int ) ;
 int FUNC_3 (struct usb_device*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct ati_remote2 *VAR_5)
{
 struct usb_device *VAR_6 = VAR_5->udev;
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_5->buf[VAR_7] = FUNC_1(VAR_6, 4, VAR_1, &VAR_5->buf_dma[VAR_7]);
  if (!VAR_5->buf[VAR_7])
   return -VAR_0;

  VAR_5->urb[VAR_7] = FUNC_0(0, VAR_1);
  if (!VAR_5->urb[VAR_7])
   return -VAR_0;

  VAR_8 = FUNC_5(VAR_6, VAR_5->ep[VAR_7]->bEndpointAddress);
  VAR_9 = FUNC_3(VAR_6, VAR_8, FUNC_4(VAR_8));
  VAR_9 = VAR_9 > 4 ? 4 : VAR_9;

  FUNC_2(VAR_5->urb[VAR_7], VAR_6, VAR_8, VAR_5->buf[VAR_7], VAR_9,
     VAR_7 ? VAR_3 : VAR_4,
     VAR_5, VAR_5->ep[VAR_7]->bInterval);
  VAR_5->urb[VAR_7]->transfer_dma = VAR_5->buf_dma[VAR_7];
  VAR_5->urb[VAR_7]->transfer_flags |= VAR_2;
 }

 return 0;
}
