
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int xmit; int uart_port; } ;
struct tty_struct {struct uart_state* driver_data; } ;


 int FUNC_0 (int ,int *,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 struct uart_state *VAR_2 = VAR_0->driver_data;

 return FUNC_0(VAR_2->uart_port, &VAR_2->xmit, VAR_1);
}
