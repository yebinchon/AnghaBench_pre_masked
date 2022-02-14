
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_icount {int overrun; int parity; int frame; int brk; int rx; } ;
struct uart_port {unsigned int read_status_mask; TYPE_2__* state; struct uart_icount icount; } ;
struct sbd_port {struct uart_port port; } ;
struct TYPE_3__ {int tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (struct sbd_port*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(struct sbd_port *VAR_11)
{
 struct uart_port *VAR_12 = &VAR_11->port;
 struct uart_icount *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17;

 for (VAR_17 = 16; VAR_17; VAR_17--) {
  VAR_14 = FUNC_0(VAR_11, VAR_6);
  if (!(VAR_14 & VAR_4))
   break;

  VAR_15 = FUNC_0(VAR_11, VAR_5);

  VAR_16 = VAR_9;

  VAR_13 = &VAR_12->icount;
  VAR_13->rx++;

  if (FUNC_5(VAR_14 &
        (VAR_3 | VAR_0 |
         VAR_2 | VAR_1))) {
   if (VAR_14 & VAR_3) {
    VAR_13->brk++;
    if (FUNC_2(VAR_12))
     continue;
   } else if (VAR_14 & VAR_0)
    VAR_13->frame++;
   else if (VAR_14 & VAR_2)
    VAR_13->parity++;
   if (VAR_14 & VAR_1)
    VAR_13->overrun++;

   VAR_14 &= VAR_12->read_status_mask;
   if (VAR_14 & VAR_3)
    VAR_16 = VAR_7;
   else if (VAR_14 & VAR_0)
    VAR_16 = VAR_8;
   else if (VAR_14 & VAR_2)
    VAR_16 = VAR_10;
  }

  if (FUNC_3(VAR_12, VAR_15))
   continue;

  FUNC_4(VAR_12, VAR_14, VAR_1, VAR_15, VAR_16);
 }

 FUNC_1(VAR_12->state->port.tty);
}
