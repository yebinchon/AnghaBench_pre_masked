
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_function {TYPE_1__* config; } ;
struct usb_composite_dev {int dummy; } ;
struct f_rndis {TYPE_2__* notify; int port; int config; } ;
struct TYPE_4__ {int * driver_data; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*) ;
 struct f_rndis* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct usb_function *VAR_0)
{
 struct f_rndis *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->config->cdev;

 if (!VAR_1->notify->driver_data)
  return;

 FUNC_0(VAR_2, "rndis deactivated\n");

 FUNC_3(VAR_1->config);
 FUNC_2(&VAR_1->port);

 FUNC_4(VAR_1->notify);
 VAR_1->notify->driver_data = ((void*)0);
}
