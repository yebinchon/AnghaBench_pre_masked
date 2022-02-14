
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct pwc_device {int unplugged; int modlock; scalar_t__ vopen; int frameq; int error_status; int * udev; } ;
struct TYPE_2__ {struct pwc_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 TYPE_1__* VAR_2 ;
 int * FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pwc_device*) ;
 int FUNC_7 (struct pwc_device*) ;
 struct pwc_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_3)
{
 struct pwc_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_8 (VAR_3);
 FUNC_4(&VAR_4->modlock);
 FUNC_9 (VAR_3, ((void*)0));
 if (VAR_4 == ((void*)0)) {
  FUNC_1("pwc_disconnect() Called without private pointer.\n");
  goto disconnect_out;
 }
 if (VAR_4->udev == ((void*)0)) {
  FUNC_1("pwc_disconnect() already called for %p\n", VAR_4);
  goto disconnect_out;
 }
 if (VAR_4->udev != FUNC_3(VAR_3)) {
  FUNC_1("pwc_disconnect() Woops: pointer mismatch udev/pdev.\n");
  goto disconnect_out;
 }


 if (VAR_4->vopen) {
  FUNC_2("Disconnected while webcam is in use!\n");
  VAR_4->error_status = VAR_0;
 }


 FUNC_10(&VAR_4->frameq);

 if (VAR_4->vopen) {
  VAR_4->unplugged = 1;
  FUNC_7(VAR_4);
 } else {

  FUNC_0("Unregistering video device in disconnect().\n");
  FUNC_6(VAR_4);

disconnect_out:

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   if (VAR_2[VAR_5].pdev == VAR_4)
    VAR_2[VAR_5].pdev = ((void*)0);
 }

 FUNC_5(&VAR_4->modlock);
}
