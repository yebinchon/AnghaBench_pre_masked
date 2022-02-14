
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct camera_data {scalar_t__ open_count; int wq_stream; TYPE_1__* curbuff; scalar_t__ buffers; scalar_t__ present; } ;
struct TYPE_2__ {scalar_t__ length; int status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (struct camera_data*) ;
 int FUNC_4 (struct camera_data*) ;
 int FUNC_5 (int *,struct usb_interface*) ;
 struct camera_data* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_2)
{
 struct camera_data *VAR_3 = FUNC_6(VAR_2);
 FUNC_7(VAR_2, ((void*)0));
 VAR_3->present = 0;

 FUNC_0("Stopping stream\n");
 FUNC_3(VAR_3);

 FUNC_0("Unregistering camera\n");
 FUNC_2(VAR_3);

 if(VAR_3->buffers) {
  FUNC_0("Wakeup waiting processes\n");
  VAR_3->curbuff->status = VAR_0;
  VAR_3->curbuff->length = 0;
  if (FUNC_8(&VAR_3->wq_stream))
   FUNC_9(&VAR_3->wq_stream);
 }

 FUNC_0("Releasing interface\n");
 FUNC_5(&VAR_1, VAR_2);

 if (VAR_3->open_count == 0) {
  FUNC_0("Freeing camera structure\n");
  FUNC_4(VAR_3);
 }

 FUNC_1("CPiA2 camera disconnected.\n");
}
