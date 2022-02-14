
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc {int dummy; } ;
struct TYPE_2__ {struct uwb_rc* rc; } ;
struct i1480u {int usb_dev; TYPE_1__ wlp; int notif_urb; int usb_iface; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct i1480u *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->wlp.rc;
 FUNC_3(VAR_0->usb_iface, ((void*)0));




 FUNC_5(&VAR_0->wlp);
 FUNC_4(VAR_1);
 FUNC_2(VAR_0->usb_dev);
}
