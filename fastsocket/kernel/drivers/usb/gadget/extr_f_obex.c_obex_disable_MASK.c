
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct f_obex {int port; int port_num; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 struct f_obex* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_function *VAR_0)
{
 struct f_obex *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;

 FUNC_0(VAR_2, "obex ttyGS%d disable\n", VAR_1->port_num);
 FUNC_2(&VAR_1->port);
}
