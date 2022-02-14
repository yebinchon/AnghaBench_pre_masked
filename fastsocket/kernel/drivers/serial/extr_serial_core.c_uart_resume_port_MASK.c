
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_port {int flags; int mutex; TYPE_1__* tty; } ;
struct uart_state {struct tty_port port; } ;
struct uart_port {int line; int lock; int mctrl; struct uart_ops* ops; TYPE_2__* cons; scalar_t__ suspended; int irq; int dev; } ;
struct uart_ops {int (* startup ) (struct uart_port*) ;int (* start_tx ) (struct uart_port*) ;int (* set_mctrl ) (struct uart_port*,int ) ;int (* set_termios ) (struct uart_port*,struct ktermios*,int *) ;} ;
struct uart_match {struct uart_driver* member_1; struct uart_port* member_0; } ;
struct uart_driver {struct uart_state* state; } ;
struct ktermios {scalar_t__ c_cflag; int c_ospeed; int c_ispeed; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ cflag; } ;
struct TYPE_3__ {struct ktermios* termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 struct device* FUNC_2 (int ,struct uart_match*,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ktermios*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct uart_port*,struct ktermios*,int *) ;
 int FUNC_12 (struct uart_port*,struct ktermios*,int *) ;
 int FUNC_13 (struct uart_port*,int ) ;
 int FUNC_14 (struct uart_port*) ;
 int FUNC_15 (struct uart_port*,int ) ;
 int FUNC_16 (struct uart_port*) ;
 int FUNC_17 (struct ktermios*) ;
 int FUNC_18 (struct ktermios*) ;
 int FUNC_19 (struct uart_state*,int ) ;
 int FUNC_20 (struct uart_state*,int *) ;
 scalar_t__ FUNC_21 (struct uart_port*) ;
 int FUNC_22 (struct uart_state*) ;

int FUNC_23(struct uart_driver *VAR_5, struct uart_port *VAR_6)
{
 struct uart_state *VAR_7 = VAR_5->state + VAR_6->line;
 struct tty_port *VAR_8 = &VAR_7->port;
 struct device *VAR_9;
 struct uart_match VAR_10 = {VAR_6, VAR_5};
 struct ktermios VAR_11;

 FUNC_6(&VAR_8->mutex);

 if (!VAR_3 && FUNC_21(VAR_6)) {




  FUNC_5(&VAR_11, 0, sizeof(struct ktermios));
  VAR_11.c_cflag = VAR_6->cons->cflag;



  if (VAR_11.c_cflag == 0)
   VAR_11 = *VAR_7->port.tty->termios;
  else {
   VAR_11.c_ispeed = VAR_11.c_ospeed =
    FUNC_18(&VAR_11);
   VAR_11.c_ispeed = VAR_11.c_ospeed =
    FUNC_17(&VAR_11);
  }
  VAR_6->ops->set_termios(VAR_6, &VAR_11, ((void*)0));
  FUNC_7(&VAR_8->mutex);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_6->dev, &VAR_10, VAR_4);
 if (!VAR_6->suspended && FUNC_3(VAR_9)) {
  FUNC_4(VAR_6->irq);
  FUNC_7(&VAR_8->mutex);
  return 0;
 }
 VAR_6->suspended = 0;




 if (FUNC_21(VAR_6)) {
  FUNC_19(VAR_7, 0);
  VAR_6->ops->set_termios(VAR_6, &VAR_11, ((void*)0));
  FUNC_1(VAR_6->cons);
 }

 if (VAR_8->flags & VAR_2) {
  const struct uart_ops *VAR_12 = VAR_6->ops;
  int VAR_13;

  FUNC_19(VAR_7, 0);
  FUNC_9(&VAR_6->lock);
  VAR_12->set_mctrl(VAR_6, 0);
  FUNC_10(&VAR_6->lock);
  VAR_13 = VAR_12->startup(VAR_6);
  if (VAR_13 == 0) {
   FUNC_20(VAR_7, ((void*)0));
   FUNC_9(&VAR_6->lock);
   VAR_12->set_mctrl(VAR_6, VAR_6->mctrl);
   VAR_12->start_tx(VAR_6);
   FUNC_10(&VAR_6->lock);
   FUNC_8(VAR_0, &VAR_8->flags);
  } else {





   FUNC_22(VAR_7);
  }

  FUNC_0(VAR_1, &VAR_8->flags);
 }

 FUNC_7(&VAR_8->mutex);

 return 0;
}
