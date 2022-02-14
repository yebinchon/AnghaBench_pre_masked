
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sa1100_port {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sa1100_port*) ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2)
{
 struct sa1100_port *VAR_3 = (struct sa1100_port *)VAR_2;

 return FUNC_0(VAR_3) & VAR_1 ? 0 : VAR_0;
}
