
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_12__ {int read_status_mask; scalar_t__ line; TYPE_4__* cons; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_pxa_port {int lsr_break_flag; TYPE_5__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_11__ {scalar_t__ index; } ;
struct TYPE_8__ {struct tty_struct* tty; } ;
struct TYPE_9__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (struct uart_pxa_port*,int ) ;
 int FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*,unsigned int) ;
 int FUNC_4 (TYPE_5__*,int,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6(struct uart_pxa_port *VAR_11, int *VAR_12)
{
 struct tty_struct *VAR_13 = VAR_11->port.state->port.tty;
 unsigned int VAR_14, VAR_15;
 int VAR_16 = 256;

 do {
  VAR_14 = FUNC_0(VAR_11, VAR_10);
  VAR_15 = VAR_2;
  VAR_11->port.icount.rx++;

  if (FUNC_5(*VAR_12 & (VAR_5 | VAR_9 |
           VAR_7 | VAR_8))) {



   if (*VAR_12 & VAR_5) {
    *VAR_12 &= ~(VAR_7 | VAR_9);
    VAR_11->port.icount.brk++;






    if (FUNC_2(&VAR_11->port))
     goto ignore_char;
   } else if (*VAR_12 & VAR_9)
    VAR_11->port.icount.parity++;
   else if (*VAR_12 & VAR_7)
    VAR_11->port.icount.frame++;
   if (*VAR_12 & VAR_8)
    VAR_11->port.icount.overrun++;




   *VAR_12 &= VAR_11->port.read_status_mask;
   if (*VAR_12 & VAR_5) {
    VAR_15 = VAR_0;
   } else if (*VAR_12 & VAR_9)
    VAR_15 = VAR_3;
   else if (*VAR_12 & VAR_7)
    VAR_15 = VAR_1;
  }

  if (FUNC_3(&VAR_11->port, VAR_14))
   goto ignore_char;

  FUNC_4(&VAR_11->port, *VAR_12, VAR_8, VAR_14, VAR_15);

 ignore_char:
  *VAR_12 = FUNC_0(VAR_11, VAR_4);
 } while ((*VAR_12 & VAR_6) && (VAR_16-- > 0));
 FUNC_1(VAR_13);
}
