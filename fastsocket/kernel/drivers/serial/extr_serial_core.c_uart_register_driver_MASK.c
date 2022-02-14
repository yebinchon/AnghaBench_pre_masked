
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int close_delay; int closing_wait; } ;
struct uart_state {int tlet; struct tty_port port; } ;
struct uart_driver {int nr; struct uart_state* state; int minor; int major; int dev_name; int driver_name; int owner; struct tty_driver* tty_driver; } ;
struct TYPE_2__ {int c_cflag; int c_ispeed; int c_ospeed; } ;
struct tty_driver {int flags; struct uart_driver* driver_state; TYPE_1__ init_termios; int subtype; int type; int minor_start; int major; int name; int driver_name; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tty_driver* FUNC_1 (int) ;
 int FUNC_2 (struct uart_state*) ;
 struct uart_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct tty_driver*) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_driver*) ;
 int FUNC_8 (struct tty_driver*,int *) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_9(struct uart_driver *VAR_14)
{
 struct tty_driver *VAR_15 = ((void*)0);
 int VAR_16, VAR_17;

 FUNC_0(VAR_14->state);





 VAR_14->state = FUNC_3(sizeof(struct uart_state) * VAR_14->nr, VAR_5);
 VAR_17 = -VAR_4;
 if (!VAR_14->state)
  goto out;

 VAR_15 = FUNC_1(VAR_14->nr);
 if (!VAR_15)
  goto out;

 VAR_14->tty_driver = VAR_15;

 VAR_15->owner = VAR_14->owner;
 VAR_15->driver_name = VAR_14->driver_name;
 VAR_15->name = VAR_14->dev_name;
 VAR_15->major = VAR_14->major;
 VAR_15->minor_start = VAR_14->minor;
 VAR_15->type = VAR_10;
 VAR_15->subtype = VAR_7;
 VAR_15->init_termios = VAR_11;
 VAR_15->init_termios.c_cflag = VAR_0 | VAR_3 | VAR_2 | VAR_6 | VAR_1;
 VAR_15->init_termios.c_ispeed = VAR_15->init_termios.c_ospeed = 9600;
 VAR_15->flags = VAR_9 | VAR_8;
 VAR_15->driver_state = VAR_14;
 FUNC_8(VAR_15, &VAR_12);




 for (VAR_16 = 0; VAR_16 < VAR_14->nr; VAR_16++) {
  struct uart_state *VAR_18 = VAR_14->state + VAR_16;
  struct tty_port *VAR_19 = &VAR_18->port;

  FUNC_6(VAR_19);
  VAR_19->close_delay = 500;
  VAR_19->closing_wait = 30000;
  FUNC_5(&VAR_18->tlet, VAR_13,
        (unsigned long)VAR_18);
 }

 VAR_17 = FUNC_7(VAR_15);
 out:
 if (VAR_17 < 0) {
  FUNC_4(VAR_15);
  FUNC_2(VAR_14->state);
 }
 return VAR_17;
}
