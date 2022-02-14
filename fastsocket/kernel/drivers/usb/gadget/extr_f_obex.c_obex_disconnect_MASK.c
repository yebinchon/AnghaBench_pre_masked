
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_composite_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct gserial {TYPE_2__ func; } ;
struct f_obex {int port_num; int can_activate; } ;
struct TYPE_3__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 struct f_obex* FUNC_1 (struct gserial*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct gserial *VAR_0)
{
 struct f_obex *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->func.config->cdev;
 int VAR_3;

 if (!VAR_1->can_activate)
  return;

 VAR_3 = FUNC_2(&VAR_0->func);
 if (VAR_3)
  FUNC_0(VAR_2, "obex ttyGS%d function deactivate --> %d\n",
   VAR_1->port_num, VAR_3);
}
