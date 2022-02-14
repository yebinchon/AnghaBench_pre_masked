
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zilog_channel {int control; } ;
struct uart_port {int dummy; } ;


 struct zilog_channel* FUNC_0 (struct uart_port*) ;
 int FUNC_1 () ;
 unsigned char FUNC_2 (int *) ;

__attribute__((used)) static __inline__ unsigned char FUNC_3(struct uart_port *VAR_0)
{
 struct zilog_channel *VAR_1;
 unsigned char VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(&VAR_1->control);
 FUNC_1();

 return VAR_2;
}
