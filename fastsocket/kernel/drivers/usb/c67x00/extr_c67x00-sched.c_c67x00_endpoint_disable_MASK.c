
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int urb_list; } ;
struct usb_hcd {int dummy; } ;
struct c67x00_hcd {int lock; int endpoint_disable; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct usb_host_endpoint*) ;
 int FUNC_2 (struct c67x00_hcd*) ;
 int FUNC_3 (struct c67x00_hcd*) ;
 int FUNC_4 (int ,char*) ;
 struct c67x00_hcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,int) ;

void FUNC_10(struct usb_hcd *VAR_1, struct usb_host_endpoint *VAR_2)
{
 struct c67x00_hcd *VAR_3 = FUNC_5(VAR_1);
 unsigned long VAR_4;

 if (!FUNC_6(&VAR_2->urb_list))
  FUNC_4(FUNC_2(VAR_3), "error: urb list not empty\n");

 FUNC_7(&VAR_3->lock, VAR_4);


 while (FUNC_1(VAR_2)) {

  FUNC_8(&VAR_3->lock, VAR_4);




  FUNC_0(VAR_3->endpoint_disable);
  FUNC_3(VAR_3);
  FUNC_9(&VAR_3->endpoint_disable, 1 * VAR_0);

  FUNC_7(&VAR_3->lock, VAR_4);
 }

 FUNC_8(&VAR_3->lock, VAR_4);
}
