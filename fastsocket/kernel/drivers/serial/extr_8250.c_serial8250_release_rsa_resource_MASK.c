
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long regshift; int iotype; int iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 unsigned long VAR_0 ;


 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct uart_8250_port *VAR_1)
{
 unsigned long VAR_2 = VAR_0 << VAR_1->port.regshift;
 unsigned int VAR_3 = 8 << VAR_1->port.regshift;

 switch (VAR_1->port.iotype) {
 case 129:
 case 128:
  FUNC_0(VAR_1->port.iobase + VAR_2, VAR_3);
  break;
 }
}
