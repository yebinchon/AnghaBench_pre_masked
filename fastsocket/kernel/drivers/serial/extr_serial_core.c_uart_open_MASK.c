
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_port {int count; int flags; int mutex; } ;
struct uart_state {TYPE_2__* uart_port; struct tty_port port; } ;
struct uart_driver {int dummy; } ;
struct tty_struct {int index; int low_latency; scalar_t__ alt_speed; struct uart_state* driver_data; TYPE_1__* driver; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int flags; struct uart_state* state; } ;
struct TYPE_3__ {int num; scalar_t__ driver_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct uart_state*) ;
 int FUNC_2 (struct uart_state*) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (struct file*) ;
 int FUNC_8 (struct tty_port*,struct tty_struct*) ;
 int FUNC_9 (struct file*,struct uart_state*) ;
 int FUNC_10 (struct uart_state*,int ) ;
 struct uart_state* FUNC_11 (struct uart_driver*,int) ;
 int FUNC_12 (struct uart_state*,int ) ;
 int FUNC_13 (struct uart_state*) ;

__attribute__((used)) static int FUNC_14(struct tty_struct *VAR_5, struct file *VAR_6)
{
 struct uart_driver *VAR_7 = (struct uart_driver *)VAR_5->driver->driver_state;
 struct uart_state *VAR_8;
 struct tty_port *VAR_9;
 int VAR_10, VAR_11 = VAR_5->index;

 FUNC_0(!FUNC_3());
 FUNC_5("uart_open(%d) called\n", VAR_11);






 VAR_10 = -VAR_3;
 if (VAR_11 >= VAR_5->driver->num)
  goto fail;
 VAR_8 = FUNC_11(VAR_7, VAR_11);
 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  goto fail;
 }
 VAR_9 = &VAR_8->port;






 VAR_5->driver_data = VAR_8;
 VAR_8->uart_port->state = VAR_8;
 VAR_5->low_latency = (VAR_8->uart_port->flags & VAR_4) ? 1 : 0;
 VAR_5->alt_speed = 0;
 FUNC_8(VAR_9, VAR_5);




 if (FUNC_7(VAR_6)) {
  VAR_10 = -VAR_2;
  VAR_9->count--;
  FUNC_4(&VAR_9->mutex);
  goto fail;
 }




 if (VAR_9->count == 1)
  FUNC_10(VAR_8, 0);




 VAR_10 = FUNC_12(VAR_8, 0);




 if (VAR_10 == 0)
  VAR_10 = FUNC_9(VAR_6, VAR_8);
 FUNC_4(&VAR_9->mutex);




 if (VAR_10 == 0 && !(VAR_9->flags & VAR_1)) {
  FUNC_6(VAR_0, &VAR_9->flags);

  FUNC_13(VAR_8);
 }

fail:
 return VAR_10;
}
