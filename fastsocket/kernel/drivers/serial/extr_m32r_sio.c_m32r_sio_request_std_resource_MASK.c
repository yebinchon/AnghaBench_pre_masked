
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshift; int iotype; unsigned long mapbase; int iobase; } ;
struct uart_sio_port {TYPE_1__ port; } ;
struct resource {int dummy; } ;


 int VAR_0 ;


 struct resource* FUNC_0 (unsigned long,unsigned int,char*) ;
 struct resource* FUNC_1 (int ,unsigned int,char*) ;

__attribute__((used)) static int
FUNC_2(struct uart_sio_port *VAR_1, struct resource **VAR_2)
{
 unsigned int VAR_3 = 8 << VAR_1->port.regshift;

 unsigned long VAR_4;

 int VAR_5 = 0;

 switch (VAR_1->port.iotype) {
 case 129:
  if (VAR_1->port.mapbase) {



   VAR_4 = VAR_1->port.mapbase;
   *VAR_2 = FUNC_0(VAR_4, VAR_3, "serial");

   if (!*VAR_2)
    VAR_5 = -VAR_0;
  }
  break;

 case 128:
  *VAR_2 = FUNC_1(VAR_1->port.iobase, VAR_3, "serial");
  if (!*VAR_2)
   VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
