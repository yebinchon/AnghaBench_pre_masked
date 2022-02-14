
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ count; int closing; struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {scalar_t__ opened; int open_lock; int * tty; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct sdio_uart_port*) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0, struct file * VAR_1)
{
 struct sdio_uart_port *VAR_2 = VAR_0->driver_data;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_2->open_lock);
 FUNC_0(!VAR_2->opened);






 if (VAR_0->count > VAR_2->opened) {
  FUNC_2(&VAR_2->open_lock);
  return;
 }

 if (--VAR_2->opened == 0) {
  VAR_0->closing = 1;
  FUNC_4(VAR_2);
  FUNC_5(VAR_0);
  VAR_2->tty = ((void*)0);
  VAR_0->driver_data = ((void*)0);
  VAR_0->closing = 0;
 }
 FUNC_2(&VAR_2->open_lock);
 FUNC_3(VAR_2);
}
