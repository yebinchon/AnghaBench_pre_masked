
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct circ_buf {int head; scalar_t__ buf; int tail; } ;
struct sdio_uart_port {int ier; int func; int write_lock; struct circ_buf xmit; } ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,unsigned char const*,int) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdio_uart_port*) ;
 int FUNC_5 (struct sdio_uart_port*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct tty_struct * VAR_3, const unsigned char *VAR_4,
      int VAR_5)
{
 struct sdio_uart_port *VAR_6 = VAR_3->driver_data;
 struct circ_buf *VAR_7 = &VAR_6->xmit;
 int VAR_8, VAR_9 = 0;

 if (!VAR_6->func)
  return -VAR_0;

 FUNC_6(&VAR_6->write_lock);
 while (1) {
  VAR_8 = FUNC_0(VAR_7->head, VAR_7->tail, VAR_2);
  if (VAR_5 < VAR_8)
   VAR_8 = VAR_5;
  if (VAR_8 <= 0)
   break;
  FUNC_1(VAR_7->buf + VAR_7->head, VAR_4, VAR_8);
  VAR_7->head = (VAR_7->head + VAR_8) & (VAR_2 - 1);
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
  VAR_9 += VAR_8;
 }
 FUNC_7(&VAR_6->write_lock);

 if ( !(VAR_6->ier & VAR_1)) {
  int VAR_10 = FUNC_2(VAR_6);
  if (!VAR_10) {
   FUNC_5(VAR_6);
   FUNC_3(VAR_6->func);
   FUNC_4(VAR_6);
  } else
   VAR_9 = VAR_10;
 }

 return VAR_9;
}
