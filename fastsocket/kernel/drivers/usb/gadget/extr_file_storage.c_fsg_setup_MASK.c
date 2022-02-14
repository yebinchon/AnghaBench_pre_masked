
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_gadget {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct fsg_dev {char* ep0req_name; TYPE_1__* ep0req; int ep0_req_tag; } ;
struct TYPE_2__ {int length; int zero; int * context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fsg_dev*,struct usb_ctrlrequest const*) ;
 int FUNC_1 (struct fsg_dev*,char*,int *,int) ;
 int FUNC_2 (struct fsg_dev*) ;
 struct fsg_dev* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct fsg_dev*,struct usb_ctrlrequest const*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_4,
  const struct usb_ctrlrequest *VAR_5)
{
 struct fsg_dev *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;
 int VAR_8 = FUNC_4(VAR_5->wLength);

 ++VAR_6->ep0_req_tag;
 VAR_6->ep0req->context = ((void*)0);
 VAR_6->ep0req->length = 0;
 FUNC_1(VAR_6, "ep0-setup", (u8 *) VAR_5, sizeof(*VAR_5));

 if ((VAR_5->bRequestType & VAR_3) == VAR_2)
  VAR_7 = FUNC_0(VAR_6, VAR_5);
 else
  VAR_7 = FUNC_6(VAR_6, VAR_5);


 if (VAR_7 >= 0 && VAR_7 != VAR_0) {
  VAR_7 = FUNC_5(VAR_7, VAR_8);
  VAR_6->ep0req->length = VAR_7;
  VAR_6->ep0req->zero = VAR_7 < VAR_8;
  VAR_6->ep0req_name = (VAR_5->bRequestType & VAR_1 ?
    "ep0-in" : "ep0-out");
  VAR_7 = FUNC_2(VAR_6);
 }


 return VAR_7;
}
