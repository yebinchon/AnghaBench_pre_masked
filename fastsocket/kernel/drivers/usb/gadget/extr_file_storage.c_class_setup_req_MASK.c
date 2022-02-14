
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_request {int context; scalar_t__ buf; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wValue; int wLength; int wIndex; } ;
struct fsg_dev {struct usb_request* ep0req; int nluns; int config; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
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
 int FUNC_1 (struct fsg_dev*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fsg_dev*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct fsg_dev *VAR_11,
  const struct usb_ctrlrequest *VAR_12)
{
 struct usb_request *VAR_13 = VAR_11->ep0req;
 int VAR_14 = -VAR_2;
 u16 VAR_15 = FUNC_2(VAR_12->wIndex);
 u16 VAR_16 = FUNC_2(VAR_12->wValue);
 u16 VAR_17 = FUNC_2(VAR_12->wLength);

 if (!VAR_11->config)
  return VAR_14;


 if (FUNC_4()) {
  switch (VAR_12->bRequest) {

  case 129:
   if (VAR_12->bRequestType != (VAR_7 |
     VAR_9 | VAR_8))
    break;
   if (VAR_15 != 0 || VAR_16 != 0) {
    VAR_14 = -VAR_1;
    break;
   }



   FUNC_0(VAR_11, "bulk reset request\n");
   FUNC_3(VAR_11, VAR_4);
   VAR_14 = VAR_0;
   break;

  case 130:
   if (VAR_12->bRequestType != (VAR_6 |
     VAR_9 | VAR_8))
    break;
   if (VAR_15 != 0 || VAR_16 != 0) {
    VAR_14 = -VAR_1;
    break;
   }
   FUNC_1(VAR_11, "get max LUN\n");
   *(u8 *) VAR_13->buf = VAR_11->nluns - 1;
   VAR_14 = 1;
   break;
  }
 }


 else {
  switch (VAR_12->bRequest) {

  case 128:
   if (VAR_12->bRequestType != (VAR_7 |
     VAR_9 | VAR_8))
    break;
   if (VAR_15 != 0 || VAR_16 != 0) {
    VAR_14 = -VAR_1;
    break;
   }
   if (VAR_17 > VAR_5) {
    VAR_14 = -VAR_3;
    break;
   }
   VAR_14 = VAR_17;
   VAR_11->ep0req->context = VAR_10;
   break;
  }
 }

 if (VAR_14 == -VAR_2)
  FUNC_1(VAR_11,
   "unknown class-specific control req "
   "%02x.%02x v%04x i%04x l%u\n",
   VAR_12->bRequestType, VAR_12->bRequest,
   FUNC_2(VAR_12->wValue), VAR_15, VAR_17);
 return VAR_14;
}
