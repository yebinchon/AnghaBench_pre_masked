
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; scalar_t__ qlen; } ;
struct usbnet {int net; TYPE_1__ txq; int flags; int suspend_count; } ;
struct usb_interface {int dummy; } ;
struct TYPE_5__ {int event; } ;
typedef TYPE_2__ pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct usbnet* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usbnet*) ;

int FUNC_8 (struct usb_interface *VAR_3, pm_message_t VAR_4)
{
 struct usbnet *VAR_5 = FUNC_6(VAR_3);

 if (!VAR_5->suspend_count++) {
  FUNC_4(&VAR_5->txq.lock);

  if (VAR_5->txq.qlen && (VAR_4.event & VAR_2)) {
   FUNC_5(&VAR_5->txq.lock);
   return -VAR_0;
  } else {
   FUNC_3(VAR_1, &VAR_5->flags);
   FUNC_5(&VAR_5->txq.lock);
  }




  FUNC_2 (VAR_5->net);
  FUNC_7(VAR_5);
  FUNC_0(VAR_5);





  FUNC_1 (VAR_5->net);
 }
 return 0;
}
