
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int flags; int iobase; int mapbase; int * membase; } ;
struct uart_txx9_port {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct uart_txx9_port *VAR_2)
{
 unsigned int VAR_3 = VAR_0;

 switch (VAR_2->port.iotype) {
 default:
  if (!VAR_2->port.mapbase)
   break;

  if (VAR_2->port.flags & VAR_1) {
   FUNC_0(VAR_2->port.membase);
   VAR_2->port.membase = ((void*)0);
  }

  FUNC_1(VAR_2->port.mapbase, VAR_3);
  break;

 case 128:
  FUNC_2(VAR_2->port.iobase, VAR_3);
  break;
 }
}
