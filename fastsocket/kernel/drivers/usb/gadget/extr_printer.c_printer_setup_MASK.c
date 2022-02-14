
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_request {int length; int zero; scalar_t__ status; scalar_t__ buf; int (* complete ) (int ,struct usb_request*) ;} ;
struct usb_gadget {int ep0; int a_alt_hnp_support; int a_hnp_support; int is_otg; int speed; int is_dualspeed; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wValue; int wIndex; } ;
struct printer_dev {int printer_status; int interface; int config; struct usb_request* req; } ;


 int FUNC_0 (struct printer_dev*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;






 int VAR_5 ;

 int FUNC_1 (struct printer_dev*,char*,int,int ,int,int,int) ;
 int FUNC_2 (int ,scalar_t__,int,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct printer_dev* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int*,int) ;
 int FUNC_6 (int,int) ;
 int* VAR_8 ;
 int FUNC_7 (struct printer_dev*,int) ;
 int FUNC_8 (int ,struct usb_request*) ;
 int FUNC_9 (struct printer_dev*) ;
 int FUNC_10 (struct printer_dev*,int) ;
 int VAR_9 ;
 int FUNC_11 (int ,struct usb_request*,int ) ;
 int FUNC_12 (int *,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct usb_gadget *VAR_10, const struct usb_ctrlrequest *VAR_11)
{
 struct printer_dev *VAR_12 = FUNC_3(VAR_10);
 struct usb_request *VAR_13 = VAR_12->req;
 int VAR_14 = -VAR_0;
 u16 VAR_15 = FUNC_4(VAR_11->wIndex);
 u16 VAR_16 = FUNC_4(VAR_11->wValue);
 u16 VAR_17 = FUNC_4(VAR_11->wLength);

 FUNC_0(VAR_12, "ctrl req%02x.%02x v%04x i%04x l%d\n",
  VAR_11->bRequestType, VAR_11->bRequest, VAR_16, VAR_15, VAR_17);

 VAR_13->complete = FUNC_8;

 switch (VAR_11->bRequestType&VAR_5) {

 case 128:
  switch (VAR_11->bRequest) {

  case 133:
   if (VAR_11->bRequestType != VAR_3)
    break;
   switch (VAR_16 >> 8) {

   case 138:
    VAR_14 = FUNC_6(VAR_17, (u16) sizeof VAR_7);
    FUNC_5(VAR_13->buf, &VAR_7, VAR_14);
    break;
   case 139:
    VAR_14 = FUNC_2(VAR_10->speed, VAR_13->buf,
      VAR_16 >> 8,
      VAR_16 & 0xff,
      VAR_10->is_otg);
    if (VAR_14 >= 0)
     VAR_14 = FUNC_6(VAR_17, (u16) VAR_14);
    break;

   case 135:
    VAR_14 = FUNC_12(&VAR_9,
      VAR_16 & 0xff, VAR_13->buf);
    if (VAR_14 >= 0)
     VAR_14 = FUNC_6(VAR_17, (u16) VAR_14);
    break;
   }
   break;

  case 131:
   if (VAR_11->bRequestType != 0)
    break;
   if (VAR_10->a_hnp_support)
    FUNC_0(VAR_12, "HNP available\n");
   else if (VAR_10->a_alt_hnp_support)
    FUNC_0(VAR_12, "HNP needs a different root port\n");
   VAR_14 = FUNC_7(VAR_12, VAR_16);
   break;
  case 134:
   if (VAR_11->bRequestType != VAR_3)
    break;
   *(u8 *)VAR_13->buf = VAR_12->config;
   VAR_14 = FUNC_6(VAR_17, (u16) 1);
   break;

  case 130:
   if (VAR_11->bRequestType != VAR_4 ||
     !VAR_12->config)
    break;

   VAR_14 = FUNC_10(VAR_12, VAR_2);
   break;
  case 132:
   if (VAR_11->bRequestType !=
     (VAR_3|VAR_4)
     || !VAR_12->config)
    break;

   *(u8 *)VAR_13->buf = VAR_12->interface;
   VAR_14 = FUNC_6(VAR_17, (u16) 1);
   break;

  default:
   goto unknown;
  }
  break;

 case 129:
  switch (VAR_11->bRequest) {
  case 0:

   if ((VAR_15>>8) != VAR_2)
    break;

   VAR_14 = (VAR_8[0]<<8)|VAR_8[1];
   FUNC_5(VAR_13->buf, VAR_8, VAR_14);
   FUNC_0(VAR_12, "1284 PNP String: %x %s\n", VAR_14,
     &VAR_8[2]);
   break;

  case 1:

   if (VAR_15 != VAR_2)
    break;

   *(u8 *)VAR_13->buf = VAR_12->printer_status;
   VAR_14 = FUNC_6(VAR_17, (u16) 1);
   break;

  case 2:

   if (VAR_15 != VAR_2)
    break;

   FUNC_9(VAR_12);

   VAR_14 = 0;
   break;

  default:
   goto unknown;
  }
  break;

 default:
unknown:
  FUNC_1(VAR_12,
   "unknown ctrl req%02x.%02x v%04x i%04x l%d\n",
   VAR_11->bRequestType, VAR_11->bRequest,
   VAR_16, VAR_15, VAR_17);
  break;
 }


 if (VAR_14 >= 0) {
  VAR_13->length = VAR_14;
  VAR_13->zero = VAR_14 < VAR_17;
  VAR_14 = FUNC_11(VAR_10->ep0, VAR_13, VAR_1);
  if (VAR_14 < 0) {
   FUNC_0(VAR_12, "ep_queue --> %d\n", VAR_14);
   VAR_13->status = 0;
   FUNC_8(VAR_10->ep0, VAR_13);
  }
 }


 return VAR_14;
}
