
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ktermios {int c_cflag; } ;
struct async_struct {int flags; int quot; int timeout; int xmit_fifo_size; int read_status_mask; int ignore_status_mask; unsigned int LCR; TYPE_3__* tty; int IER; TYPE_2__* state; } ;
struct TYPE_13__ {short serper; } ;
struct TYPE_12__ {TYPE_1__* termios; } ;
struct TYPE_11__ {int baud_base; int custom_divisor; } ;
struct TYPE_10__ {unsigned int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 short VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_4__ VAR_24 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_9(struct async_struct *VAR_25,
    struct ktermios *VAR_26)
{
 int VAR_27 = 0, VAR_28, VAR_29;
 unsigned VAR_30, VAR_31 = 0;
 int VAR_32;
 unsigned long VAR_33;

 if (!VAR_25->tty || !VAR_25->tty->termios)
  return;
 VAR_30 = VAR_25->tty->termios->c_cflag;



 VAR_31 = 3; VAR_32 = 10;
 if (VAR_30 & VAR_10) {
  VAR_31 |= 0x04;
  VAR_32++;
 }
 if (VAR_30 & VAR_12) {
  VAR_31 |= VAR_17;
  VAR_32++;
 }
 if (!(VAR_30 & VAR_13))
  VAR_31 |= VAR_16;






 VAR_29 = FUNC_8(VAR_25->tty);
 if (!VAR_29)
  VAR_29 = 9600;
 VAR_28 = VAR_25->state->baud_base;
 if (VAR_29 == 38400 &&
     ((VAR_25->flags & VAR_4) == VAR_3))
  VAR_27 = VAR_25->state->custom_divisor;
 else {
  if (VAR_29 == 134)

   VAR_27 = (2*VAR_28 / 269);
  else if (VAR_29)
   VAR_27 = VAR_28 / VAR_29;
 }

 if (!VAR_27 && VAR_26) {

  VAR_25->tty->termios->c_cflag &= ~VAR_5;
  VAR_25->tty->termios->c_cflag |= (VAR_26->c_cflag & VAR_5);
  VAR_29 = FUNC_8(VAR_25->tty);
  if (!VAR_29)
   VAR_29 = 9600;
  if (VAR_29 == 38400 &&
      ((VAR_25->flags & VAR_4) == VAR_3))
   VAR_27 = VAR_25->state->custom_divisor;
  else {
   if (VAR_29 == 134)

    VAR_27 = (2*VAR_28 / 269);
   else if (VAR_29)
    VAR_27 = VAR_28 / VAR_29;
  }
 }

 if (!VAR_27)
  VAR_27 = VAR_28 / 9600;
 VAR_25->quot = VAR_27;
 VAR_25->timeout = ((VAR_25->xmit_fifo_size*VAR_11*VAR_32*VAR_27) / VAR_28);
 VAR_25->timeout += VAR_11/50;


 VAR_25->IER &= ~VAR_15;
 if (VAR_25->flags & VAR_2)
  VAR_25->IER |= VAR_15;
 if (VAR_30 & VAR_9) {
  VAR_25->flags |= VAR_1;
  VAR_25->IER |= VAR_15;
 } else
  VAR_25->flags &= ~VAR_1;
 if (VAR_30 & VAR_6)
  VAR_25->flags &= ~VAR_0;
 else {
  VAR_25->flags |= VAR_0;
  VAR_25->IER |= VAR_15;
 }
 VAR_25->read_status_mask = VAR_22 | VAR_20;
 if (FUNC_3(VAR_25->tty))
  VAR_25->read_status_mask |= VAR_21 | VAR_23;
 if (FUNC_0(VAR_25->tty) || FUNC_4(VAR_25->tty))
  VAR_25->read_status_mask |= VAR_19;




 VAR_25->ignore_status_mask = 0;
 if (FUNC_2(VAR_25->tty))
  VAR_25->ignore_status_mask |= VAR_23 | VAR_21;
 if (FUNC_1(VAR_25->tty)) {
  VAR_25->ignore_status_mask |= VAR_19;




  if (FUNC_2(VAR_25->tty))
   VAR_25->ignore_status_mask |= VAR_22;
 }



 if ((VAR_30 & VAR_8) == 0)
  VAR_25->ignore_status_mask |= VAR_20;
 FUNC_6(VAR_33);

 {
   short VAR_34;


   VAR_34 = VAR_27 - 1;



 if(VAR_31 & VAR_17)
   VAR_34 |= (VAR_14);

 VAR_24.serper = VAR_34;
 FUNC_7();
 }

 VAR_25->LCR = VAR_31;
 FUNC_5(VAR_33);
}
