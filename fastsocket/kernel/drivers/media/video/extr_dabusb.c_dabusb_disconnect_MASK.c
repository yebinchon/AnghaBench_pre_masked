
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_t ;
struct usb_interface {int dummy; } ;
typedef TYPE_1__* pdabusb_t ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int remove_pending; scalar_t__ state; scalar_t__ overruns; int * usbdev; int remove_ok; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;
 TYPE_1__* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10 (struct usb_interface *VAR_5)
{
 wait_queue_t VAR_6;
 pdabusb_t VAR_7 = FUNC_7 (VAR_5);

 FUNC_1("dabusb_disconnect");

 FUNC_2(&VAR_6, VAR_3);

 FUNC_8 (VAR_5, ((void*)0));
 if (VAR_7) {
  FUNC_6 (VAR_5, &VAR_4);
  VAR_7->remove_pending = 1;
  FUNC_9 (&VAR_7->wait);
  FUNC_0(&VAR_7->remove_ok, &VAR_6);
  FUNC_5(VAR_1);
  if (VAR_7->state == VAR_2)
   FUNC_4();
  VAR_3->state = VAR_0;
  FUNC_3(&VAR_7->remove_ok, &VAR_6);

  VAR_7->usbdev = ((void*)0);
  VAR_7->overruns = 0;
 }
}
