
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_5)
{
 unsigned int VAR_6 = VAR_3 | VAR_1;

 if (FUNC_0(VAR_5->membase + VAR_4) & VAR_0)
  VAR_6 |= VAR_2;

 return VAR_6;
}
