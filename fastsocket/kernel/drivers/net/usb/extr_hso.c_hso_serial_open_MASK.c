
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int low_latency; struct hso_serial* driver_data; int index; } ;
struct hso_serial {scalar_t__ magic; int open_count; TYPE_1__* parent; int retry_unthrottle_workqueue; int unthrottle_tasklet; int rx_state; int serial_lock; int tty; int minor; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int mutex; int interface; int ref; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct tty_struct*,int *) ;
 struct hso_serial* FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (struct tty_struct*,int *,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct tty_struct *VAR_9, struct file *VAR_10)
{
 struct hso_serial *VAR_11 = FUNC_4(VAR_9->index);
 int VAR_12;


 if (VAR_11 == ((void*)0) || VAR_11->magic != VAR_2) {
  FUNC_2(1);
  VAR_9->driver_data = ((void*)0);
  FUNC_0("Failed to open port");
  return -VAR_0;
 }

 FUNC_10(&VAR_11->parent->mutex);
 VAR_12 = FUNC_17(VAR_11->parent->interface);
 if (VAR_12 < 0)
  goto err_out;

 FUNC_0("Opening %d", VAR_11->minor);
 FUNC_8(&VAR_11->parent->ref);


 FUNC_12(&VAR_11->serial_lock);
 VAR_9->driver_data = VAR_11;
 FUNC_16(VAR_11->tty);
 VAR_11->tty = FUNC_15(VAR_9);
 FUNC_13(&VAR_11->serial_lock);


 VAR_11->open_count++;
 if (VAR_11->open_count == 1) {
  VAR_9->low_latency = 1;
  VAR_11->rx_state = VAR_3;

  FUNC_3(VAR_9, ((void*)0));
  FUNC_14(&VAR_11->unthrottle_tasklet,
        (void (*)(unsigned long))VAR_7,
        (unsigned long)VAR_11);
  FUNC_1(&VAR_11->retry_unthrottle_workqueue,
     VAR_8);
  VAR_12 = FUNC_6(VAR_11->parent, VAR_1);
  if (VAR_12) {
   FUNC_7(VAR_11->parent);
   VAR_11->open_count--;
   FUNC_9(&VAR_11->parent->ref, VAR_6);
  }
 } else {
  FUNC_0("Port was already open");
 }

 FUNC_18(VAR_11->parent->interface);


 if (VAR_12)
  FUNC_5(VAR_9, ((void*)0), VAR_5 | VAR_4, 0);
err_out:
 FUNC_11(&VAR_11->parent->mutex);
 return VAR_12;
}
