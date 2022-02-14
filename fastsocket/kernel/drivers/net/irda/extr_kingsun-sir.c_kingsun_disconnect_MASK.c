
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct kingsun_cb {int netdev; int in_buf; int out_buf; int * rx_urb; int * tx_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct kingsun_cb* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct kingsun_cb *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1->netdev);


 if (VAR_1->tx_urb != ((void*)0)) {
  FUNC_5(VAR_1->tx_urb);
  FUNC_3(VAR_1->tx_urb);
  VAR_1->tx_urb = ((void*)0);
 }
 if (VAR_1->rx_urb != ((void*)0)) {
  FUNC_5(VAR_1->rx_urb);
  FUNC_3(VAR_1->rx_urb);
  VAR_1->rx_urb = ((void*)0);
 }

 FUNC_1(VAR_1->out_buf);
 FUNC_1(VAR_1->in_buf);
 FUNC_0(VAR_1->netdev);

 FUNC_6(VAR_0, ((void*)0));
}
