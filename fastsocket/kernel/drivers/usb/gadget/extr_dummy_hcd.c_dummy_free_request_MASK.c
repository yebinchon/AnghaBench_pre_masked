
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {scalar_t__ name; } ;
struct dummy_request {int queue; } ;
struct dummy_ep {int desc; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dummy_request*) ;
 int FUNC_2 (int *) ;
 struct dummy_ep* FUNC_3 (struct usb_ep*) ;
 struct dummy_request* FUNC_4 (struct usb_request*) ;

__attribute__((used)) static void
FUNC_5 (struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct dummy_ep *VAR_3;
 struct dummy_request *VAR_4;

 VAR_3 = FUNC_3 (VAR_1);
 if (!VAR_3 || !VAR_2 || (!VAR_3->desc && VAR_1->name != VAR_0))
  return;

 VAR_4 = FUNC_4 (VAR_2);
 FUNC_0 (!FUNC_2 (&VAR_4->queue));
 FUNC_1 (VAR_4);
}
