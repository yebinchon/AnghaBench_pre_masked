
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_11__ {int read_status_mask; scalar_t__ line; int ignore_status_mask; TYPE_4__* cons; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_sio_port {int lsr_break_flag; TYPE_5__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_10__ {scalar_t__ index; } ;
struct TYPE_7__ {struct tty_struct* tty; } ;
struct TYPE_8__ {TYPE_1__ port; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct uart_sio_port*,int ) ;
 unsigned char FUNC_2 (struct uart_sio_port*,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,unsigned char) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct uart_sio_port *VAR_12, int *VAR_13)
{
 struct tty_struct *VAR_14 = VAR_12->port.state->port.tty;
 unsigned char VAR_15;
 unsigned char VAR_16;
 int VAR_17 = 256;

 do {
  VAR_15 = FUNC_2(VAR_12, VAR_0);
  VAR_16 = VAR_3;
  VAR_12->port.icount.rx++;

  if (FUNC_7(*VAR_13 & (VAR_7 | VAR_11 |
           VAR_9 | VAR_10))) {



   if (*VAR_13 & VAR_7) {
    *VAR_13 &= ~(VAR_9 | VAR_11);
    VAR_12->port.icount.brk++;






    if (FUNC_5(&VAR_12->port))
     goto ignore_char;
   } else if (*VAR_13 & VAR_11)
    VAR_12->port.icount.parity++;
   else if (*VAR_13 & VAR_9)
    VAR_12->port.icount.frame++;
   if (*VAR_13 & VAR_10)
    VAR_12->port.icount.overrun++;




   *VAR_13 &= VAR_12->port.read_status_mask;

   if (VAR_12->port.line == VAR_12->port.cons->index) {

    *VAR_13 |= VAR_12->lsr_break_flag;
    VAR_12->lsr_break_flag = 0;
   }

   if (*VAR_13 & VAR_7) {
    FUNC_0("handling break....");
    VAR_16 = VAR_1;
   } else if (*VAR_13 & VAR_11)
    VAR_16 = VAR_5;
   else if (*VAR_13 & VAR_9)
    VAR_16 = VAR_2;
  }
  if (FUNC_6(&VAR_12->port, VAR_15))
   goto ignore_char;
  if ((*VAR_13 & VAR_12->port.ignore_status_mask) == 0)
   FUNC_4(VAR_14, VAR_15, VAR_16);

  if (*VAR_13 & VAR_10) {





   FUNC_4(VAR_14, 0, VAR_4);
  }
 ignore_char:
  *VAR_13 = FUNC_1(VAR_12, VAR_6);
 } while ((*VAR_13 & VAR_8) && (VAR_17-- > 0));
 FUNC_3(VAR_14);
}
