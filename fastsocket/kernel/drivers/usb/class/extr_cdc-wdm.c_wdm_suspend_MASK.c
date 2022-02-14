
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wdm_device {int plock; int rxwork; int flags; TYPE_1__* intf; } ;
struct usb_interface {int minor; } ;
struct TYPE_5__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct wdm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 struct wdm_device* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_4, pm_message_t VAR_5)
{
 struct wdm_device *VAR_6 = FUNC_6(VAR_4);
 int VAR_7 = 0;

 FUNC_1(&VAR_6->intf->dev, "wdm%d_suspend\n", VAR_4->minor);

 FUNC_3(&VAR_6->plock);







  FUNC_0(&VAR_6->rxwork);
  FUNC_2(VAR_6);



 FUNC_4(&VAR_6->plock);

 return VAR_7;
}
