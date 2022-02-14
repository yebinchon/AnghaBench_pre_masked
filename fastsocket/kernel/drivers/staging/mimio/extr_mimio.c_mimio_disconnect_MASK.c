
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct mimio {scalar_t__ open; scalar_t__ present; TYPE_1__* idev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mimio*) ;
 int FUNC_3 (int *) ;
 struct mimio* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 struct mimio *VAR_2;

 FUNC_1(&VAR_0);

 VAR_2 = FUNC_4(VAR_1);
 FUNC_5(VAR_1, ((void*)0));
 FUNC_0(&VAR_2->idev->dev, "disconnect\n");

 if (VAR_2) {
  VAR_2->present = 0;

  if (VAR_2->open <= 0)
   FUNC_2(VAR_2);
 }

 FUNC_3(&VAR_0);
}
