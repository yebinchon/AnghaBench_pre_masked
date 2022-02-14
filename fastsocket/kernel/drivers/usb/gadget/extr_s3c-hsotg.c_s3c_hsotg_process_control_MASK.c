
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wValue; scalar_t__ wLength; } ;
struct s3c_hsotg_ep {int dir_in; scalar_t__ sent_zlp; } ;
struct s3c_hsotg {int regs; int dev; int gadget; TYPE_1__* driver; struct s3c_hsotg_ep* eps; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct s3c_hsotg*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct s3c_hsotg*,struct usb_ctrlrequest*) ;
 int FUNC_5 (struct s3c_hsotg*,struct s3c_hsotg_ep*,int *,int ) ;
 int FUNC_6 (int *,struct usb_ctrlrequest*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct s3c_hsotg *VAR_10,
          struct usb_ctrlrequest *VAR_11)
{
 struct s3c_hsotg_ep *VAR_12 = &VAR_10->eps[0];
 int VAR_13 = 0;
 u32 VAR_14;

 VAR_12->sent_zlp = 0;

 FUNC_0(VAR_10->dev, "ctrl Req=%02x, Type=%02x, V=%04x, L=%04x\n",
   VAR_11->bRequest, VAR_11->bRequestType,
   VAR_11->wValue, VAR_11->wLength);




 VAR_12->dir_in = (VAR_11->bRequestType & VAR_7) ? 1 : 0;
 FUNC_0(VAR_10->dev, "ctrl: dir_in=%d\n", VAR_12->dir_in);



 if (VAR_11->wLength == 0)
  VAR_12->dir_in = 1;

 if ((VAR_11->bRequestType & VAR_8) == VAR_9) {
  switch (VAR_11->bRequest) {
  case 129:
   VAR_14 = FUNC_2(VAR_10->regs + VAR_0);
   VAR_14 &= ~VAR_1;
   VAR_14 |= VAR_11->wValue << VAR_2;
   FUNC_7(VAR_14, VAR_10->regs + VAR_0);

   FUNC_1(VAR_10->dev, "new address %d\n", VAR_11->wValue);

   VAR_13 = FUNC_5(VAR_10, VAR_12, ((void*)0), 0);
   return;

  case 130:
   VAR_13 = FUNC_4(VAR_10, VAR_11);
   break;

  case 131:
  case 128:
   VAR_13 = FUNC_3(VAR_10, VAR_11);
   break;
  }
 }



 if (VAR_13 == 0 && VAR_10->driver) {
  VAR_13 = VAR_10->driver->setup(&VAR_10->gadget, VAR_11);
  if (VAR_13 < 0)
   FUNC_0(VAR_10->dev, "driver->setup() ret %d\n", VAR_13);
 }

 if (VAR_13 > 0) {
  if (!VAR_12->dir_in) {


   VAR_13 = FUNC_5(VAR_10, VAR_12, ((void*)0), 0);
  }
 }





 if (VAR_13 < 0) {
  u32 VAR_15;
  u32 VAR_16;

  FUNC_0(VAR_10->dev, "ep0 stall (dir=%d)\n", VAR_12->dir_in);
  VAR_15 = (VAR_12->dir_in) ? VAR_3 : VAR_4;




  VAR_16 = FUNC_2(VAR_10->regs + VAR_15);
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_5;
  FUNC_7(VAR_16, VAR_10->regs + VAR_15);

  FUNC_0(VAR_10->dev,
   "writen DxEPCTL=0x%08x to %08x (DxEPCTL=0x%08x)\n",
   VAR_16, VAR_15, FUNC_2(VAR_10->regs + VAR_15));



 }
}
