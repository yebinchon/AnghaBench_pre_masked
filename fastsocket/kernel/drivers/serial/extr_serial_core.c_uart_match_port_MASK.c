
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int mapbase; int hub6; int iobase; } ;
int FUNC_0(struct uart_port *VAR_0, struct uart_port *VAR_1)
{
 if (VAR_0->iotype != VAR_1->iotype)
  return 0;

 switch (VAR_0->iotype) {
 case 129:
  return (VAR_0->iobase == VAR_1->iobase);
 case 132:
  return (VAR_0->iobase == VAR_1->iobase) &&
         (VAR_0->hub6 == VAR_1->hub6);
 case 131:
 case 130:
 case 134:
 case 128:
 case 133:
  return (VAR_0->mapbase == VAR_1->mapbase);
 }
 return 0;
}
