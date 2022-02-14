
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct usb_gadget_driver {TYPE_2__ driver; int (* unbind ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int dev; int speed; } ;
struct s3c_hsotg {int dev; TYPE_3__ gadget; struct usb_gadget_driver* driver; TYPE_1__* eps; } ;
struct TYPE_4__ {int ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s3c_hsotg*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 struct s3c_hsotg* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

int FUNC_5(struct usb_gadget_driver *VAR_6)
{
 struct s3c_hsotg *VAR_7 = VAR_5;
 int VAR_8;

 if (!VAR_7)
  return -VAR_1;

 if (!VAR_6 || VAR_6 != VAR_7->driver || !VAR_6->unbind)
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_3(&VAR_7->eps[VAR_8].ep);

 FUNC_0(VAR_7, VAR_4);

 VAR_6->unbind(&VAR_7->gadget);
 VAR_7->driver = ((void*)0);
 VAR_7->gadget.speed = VAR_3;

 FUNC_2(&VAR_7->gadget.dev);

 FUNC_1(VAR_7->dev, "unregistered gadget driver '%s'\n",
   VAR_6->driver.name);

 return 0;
}
