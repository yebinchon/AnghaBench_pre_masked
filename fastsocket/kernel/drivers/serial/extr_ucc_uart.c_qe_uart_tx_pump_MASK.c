
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; } ;
struct uart_port {char x_char; TYPE_2__ icount; TYPE_1__* state; } ;
struct uart_qe_port {unsigned int tx_fifosize; struct qe_bd* tx_cur; struct qe_bd* tx_bd_base; struct qe_bd* rx_cur; struct uart_port port; } ;
struct qe_bd {int status; int length; int buf; } ;
struct circ_buf {size_t tail; size_t head; int * buf; } ;
struct TYPE_3__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 unsigned char* FUNC_2 (int ,struct uart_qe_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;

__attribute__((used)) static int FUNC_9(struct uart_qe_port *VAR_4)
{
 struct qe_bd *VAR_5;
 unsigned char *VAR_6;
 unsigned int VAR_7;
 struct uart_port *VAR_8 = &VAR_4->port;
 struct circ_buf *VAR_9 = &VAR_8->state->xmit;

 VAR_5 = VAR_4->rx_cur;


 if (VAR_8->x_char) {

  VAR_5 = VAR_4->tx_cur;

  VAR_6 = FUNC_2(VAR_5->buf, VAR_4);

  *VAR_6++ = VAR_8->x_char;
  FUNC_1(&VAR_5->length, 1);
  FUNC_4(&VAR_5->status, VAR_0);

  if (FUNC_0(&VAR_5->status) & VAR_1)
   VAR_5 = VAR_4->tx_bd_base;
  else
   VAR_5++;
  VAR_4->tx_cur = VAR_5;

  VAR_8->icount.tx++;
  VAR_8->x_char = 0;
  return 1;
 }

 if (FUNC_6(VAR_9) || FUNC_7(VAR_8)) {
  FUNC_3(VAR_8);
  return 0;
 }


 VAR_5 = VAR_4->tx_cur;

 while (!(FUNC_0(&VAR_5->status) & VAR_0) &&
        (VAR_9->tail != VAR_9->head)) {
  VAR_7 = 0;
  VAR_6 = FUNC_2(VAR_5->buf, VAR_4);
  while (VAR_7 < VAR_4->tx_fifosize) {
   *VAR_6++ = VAR_9->buf[VAR_9->tail];
   VAR_9->tail = (VAR_9->tail + 1) & (VAR_2 - 1);
   VAR_8->icount.tx++;
   VAR_7++;
   if (VAR_9->head == VAR_9->tail)
    break;
  }

  FUNC_1(&VAR_5->length, VAR_7);
  FUNC_4(&VAR_5->status, VAR_0);


  if (FUNC_0(&VAR_5->status) & VAR_1)
   VAR_5 = VAR_4->tx_bd_base;
  else
   VAR_5++;
 }
 VAR_4->tx_cur = VAR_5;

 if (FUNC_5(VAR_9) < VAR_3)
  FUNC_8(VAR_8);

 if (FUNC_6(VAR_9)) {



  FUNC_3(VAR_8);
  return 0;
 }

 return 1;
}
