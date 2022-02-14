
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int iobase; int membase; } ;
struct uart_txx9_port {TYPE_1__ port; } ;



 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct uart_txx9_port *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_0->port.iotype) {
 default:
  FUNC_0(VAR_2, VAR_0->port.membase + VAR_1);
  break;
 case 128:
  FUNC_1(VAR_2, VAR_0->port.iobase + VAR_1);
  break;
 }
}
