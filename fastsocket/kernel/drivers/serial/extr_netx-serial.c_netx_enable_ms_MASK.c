
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 unsigned int VAR_3;
 VAR_3 = FUNC_0(VAR_2->membase + VAR_1);
 FUNC_1(VAR_3 | VAR_0, VAR_2->membase + VAR_1);
}
