
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadgetfs_event {int type; } ;
struct dev_data {int setup_abort; unsigned int ev_next; struct usb_gadgetfs_event* event; int state; } ;
typedef enum usb_gadgetfs_event_type { ____Placeholder_usb_gadgetfs_event_type } usb_gadgetfs_event_type ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dev_data*,char*,unsigned int,int) ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct dev_data*,char*,int,int) ;
 int FUNC_4 (struct usb_gadgetfs_event*,struct usb_gadgetfs_event*,int) ;
 int FUNC_5 (struct usb_gadgetfs_event*,int ,int) ;

__attribute__((used)) static struct usb_gadgetfs_event *
FUNC_6 (struct dev_data *VAR_2, enum usb_gadgetfs_event_type VAR_3)
{
 struct usb_gadgetfs_event *VAR_4;
 unsigned VAR_5;

 switch (VAR_3) {

 case 130:
  if (VAR_2->state == VAR_1)
   VAR_2->setup_abort = 1;

 case 131:
  VAR_2->ev_next = 0;
  break;
 case 129:
 case 128:

  for (VAR_5 = 0; VAR_5 != VAR_2->ev_next; VAR_5++) {
   if (VAR_2->event [VAR_5].type != VAR_3)
    continue;
   FUNC_2(VAR_2, "discard old event[%d] %d\n", VAR_5, VAR_3);
   VAR_2->ev_next--;
   if (VAR_5 == VAR_2->ev_next)
    break;

   FUNC_4 (&VAR_2->event [VAR_5], &VAR_2->event [VAR_5 + 1],
    sizeof (struct usb_gadgetfs_event)
     * (VAR_2->ev_next - VAR_5));
  }
  break;
 default:
  FUNC_0 ();
 }
 FUNC_3(VAR_2, "event[%d] = %d\n", VAR_2->ev_next, VAR_3);
 VAR_4 = &VAR_2->event [VAR_2->ev_next++];
 FUNC_1 (VAR_2->ev_next > VAR_0);
 FUNC_5 (VAR_4, 0, sizeof *VAR_4);
 VAR_4->type = VAR_3;
 return VAR_4;
}
