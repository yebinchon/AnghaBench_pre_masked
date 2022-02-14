
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct fsg_dev {int dummy; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
 int VAR_0 ;
 struct fsg_dev* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (struct fsg_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct usb_gadget *VAR_1)
{
 struct fsg_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, "disconnect or port reset\n");
 FUNC_2(VAR_2, VAR_0);
}
