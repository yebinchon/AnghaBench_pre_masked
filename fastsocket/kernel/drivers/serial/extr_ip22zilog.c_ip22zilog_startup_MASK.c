
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_ip22zilog_port {int dummy; } ;


 struct uart_ip22zilog_port* FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_ip22zilog_port*) ;
 int FUNC_2 (struct uart_ip22zilog_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_0)
{
 struct uart_ip22zilog_port *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 if (FUNC_1(VAR_1))
  return 0;

 FUNC_3(&VAR_0->lock, VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(&VAR_0->lock, VAR_2);
 return 0;
}
