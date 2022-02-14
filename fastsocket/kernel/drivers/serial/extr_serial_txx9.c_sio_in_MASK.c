
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int iobase; int membase; } ;
struct uart_txx9_port {TYPE_1__ port; } ;



 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct uart_txx9_port *VAR_0, int VAR_1)
{
 switch (VAR_0->port.iotype) {
 default:
  return FUNC_0(VAR_0->port.membase + VAR_1);
 case 128:
  return FUNC_1(VAR_0->port.iobase + VAR_1);
 }
}
