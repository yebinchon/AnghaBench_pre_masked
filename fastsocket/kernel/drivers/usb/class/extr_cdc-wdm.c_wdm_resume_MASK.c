
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdm_device {int plock; TYPE_1__* intf; } ;
struct usb_interface {int minor; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wdm_device*) ;
 struct wdm_device* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0)
{
 struct wdm_device *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->intf->dev, "wdm%d_resume\n", VAR_0->minor);
 FUNC_1(&VAR_1->plock);
 VAR_2 = FUNC_3(VAR_1);
 FUNC_2(&VAR_1->plock);
 return VAR_2;
}
