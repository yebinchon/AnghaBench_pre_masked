
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_pmac_port {unsigned char* curregs; int * node; } ;


 size_t VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_pmac_port*,size_t,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_pmac_port *VAR_4 = FUNC_3(VAR_2);
 unsigned char VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;

 if (VAR_4->node == ((void*)0))
  return;
 VAR_5 = VAR_6 = 0;

 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_6 |= VAR_1;

 FUNC_1(&VAR_2->lock, VAR_8);

 VAR_7 = (VAR_4->curregs[VAR_0] | VAR_5) & ~VAR_6;
 if (VAR_7 != VAR_4->curregs[VAR_0]) {
  VAR_4->curregs[VAR_0] = VAR_7;


  if (FUNC_0(VAR_4))
   return;
  FUNC_4(VAR_4, VAR_0, VAR_4->curregs[VAR_0]);
 }

 FUNC_2(&VAR_2->lock, VAR_8);
}
