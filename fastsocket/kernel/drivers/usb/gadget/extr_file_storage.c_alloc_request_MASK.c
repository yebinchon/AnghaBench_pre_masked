
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int name; } ;
struct fsg_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsg_dev*,char*,int ) ;
 int VAR_1 ;
 struct usb_request* FUNC_1 (struct usb_ep*,int ) ;

__attribute__((used)) static int FUNC_2(struct fsg_dev *VAR_2, struct usb_ep *VAR_3,
  struct usb_request **VAR_4)
{
 *VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (*VAR_4)
  return 0;
 FUNC_0(VAR_2, "can't allocate request for %s\n", VAR_3->name);
 return -VAR_0;
}
