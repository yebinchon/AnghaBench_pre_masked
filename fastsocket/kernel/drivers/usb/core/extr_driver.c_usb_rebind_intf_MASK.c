
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; } ;
struct TYPE_6__ {TYPE_1__ power; int driver; } ;
struct usb_interface {TYPE_2__ dev; scalar_t__ needs_binding; } ;
struct usb_driver {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 struct usb_driver* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_driver*,struct usb_interface*) ;

void FUNC_5(struct usb_interface *VAR_1)
{
 int VAR_2;


 if (VAR_1->dev.driver) {
  struct usb_driver *VAR_3 =
    FUNC_3(VAR_1->dev.driver);

  FUNC_0(&VAR_1->dev, "forced unbind\n");
  FUNC_4(VAR_3, VAR_1);
 }


 if (VAR_1->dev.power.status == VAR_0) {
  VAR_1->needs_binding = 0;
  VAR_2 = FUNC_2(&VAR_1->dev);
  if (VAR_2 < 0)
   FUNC_1(&VAR_1->dev, "rebind failed: %d\n", VAR_2);
 }
}
