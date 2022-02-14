
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_3__ {int intr_urb; int rx_urb; int netdev; } ;
typedef TYPE_1__ rtl8150_t ;
typedef int pm_message_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 rtl8150_t *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2->netdev);

 if (FUNC_1(VAR_2->netdev)) {
  FUNC_3(VAR_2->rx_urb);
  FUNC_3(VAR_2->intr_urb);
 }
 return 0;
}
