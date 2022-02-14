
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_request {scalar_t__ buf; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wValue; int wIndex; } ;
struct fsg_dev {int new_config; int config; int gadget; struct usb_request* ep0req; } ;


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





 int VAR_10 ;
 int FUNC_0 (struct fsg_dev*,char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *,int) ;
 int FUNC_4 (int ,scalar_t__,int,int) ;
 int FUNC_5 (struct fsg_dev*,int ) ;
 int VAR_13 ;
 int FUNC_6 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct fsg_dev *VAR_14,
  const struct usb_ctrlrequest *VAR_15)
{
 struct usb_request *VAR_16 = VAR_14->ep0req;
 int VAR_17 = -VAR_3;
 u16 VAR_18 = FUNC_2(VAR_15->wIndex);
 u16 VAR_19 = FUNC_2(VAR_15->wValue);



 switch (VAR_15->bRequest) {

 case 131:
  if (VAR_15->bRequestType != (VAR_6 | VAR_10 |
    VAR_8))
   break;
  switch (VAR_19 >> 8) {

  case 136:
   FUNC_0(VAR_14, "get device descriptor\n");
   VAR_17 = sizeof VAR_12;
   FUNC_3(VAR_16->buf, &VAR_12, VAR_17);
   break;
  case 135:
   FUNC_0(VAR_14, "get device qualifier\n");
   if (!FUNC_1(VAR_14->gadget))
    break;
   VAR_17 = sizeof VAR_11;
   FUNC_3(VAR_16->buf, &VAR_11, VAR_17);
   break;

  case 134:
   FUNC_0(VAR_14, "get other-speed config descriptor\n");
   if (!FUNC_1(VAR_14->gadget))
    break;
   goto get_config;
  case 137:
   FUNC_0(VAR_14, "get configuration descriptor\n");
get_config:
   VAR_17 = FUNC_4(VAR_14->gadget,
     VAR_16->buf,
     VAR_19 >> 8,
     VAR_19 & 0xff);
   break;

  case 133:
   FUNC_0(VAR_14, "get string descriptor\n");


   VAR_17 = FUNC_6(&VAR_13,
     VAR_19 & 0xff, VAR_16->buf);
   break;
  }
  break;


 case 129:
  if (VAR_15->bRequestType != (VAR_7 | VAR_10 |
    VAR_8))
   break;
  FUNC_0(VAR_14, "set configuration\n");
  if (VAR_19 == VAR_0 || VAR_19 == 0) {
   VAR_14->new_config = VAR_19;



   FUNC_5(VAR_14, VAR_4);
   VAR_17 = VAR_1;
  }
  break;
 case 132:
  if (VAR_15->bRequestType != (VAR_6 | VAR_10 |
    VAR_8))
   break;
  FUNC_0(VAR_14, "get configuration\n");
  *(u8 *) VAR_16->buf = VAR_14->config;
  VAR_17 = 1;
  break;

 case 128:
  if (VAR_15->bRequestType != (VAR_7| VAR_10 |
    VAR_9))
   break;
  if (VAR_14->config && VAR_18 == 0) {




   FUNC_5(VAR_14, VAR_5);
   VAR_17 = VAR_1;
  }
  break;
 case 130:
  if (VAR_15->bRequestType != (VAR_6 | VAR_10 |
    VAR_9))
   break;
  if (!VAR_14->config)
   break;
  if (VAR_18 != 0) {
   VAR_17 = -VAR_2;
   break;
  }
  FUNC_0(VAR_14, "get interface\n");
  *(u8 *) VAR_16->buf = 0;
  VAR_17 = 1;
  break;

 default:
  FUNC_0(VAR_14,
   "unknown control req %02x.%02x v%04x i%04x l%u\n",
   VAR_15->bRequestType, VAR_15->bRequest,
   VAR_19, VAR_18, FUNC_2(VAR_15->wLength));
 }

 return VAR_17;
}
