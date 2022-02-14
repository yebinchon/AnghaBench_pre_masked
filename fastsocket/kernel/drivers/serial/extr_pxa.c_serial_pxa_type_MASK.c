
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pxa_port {char const* name; } ;
struct uart_port {int dummy; } ;



__attribute__((used)) static const char *
FUNC_0(struct uart_port *VAR_0)
{
 struct uart_pxa_port *VAR_1 = (struct uart_pxa_port *)VAR_0;
 return VAR_1->name;
}
