
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshift; int iotype; int iobase; int membase; int hub6; } ;
struct uart_sunsu_port {TYPE_1__ port; } ;




 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_sunsu_port *VAR_0, int VAR_1)
{
 VAR_1 <<= VAR_0->port.regshift;

 switch (VAR_0->port.iotype) {
 case 129:
  FUNC_1(VAR_0->port.hub6 - 1 + VAR_1, VAR_0->port.iobase);
  return FUNC_0(VAR_0->port.iobase + 1);

 case 128:
  return FUNC_2(VAR_0->port.membase + VAR_1);

 default:
  return FUNC_0(VAR_0->port.iobase + VAR_1);
 }
}
