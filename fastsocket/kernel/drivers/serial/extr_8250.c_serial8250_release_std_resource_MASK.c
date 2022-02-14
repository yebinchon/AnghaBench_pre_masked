
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int flags; int iobase; int mapbase; int * membase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (struct uart_8250_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_8250_port *VAR_1)
{
 unsigned int VAR_2 = FUNC_3(VAR_1);

 switch (VAR_1->port.iotype) {
 case 134:
 case 128:
 case 130:
 case 131:
 case 133:
  if (!VAR_1->port.mapbase)
   break;

  if (VAR_1->port.flags & VAR_0) {
   FUNC_0(VAR_1->port.membase);
   VAR_1->port.membase = ((void*)0);
  }

  FUNC_1(VAR_1->port.mapbase, VAR_2);
  break;

 case 132:
 case 129:
  FUNC_2(VAR_1->port.iobase, VAR_2);
  break;
 }
}
