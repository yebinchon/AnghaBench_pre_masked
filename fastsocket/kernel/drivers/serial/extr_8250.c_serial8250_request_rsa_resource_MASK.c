
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long regshift; int iotype; unsigned long iobase; } ;
struct uart_8250_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;


 int FUNC_0 (unsigned long,unsigned int,char*) ;

__attribute__((used)) static int FUNC_1(struct uart_8250_port *VAR_3)
{
 unsigned long VAR_4 = VAR_2 << VAR_3->port.regshift;
 unsigned int VAR_5 = 8 << VAR_3->port.regshift;
 int VAR_6 = -VAR_1;

 switch (VAR_3->port.iotype) {
 case 129:
 case 128:
  VAR_4 += VAR_3->port.iobase;
  if (FUNC_0(VAR_4, VAR_5, "serial-rsa"))
   VAR_6 = 0;
  else
   VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
