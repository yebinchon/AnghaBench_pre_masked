
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct ksdazzle_cb {int netdev; int rx_buf; int tx_buf_clear; int speed_setuprequest; int * rx_urb; int * tx_urb; int * speed_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct ksdazzle_cb* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_0)
{
 struct ksdazzle_cb *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_2(VAR_1->netdev);


 FUNC_5(VAR_1->speed_urb);
 FUNC_3(VAR_1->speed_urb);
 VAR_1->speed_urb = ((void*)0);

 FUNC_5(VAR_1->tx_urb);
 FUNC_3(VAR_1->tx_urb);
 VAR_1->tx_urb = ((void*)0);

 FUNC_5(VAR_1->rx_urb);
 FUNC_3(VAR_1->rx_urb);
 VAR_1->rx_urb = ((void*)0);

 FUNC_1(VAR_1->speed_setuprequest);
 FUNC_1(VAR_1->tx_buf_clear);
 FUNC_1(VAR_1->rx_buf);
 FUNC_0(VAR_1->netdev);

 FUNC_6(VAR_0, ((void*)0));
}
