
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_10__ {unsigned int ignore_status_mask; unsigned int read_status_mask; int lock; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_txx9_port {TYPE_4__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_7__ {struct tty_struct* tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (struct uart_txx9_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,unsigned char) ;
 int FUNC_6 (TYPE_4__*,unsigned int,unsigned int,unsigned char,char) ;
 scalar_t__ FUNC_7 (unsigned int) ;

__attribute__((used)) static inline void
FUNC_8(struct uart_txx9_port *VAR_12, unsigned int *VAR_13)
{
 struct tty_struct *VAR_14 = VAR_12->port.state->port.tty;
 unsigned char VAR_15;
 unsigned int VAR_16 = *VAR_13;
 int VAR_17 = 256;
 char VAR_18;
 unsigned int VAR_19;

 do {
  VAR_15 = FUNC_0(VAR_12, VAR_11);
  VAR_18 = VAR_2;
  VAR_12->port.icount.rx++;


  VAR_19 =
   VAR_12->port.ignore_status_mask & ~VAR_5;
  if (FUNC_7(VAR_16 & (VAR_6 | VAR_9 |
         VAR_7 | VAR_8))) {



   if (VAR_16 & VAR_6) {
    VAR_16 &= ~(VAR_7 | VAR_9);
    VAR_12->port.icount.brk++;






    if (FUNC_4(&VAR_12->port))
     goto ignore_char;
   } else if (VAR_16 & VAR_9)
    VAR_12->port.icount.parity++;
   else if (VAR_16 & VAR_7)
    VAR_12->port.icount.frame++;
   if (VAR_16 & VAR_8) {
    VAR_12->port.icount.overrun++;






    VAR_19 |=
     VAR_5;
   }




   VAR_16 &= VAR_12->port.read_status_mask;

   if (VAR_16 & VAR_6) {
    VAR_18 = VAR_0;
   } else if (VAR_16 & VAR_9)
    VAR_18 = VAR_3;
   else if (VAR_16 & VAR_7)
    VAR_18 = VAR_1;
  }
  if (FUNC_5(&VAR_12->port, VAR_15))
   goto ignore_char;

  FUNC_6(&VAR_12->port, VAR_16, VAR_8, VAR_15, VAR_18);

 ignore_char:
  VAR_12->port.ignore_status_mask = VAR_19;
  VAR_16 = FUNC_0(VAR_12, VAR_4);
 } while (!(VAR_16 & VAR_10) && (VAR_17-- > 0));
 FUNC_2(&VAR_12->port.lock);
 FUNC_3(VAR_14);
 FUNC_1(&VAR_12->port.lock);
 *VAR_13 = VAR_16;
}
