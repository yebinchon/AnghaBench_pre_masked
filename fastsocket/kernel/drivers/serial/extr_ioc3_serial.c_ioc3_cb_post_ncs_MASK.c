
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_icount {int parity; int overrun; int frame; int brk; } ;
struct uart_port {struct uart_icount icount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_4, int VAR_5)
{
 struct uart_icount *VAR_6;

 VAR_6 = &VAR_4->icount;

 if (VAR_5 & VAR_0)
  VAR_6->brk++;
 if (VAR_5 & VAR_1)
  VAR_6->frame++;
 if (VAR_5 & VAR_2)
  VAR_6->overrun++;
 if (VAR_5 & VAR_3)
  VAR_6->parity++;
}
