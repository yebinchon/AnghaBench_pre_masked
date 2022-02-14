
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tty_struct {size_t index; struct acm* driver_data; int flags; } ;
struct file {int dummy; } ;
struct TYPE_13__ {int count; int flags; } ;
struct acm {int ctrlout; int ctrl_caps; int rx_buflimit; TYPE_7__ port; int mutex; TYPE_5__* control; TYPE_3__* ctrlurb; int urb_task; scalar_t__ throttle; int spare_read_bufs; TYPE_2__* rb; int spare_read_urbs; TYPE_1__* ru; int filled_read_bufs; scalar_t__ dev; } ;
struct TYPE_12__ {int needs_remote_wakeup; } ;
struct TYPE_11__ {scalar_t__ dev; } ;
struct TYPE_10__ {int list; } ;
struct TYPE_9__ {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct acm*,int) ;
 struct acm** VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_7__*,struct tty_struct*,struct file*) ;
 int FUNC_9 (TYPE_7__*,struct tty_struct*) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_14(struct tty_struct *VAR_10, struct file *VAR_11)
{
 struct acm *VAR_12;
 int VAR_13 = -VAR_4;
 int VAR_14;
 FUNC_2("Entering acm_tty_open.");

 FUNC_4(&VAR_9);

 VAR_12 = VAR_8[VAR_10->index];
 if (!VAR_12 || !VAR_12->dev)
  goto err_out;
 else
  VAR_13 = 0;

 FUNC_6(VAR_6, &VAR_10->flags);

 VAR_10->driver_data = VAR_12;
 FUNC_9(&VAR_12->port, VAR_10);

 if (FUNC_10(VAR_12->control) < 0)
  goto early_bail;
 else
  VAR_12->control->needs_remote_wakeup = 1;

 FUNC_4(&VAR_12->mutex);
 if (VAR_12->port.count++) {
  FUNC_11(VAR_12->control);
  goto done;
 }

 VAR_12->ctrlurb->dev = VAR_12->dev;
 if (FUNC_13(VAR_12->ctrlurb, VAR_5)) {
  FUNC_2("usb_submit_urb(ctrl irq) failed");
  goto bail_out;
 }

 if (0 > FUNC_1(VAR_12, VAR_12->ctrlout = VAR_0 | VAR_1) &&
     (VAR_12->ctrl_caps & VAR_7))
  goto full_bailout;

 FUNC_11(VAR_12->control);

 FUNC_0(&VAR_12->spare_read_urbs);
 FUNC_0(&VAR_12->spare_read_bufs);
 FUNC_0(&VAR_12->filled_read_bufs);

 for (VAR_14 = 0; VAR_14 < VAR_12->rx_buflimit; VAR_14++)
  FUNC_3(&(VAR_12->ru[VAR_14].list), &VAR_12->spare_read_urbs);
 for (VAR_14 = 0; VAR_14 < VAR_12->rx_buflimit; VAR_14++)
  FUNC_3(&(VAR_12->rb[VAR_14].list), &VAR_12->spare_read_bufs);

 VAR_12->throttle = 0;

 FUNC_6(VAR_2, &VAR_12->port.flags);
 VAR_13 = FUNC_8(&VAR_12->port, VAR_10, VAR_11);
 FUNC_7(&VAR_12->urb_task);
done:
 FUNC_5(&VAR_12->mutex);
err_out:
 FUNC_5(&VAR_9);
 return VAR_13;

full_bailout:
 FUNC_12(VAR_12->ctrlurb);
bail_out:
 FUNC_11(VAR_12->control);
 VAR_12->port.count--;
 FUNC_5(&VAR_12->mutex);
early_bail:
 FUNC_5(&VAR_9);
 FUNC_9(&VAR_12->port, ((void*)0));
 return -VAR_3;
}
