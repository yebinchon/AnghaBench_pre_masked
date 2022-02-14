
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct f_acm {TYPE_2__* notify; int port; int port_num; } ;
struct TYPE_4__ {int * driver_data; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 struct f_acm* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct usb_function *VAR_0)
{
 struct f_acm *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;

 FUNC_0(VAR_2, "acm ttyGS%d deactivated\n", VAR_1->port_num);
 FUNC_2(&VAR_1->port);
 FUNC_3(VAR_1->notify);
 VAR_1->notify->driver_data = ((void*)0);
}
