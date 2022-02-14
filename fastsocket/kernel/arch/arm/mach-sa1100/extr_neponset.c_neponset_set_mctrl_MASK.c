
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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_0(struct uart_port *VAR_9, u_int VAR_10)
{
 u_int VAR_11 = VAR_4;

 if (VAR_9->mapbase == VAR_7) {
  if (VAR_10 & VAR_6)
   VAR_11 &= ~VAR_3;
  else
   VAR_11 |= VAR_3;

  if (VAR_10 & VAR_5)
   VAR_11 &= ~VAR_1;
  else
   VAR_11 |= VAR_1;
 } else if (VAR_9->mapbase == VAR_8) {
  if (VAR_10 & VAR_6)
   VAR_11 &= ~VAR_2;
  else
   VAR_11 |= VAR_2;

  if (VAR_10 & VAR_5)
   VAR_11 &= ~VAR_0;
  else
   VAR_11 |= VAR_0;
 }

 VAR_4 = VAR_11;
}
