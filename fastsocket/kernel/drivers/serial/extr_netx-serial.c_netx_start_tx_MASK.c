
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_4)
{
 FUNC_2(
     FUNC_1(VAR_4->membase + VAR_2) | VAR_0, VAR_4->membase + VAR_2);

 if (!(FUNC_1(VAR_4->membase + VAR_3) & VAR_1))
  FUNC_0(VAR_4);
}
