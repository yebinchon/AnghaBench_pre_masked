
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct pegasus {int carrier_check; TYPE_2__* intr_urb; TYPE_1__* rx_urb; int net; } ;
struct TYPE_4__ {scalar_t__ actual_length; scalar_t__ status; } ;
struct TYPE_3__ {scalar_t__ actual_length; scalar_t__ status; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct pegasus* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6 (struct usb_interface *VAR_2)
{
 struct pegasus *VAR_3 = FUNC_5(VAR_2);

 FUNC_1 (VAR_3->net);
 if (FUNC_2(VAR_3->net)) {
  VAR_3->rx_urb->status = 0;
  VAR_3->rx_urb->actual_length = 0;
  FUNC_4(VAR_3->rx_urb);

  VAR_3->intr_urb->status = 0;
  VAR_3->intr_urb->actual_length = 0;
  FUNC_0(VAR_3->intr_urb);
 }
 FUNC_3(VAR_1, &VAR_3->carrier_check,
    VAR_0);
 return 0;
}
