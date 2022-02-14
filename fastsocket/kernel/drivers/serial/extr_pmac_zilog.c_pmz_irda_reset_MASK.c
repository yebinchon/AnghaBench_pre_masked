
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_pmac_port {int * curregs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct uart_pmac_port*,size_t,int ) ;
 int FUNC_2 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_pmac_port *VAR_2)
{
 VAR_2->curregs[VAR_1] |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_2->curregs[VAR_1]);
 FUNC_2(VAR_2);
 FUNC_0(110);
 VAR_2->curregs[VAR_1] &= ~VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_2->curregs[VAR_1]);
 FUNC_2(VAR_2);
 FUNC_0(10);
}
