
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {struct cxacru_data* driver_data; } ;
struct usb_interface {int dummy; } ;
struct cxacru_data {scalar_t__ poll_state; scalar_t__ rcv_buf; scalar_t__ snd_buf; int rcv_urb; int snd_urb; int poll_work; int poll_state_serialize; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct cxacru_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct usbatm_data *VAR_2,
  struct usb_interface *VAR_3)
{
 struct cxacru_data *VAR_4 = VAR_2->driver_data;
 int VAR_5 = 1;

 FUNC_2("cxacru_unbind entered");

 if (!VAR_4) {
  FUNC_2("cxacru_unbind: NULL instance!");
  return;
 }

 FUNC_5(&VAR_4->poll_state_serialize);
 FUNC_0(VAR_4->poll_state == VAR_0);



 if (VAR_4->poll_state == VAR_1)
  VAR_5 = 0;


 VAR_4->poll_state = VAR_0;
 FUNC_6(&VAR_4->poll_state_serialize);

 if (VAR_5)
  FUNC_1(&VAR_4->poll_work);

 FUNC_8(VAR_4->snd_urb);
 FUNC_8(VAR_4->rcv_urb);
 FUNC_7(VAR_4->snd_urb);
 FUNC_7(VAR_4->rcv_urb);

 FUNC_3((unsigned long) VAR_4->snd_buf);
 FUNC_3((unsigned long) VAR_4->rcv_buf);

 FUNC_4(VAR_4);

 VAR_2->driver_data = ((void*)0);
}
