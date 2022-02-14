
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {unsigned int read_status_mask; int lock; TYPE_3__* state; TYPE_1__ icount; } ;
struct circ_buf {size_t head; size_t tail; scalar_t__ buf; } ;
struct atmel_uart_port {struct circ_buf rx_ring; } ;
struct atmel_uart_char {unsigned int status; int ch; } ;
struct TYPE_5__ {int tty; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct atmel_uart_port* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (struct uart_port*,unsigned int,unsigned int,int ,unsigned int) ;
 scalar_t__ FUNC_8 (unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_9)
{
 struct atmel_uart_port *VAR_10 = FUNC_3(VAR_9);
 struct circ_buf *VAR_11 = &VAR_10->rx_ring;
 unsigned int VAR_12;
 unsigned int VAR_13;

 while (VAR_11->head != VAR_11->tail) {
  struct atmel_uart_char VAR_14;


  FUNC_0();

  VAR_14 = ((struct atmel_uart_char *)VAR_11->buf)[VAR_11->tail];

  VAR_11->tail = (VAR_11->tail + 1) & (VAR_0 - 1);

  VAR_9->icount.rx++;
  VAR_13 = VAR_14.status;
  VAR_12 = VAR_7;





  if (FUNC_8(VAR_13 & (VAR_3 | VAR_1
           | VAR_2 | VAR_4))) {
   if (VAR_13 & VAR_4) {

    VAR_13 &= ~(VAR_3 | VAR_1);

    VAR_9->icount.brk++;
    if (FUNC_5(VAR_9))
     continue;
   }
   if (VAR_13 & VAR_3)
    VAR_9->icount.parity++;
   if (VAR_13 & VAR_1)
    VAR_9->icount.frame++;
   if (VAR_13 & VAR_2)
    VAR_9->icount.overrun++;

   VAR_13 &= VAR_9->read_status_mask;

   if (VAR_13 & VAR_4)
    VAR_12 = VAR_5;
   else if (VAR_13 & VAR_3)
    VAR_12 = VAR_8;
   else if (VAR_13 & VAR_1)
    VAR_12 = VAR_6;
  }


  if (FUNC_6(VAR_9, VAR_14.ch))
   continue;

  FUNC_7(VAR_9, VAR_13, VAR_2, VAR_14.ch, VAR_12);
 }





 FUNC_2(&VAR_9->lock);
 FUNC_4(VAR_9->state->port.tty);
 FUNC_1(&VAR_9->lock);
}
