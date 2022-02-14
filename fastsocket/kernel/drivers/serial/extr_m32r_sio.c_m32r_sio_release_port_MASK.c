
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long regshift; int iotype; unsigned long mapbase; unsigned long iobase; int * membase; } ;
struct uart_sio_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long,int) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct uart_sio_port *VAR_1 = (struct uart_sio_port *)VAR_0;
 unsigned long VAR_2, VAR_3 = 0, VAR_4 = 0;

 VAR_4 <<= VAR_1->port.regshift;

 switch (VAR_1->port.iotype) {
 case 129:
  if (VAR_1->port.mapbase) {



   FUNC_0(VAR_1->port.membase);
   VAR_1->port.membase = ((void*)0);

   VAR_2 = VAR_1->port.mapbase;

   if (VAR_4)
    FUNC_1(VAR_2 + VAR_3, VAR_4);
   FUNC_1(VAR_2, 8 << VAR_1->port.regshift);
  }
  break;

 case 128:
  VAR_2 = VAR_1->port.iobase;

  if (VAR_4)
   FUNC_2(VAR_2 + VAR_3, VAR_4);
  FUNC_2(VAR_2 + VAR_3, 8 << VAR_1->port.regshift);
  break;

 default:
  break;
 }
}
