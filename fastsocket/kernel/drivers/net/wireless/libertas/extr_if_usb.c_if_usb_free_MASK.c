
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {int * ep_out_buf; int * rx_urb; int * tx_urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct if_usb_card *VAR_1)
{
 FUNC_1(VAR_0);


 FUNC_4(VAR_1->tx_urb);
 FUNC_4(VAR_1->rx_urb);

 FUNC_3(VAR_1->tx_urb);
 VAR_1->tx_urb = ((void*)0);

 FUNC_3(VAR_1->rx_urb);
 VAR_1->rx_urb = ((void*)0);

 FUNC_0(VAR_1->ep_out_buf);
 VAR_1->ep_out_buf = ((void*)0);

 FUNC_2(VAR_0);
}
