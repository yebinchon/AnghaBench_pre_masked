
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int overrun; int frame; int parity; int brk; } ;
struct uart_port {TYPE_1__ icount; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_5, unsigned int VAR_6)
{

 FUNC_0(VAR_5, VAR_3);

 if (VAR_6 & VAR_4) {

  VAR_6 &= ~(VAR_2 | VAR_0);
  VAR_5->icount.brk++;
 }
 if (VAR_6 & VAR_2)
  VAR_5->icount.parity++;
 if (VAR_6 & VAR_0)
  VAR_5->icount.frame++;
 if (VAR_6 & VAR_1)
  VAR_5->icount.overrun++;
}
