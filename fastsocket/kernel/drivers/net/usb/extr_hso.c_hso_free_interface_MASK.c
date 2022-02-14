
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct tty_struct {int dummy; } ;
struct rfkill {int dummy; } ;
struct hso_serial {TYPE_1__* parent; int serial_lock; int tty; } ;
struct TYPE_12__ {int net; struct rfkill* rfkill; } ;
struct TYPE_11__ {int async_get_intf; int async_put_intf; struct usb_interface* interface; } ;
struct TYPE_10__ {int ref; struct usb_interface* interface; } ;
struct TYPE_9__ {int usb_gone; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 struct hso_serial* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_3__** VAR_3 ;
 int FUNC_9 (struct rfkill*) ;
 int FUNC_10 (struct rfkill*) ;
 TYPE_2__** VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tty_struct*) ;
 struct tty_struct* FUNC_14 (int ) ;
 int FUNC_15 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_16(struct usb_interface *VAR_5)
{
 struct hso_serial *VAR_6;
 struct tty_struct *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_4[VAR_8]
      && (VAR_4[VAR_8]->interface == VAR_5)) {
   VAR_6 = FUNC_2(VAR_4[VAR_8]);
   FUNC_11(&VAR_6->serial_lock);
   VAR_7 = FUNC_14(VAR_6->tty);
   FUNC_12(&VAR_6->serial_lock);
   if (VAR_7)
    FUNC_13(VAR_7);
   FUNC_6(&VAR_6->parent->mutex);
   FUNC_15(VAR_7);
   VAR_6->parent->usb_gone = 1;
   FUNC_7(&VAR_6->parent->mutex);
   FUNC_5(&VAR_4[VAR_8]->ref, VAR_2);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_3[VAR_8]
      && (VAR_3[VAR_8]->interface == VAR_5)) {
   struct rfkill *VAR_9 = FUNC_1(VAR_3[VAR_8])->rfkill;


   FUNC_8(FUNC_1(VAR_3[VAR_8])->net);
   FUNC_4(VAR_3[VAR_8]);
   FUNC_0(&VAR_3[VAR_8]->async_put_intf);
   FUNC_0(&VAR_3[VAR_8]->async_get_intf);
   if (VAR_9) {
    FUNC_10(VAR_9);
    FUNC_9(VAR_9);
   }
   FUNC_3(VAR_3[VAR_8]);
  }
 }
}
