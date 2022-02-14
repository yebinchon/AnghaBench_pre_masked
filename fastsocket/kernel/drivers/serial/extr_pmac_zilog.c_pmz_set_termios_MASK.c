
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_pmac_port {int* curregs; } ;
struct ktermios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uart_pmac_port* FUNC_5 (struct uart_port*) ;
 int FUNC_6 (struct uart_pmac_port*,size_t,int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_5, struct ktermios *VAR_6,
       struct ktermios *VAR_7)
{
 struct uart_pmac_port *VAR_8 = FUNC_5(VAR_5);
 unsigned long VAR_9;

 FUNC_3(&VAR_5->lock, VAR_9);


 VAR_8->curregs[VAR_2] &= ~(VAR_0 | VAR_4 | VAR_3);
 FUNC_6(VAR_8, VAR_2, VAR_8->curregs[VAR_2]);


 FUNC_2(VAR_5, VAR_6, VAR_7);


 if (FUNC_1(VAR_8)) {
  VAR_8->curregs[VAR_2] |= VAR_1 | VAR_4;
  if (!FUNC_0(VAR_8))
   VAR_8->curregs[VAR_2] |= VAR_0;
  FUNC_6(VAR_8, VAR_2, VAR_8->curregs[VAR_2]);
 }
 FUNC_4(&VAR_5->lock, VAR_9);
}
