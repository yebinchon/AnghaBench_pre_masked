
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static u_int FUNC_0(struct uart_port *VAR_7)
{
 u_int VAR_8 = VAR_3 | VAR_4 | VAR_5;

 if (VAR_7->mapbase == VAR_6) {
  int VAR_9 = VAR_2;

  if (VAR_9 & VAR_1)
   VAR_8 &= ~VAR_3;
  if (VAR_9 & VAR_0)
   VAR_8 &= ~VAR_4;
 }

 return VAR_8;
}
