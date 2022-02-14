
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {scalar_t__ open_count; TYPE_1__* parent; int retry_unthrottle_workqueue; int unthrottle_tasklet; int serial_lock; struct tty_struct* tty; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int ref; int mutex; int interface; int usb_gone; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tty_struct*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct tty_struct *VAR_1, struct file *VAR_2)
{
 struct hso_serial *VAR_3 = VAR_1->driver_data;
 u8 VAR_4;

 FUNC_0("Closing serial port");


 if (VAR_3 == ((void*)0))
  return;

 FUNC_4(&VAR_3->parent->mutex);
 VAR_4 = VAR_3->parent->usb_gone;

 if (!VAR_4)
  FUNC_10(VAR_3->parent->interface);



 VAR_3->open_count--;

 if (VAR_3->open_count <= 0) {
  VAR_3->open_count = 0;
  FUNC_6(&VAR_3->serial_lock);
  if (VAR_3->tty == VAR_1) {
   VAR_3->tty->driver_data = ((void*)0);
   VAR_3->tty = ((void*)0);
   FUNC_9(VAR_1);
  }
  FUNC_7(&VAR_3->serial_lock);
  if (!VAR_4)
   FUNC_2(VAR_3->parent);
  FUNC_8(&VAR_3->unthrottle_tasklet);
  FUNC_1(&VAR_3->retry_unthrottle_workqueue);
 }

 if (!VAR_4)
  FUNC_11(VAR_3->parent->interface);

 FUNC_5(&VAR_3->parent->mutex);

 FUNC_3(&VAR_3->parent->ref, VAR_0);
}
