
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct sdio_uart_port*) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct sdio_uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 struct sdio_uart_port *VAR_4 = VAR_0->driver_data;
 int VAR_5;

 VAR_5 =FUNC_0(VAR_4);
 if(!VAR_5) {
  FUNC_2(VAR_4, VAR_2, VAR_3);
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
