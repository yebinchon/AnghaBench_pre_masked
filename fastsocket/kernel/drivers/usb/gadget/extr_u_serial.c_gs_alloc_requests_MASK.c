
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {void (* complete ) (struct usb_ep*,struct usb_request*) ;int list; } ;
struct usb_ep {int maxpacket; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_request* FUNC_0 (struct usb_ep*,int ,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 scalar_t__ FUNC_2 (struct list_head*) ;

__attribute__((used)) static int FUNC_3(struct usb_ep *VAR_3, struct list_head *VAR_4,
  void (*VAR_5)(struct usb_ep *, struct usb_request *))
{
 int VAR_6;
 struct usb_request *VAR_7;





 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3, VAR_3->maxpacket, VAR_1);
  if (!VAR_7)
   return FUNC_2(VAR_4) ? -VAR_0 : 0;
  VAR_7->complete = VAR_5;
  FUNC_1(&VAR_7->list, VAR_4);
 }
 return 0;
}
