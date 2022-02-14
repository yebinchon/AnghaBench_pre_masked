
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_10__ {unsigned char read_status_mask; int lock; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_8250_port {unsigned char lsr_saved_flags; TYPE_4__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_7__ {struct tty_struct* tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 int FUNC_0 (char*) ;
 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (struct uart_8250_port*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,unsigned char) ;
 int FUNC_8 (TYPE_4__*,unsigned char,unsigned char,unsigned char,char) ;
 scalar_t__ FUNC_9 (unsigned char) ;

__attribute__((used)) static void
FUNC_10(struct uart_8250_port *VAR_12, unsigned int *VAR_13)
{
 struct tty_struct *VAR_14 = VAR_12->port.state->port.tty;
 unsigned char VAR_15, VAR_16 = *VAR_13;
 int VAR_17 = 256;
 char VAR_18;

 do {
  if (FUNC_1(VAR_16 & VAR_7))
   VAR_15 = FUNC_2(VAR_12, VAR_11);
  else







   VAR_15 = 0;

  VAR_18 = VAR_2;
  VAR_12->port.icount.rx++;

  VAR_16 |= VAR_12->lsr_saved_flags;
  VAR_12->lsr_saved_flags = 0;

  if (FUNC_9(VAR_16 & VAR_6)) {



   if (VAR_16 & VAR_5) {
    VAR_16 &= ~(VAR_8 | VAR_10);
    VAR_12->port.icount.brk++;






    if (FUNC_6(&VAR_12->port))
     goto ignore_char;
   } else if (VAR_16 & VAR_10)
    VAR_12->port.icount.parity++;
   else if (VAR_16 & VAR_8)
    VAR_12->port.icount.frame++;
   if (VAR_16 & VAR_9)
    VAR_12->port.icount.overrun++;




   VAR_16 &= VAR_12->port.read_status_mask;

   if (VAR_16 & VAR_5) {
    FUNC_0("handling break....");
    VAR_18 = VAR_0;
   } else if (VAR_16 & VAR_10)
    VAR_18 = VAR_3;
   else if (VAR_16 & VAR_8)
    VAR_18 = VAR_1;
  }
  if (FUNC_7(&VAR_12->port, VAR_15))
   goto ignore_char;

  FUNC_8(&VAR_12->port, VAR_16, VAR_9, VAR_15, VAR_18);

ignore_char:
  VAR_16 = FUNC_2(VAR_12, VAR_4);
 } while ((VAR_16 & (VAR_7 | VAR_5)) && (VAR_17-- > 0));
 FUNC_4(&VAR_12->port.lock);
 FUNC_5(VAR_14);
 FUNC_3(&VAR_12->port.lock);
 *VAR_13 = VAR_16;
}
