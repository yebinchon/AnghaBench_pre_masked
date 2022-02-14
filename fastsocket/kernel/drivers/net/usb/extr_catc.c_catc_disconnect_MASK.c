
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct catc {int netdev; int irq_urb; int rx_urb; int tx_urb; int ctrl_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct catc* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct catc *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_1(VAR_1->netdev);
  FUNC_2(VAR_1->ctrl_urb);
  FUNC_2(VAR_1->tx_urb);
  FUNC_2(VAR_1->rx_urb);
  FUNC_2(VAR_1->irq_urb);
  FUNC_0(VAR_1->netdev);
 }
}
