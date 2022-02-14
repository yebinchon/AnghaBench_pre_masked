
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 () ;
 unsigned short FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned short) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3)
{
 int VAR_4 = VAR_3->line;
 unsigned short VAR_5;

 VAR_5 = FUNC_1(&VAR_2[VAR_4]);
 VAR_5 &= ~(VAR_0 | VAR_1);
 FUNC_2(&VAR_2[VAR_4], VAR_5);
 FUNC_0();
 VAR_5 |= (VAR_0 | VAR_1);
 FUNC_2(&VAR_2[VAR_4], VAR_5);
 FUNC_0();
}
