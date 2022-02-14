
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* unbind ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; int dev; } ;
struct r8a66597 {struct usb_gadget_driver* driver; TYPE_1__ gadget; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct r8a66597*) ;
 int FUNC_2 (struct r8a66597*) ;
 int FUNC_3 (struct r8a66597*,int ,int ) ;
 int FUNC_4 (struct r8a66597*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;
 struct r8a66597* VAR_4 ;

int FUNC_8(struct usb_gadget_driver *VAR_5)
{
 struct r8a66597 *VAR_6 = VAR_4;
 unsigned long VAR_7;

 if (VAR_5 != VAR_6->driver || !VAR_5->unbind)
  return -VAR_0;

 FUNC_5(&VAR_6->lock, VAR_7);
 if (VAR_6->gadget.speed != VAR_2)
  FUNC_4(VAR_6);
 FUNC_6(&VAR_6->lock, VAR_7);

 FUNC_3(VAR_6, VAR_3, VAR_1);

 VAR_5->unbind(&VAR_6->gadget);

 FUNC_2(VAR_6);
 FUNC_1(VAR_6);

 FUNC_0(&VAR_6->gadget.dev);
 VAR_6->driver = ((void*)0);
 return 0;
}
