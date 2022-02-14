
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct usb_gadget_driver {int (* unbind ) (TYPE_2__*) ;TYPE_1__ driver; } ;
struct TYPE_4__ {int dev; } ;
struct s3c2410_udc {struct usb_gadget_driver* driver; TYPE_2__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct s3c2410_udc*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct s3c2410_udc* VAR_3 ;

int FUNC_4(struct usb_gadget_driver *VAR_4)
{
 struct s3c2410_udc *VAR_5 = VAR_3;

 if (!VAR_5)
  return -VAR_2;

 if (!VAR_4 || VAR_4 != VAR_5->driver || !VAR_4->unbind)
  return -VAR_1;

 FUNC_1(VAR_0,"usb_gadget_register_driver() '%s'\n",
  VAR_4->driver.name);

 VAR_4->unbind(&VAR_5->gadget);

 FUNC_0(&VAR_5->gadget.dev);
 VAR_5->driver = ((void*)0);


 FUNC_2(VAR_5);

 return 0;
}
