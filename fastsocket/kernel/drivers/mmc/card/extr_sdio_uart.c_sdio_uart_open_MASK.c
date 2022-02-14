
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; int index; } ;
struct sdio_uart_port {int open_lock; int opened; struct tty_struct* tty; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sdio_uart_port* FUNC_2 (int ) ;
 int FUNC_3 (struct sdio_uart_port*) ;
 int FUNC_4 (struct sdio_uart_port*) ;

__attribute__((used)) static int FUNC_5 (struct tty_struct *VAR_2, struct file * VAR_3)
{
 struct sdio_uart_port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2->index);
 if (!VAR_4)
  return -VAR_1;

 FUNC_0(&VAR_4->open_lock);





 if (VAR_2->driver_data && VAR_2->driver_data != VAR_4) {
  FUNC_1(&VAR_4->open_lock);
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 if (!VAR_4->opened) {
  VAR_2->driver_data = VAR_4;
  VAR_4->tty = VAR_2;
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5) {
   VAR_2->driver_data = ((void*)0);
   VAR_4->tty = ((void*)0);
   FUNC_1(&VAR_4->open_lock);
   FUNC_3(VAR_4);
   return VAR_5;
  }
 }
 VAR_4->opened++;
 FUNC_1(&VAR_4->open_lock);
 return 0;
}
