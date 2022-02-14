
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct circ_buf {size_t head; scalar_t__ buf; int tail; } ;
struct atmel_uart_port {struct circ_buf rx_ring; } ;
struct atmel_uart_char {unsigned int status; unsigned int ch; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ,int) ;
 int FUNC_1 () ;
 struct atmel_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 struct atmel_uart_port *VAR_4 = FUNC_2(VAR_1);
 struct circ_buf *VAR_5 = &VAR_4->rx_ring;
 struct atmel_uart_char *VAR_6;

 if (!FUNC_0(VAR_5->head, VAR_5->tail, VAR_0))

  return;

 VAR_6 = &((struct atmel_uart_char *)VAR_5->buf)[VAR_5->head];
 VAR_6->status = VAR_2;
 VAR_6->ch = VAR_3;


 FUNC_1();

 VAR_5->head = (VAR_5->head + 1) & (VAR_0 - 1);
}
