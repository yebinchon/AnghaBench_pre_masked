
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iotype; int flags; int iobase; int mapbase; int membase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,char*) ;
 int FUNC_3 (int ,unsigned int,char*) ;
 unsigned int FUNC_4 (struct uart_8250_port*) ;

__attribute__((used)) static int FUNC_5(struct uart_8250_port *VAR_3)
{
 unsigned int VAR_4 = FUNC_4(VAR_3);
 int VAR_5 = 0;

 switch (VAR_3->port.iotype) {
 case 134:
 case 128:
 case 130:
 case 131:
 case 133:
  if (!VAR_3->port.mapbase)
   break;

  if (!FUNC_2(VAR_3->port.mapbase, VAR_4, "serial")) {
   VAR_5 = -VAR_0;
   break;
  }

  if (VAR_3->port.flags & VAR_2) {
   VAR_3->port.membase = FUNC_0(VAR_3->port.mapbase,
         VAR_4);
   if (!VAR_3->port.membase) {
    FUNC_1(VAR_3->port.mapbase, VAR_4);
    VAR_5 = -VAR_1;
   }
  }
  break;

 case 132:
 case 129:
  if (!FUNC_3(VAR_3->port.iobase, VAR_4, "serial"))
   VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
