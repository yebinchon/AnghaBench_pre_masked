
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {char* name; } ;
struct fsg_dev {struct usb_ep* bulk_out; struct usb_ep* bulk_in; } ;


 int FUNC_0 (struct fsg_dev*,char*,char const*) ;
 int FUNC_1 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_0, struct usb_ep *VAR_1)
{
 const char *VAR_2;

 if (VAR_1 == VAR_0->bulk_in)
  VAR_2 = "bulk-in";
 else if (VAR_1 == VAR_0->bulk_out)
  VAR_2 = "bulk-out";
 else
  VAR_2 = VAR_1->name;
 FUNC_0(VAR_0, "%s set halt\n", VAR_2);
 return FUNC_1(VAR_1);
}
