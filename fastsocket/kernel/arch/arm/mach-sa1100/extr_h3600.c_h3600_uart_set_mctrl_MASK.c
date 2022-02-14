
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_5, u_int VAR_6)
{
 if (VAR_5->mapbase == VAR_4) {
  if (VAR_6 & VAR_3)
   VAR_0 = VAR_1;
  else
   VAR_2 = VAR_1;
 }
}
