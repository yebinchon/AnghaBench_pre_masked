
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int dummy; } ;
struct uart_port {int lock; } ;
struct uart_ip22zilog_port {int* curregs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct uart_ip22zilog_port* FUNC_0 (struct uart_port*) ;
 struct zilog_channel* FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_ip22zilog_port*) ;
 int FUNC_3 (struct uart_ip22zilog_port*,struct zilog_channel*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_9)
{
 struct uart_ip22zilog_port *VAR_10 = FUNC_0(VAR_9);
 struct zilog_channel *VAR_11;
 unsigned long VAR_12;

 if (FUNC_2(VAR_10))
  return;

 FUNC_4(&VAR_9->lock, VAR_12);

 VAR_11 = FUNC_1(VAR_9);


 VAR_10->curregs[VAR_2] &= ~VAR_4;
 VAR_10->curregs[VAR_3] &= ~VAR_7;


 VAR_10->curregs[VAR_1] &= ~(VAR_0 | VAR_8 | VAR_5);
 VAR_10->curregs[VAR_3] &= ~VAR_6;
 FUNC_3(VAR_10, VAR_11);

 FUNC_5(&VAR_9->lock, VAR_12);
}
