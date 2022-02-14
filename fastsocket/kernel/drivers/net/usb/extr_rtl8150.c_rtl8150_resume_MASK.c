
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_5__ {TYPE_4__* intr_urb; TYPE_3__* rx_urb; int netdev; } ;
typedef TYPE_1__ rtl8150_t ;
struct TYPE_7__ {scalar_t__ actual_length; scalar_t__ status; } ;
struct TYPE_6__ {scalar_t__ actual_length; scalar_t__ status; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_1__* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0)
{
 rtl8150_t *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_1->netdev);
 if (FUNC_2(VAR_1->netdev)) {
  VAR_1->rx_urb->status = 0;
  VAR_1->rx_urb->actual_length = 0;
  FUNC_3(VAR_1->rx_urb);

  VAR_1->intr_urb->status = 0;
  VAR_1->intr_urb->actual_length = 0;
  FUNC_0(VAR_1->intr_urb);
 }
 return 0;
}
