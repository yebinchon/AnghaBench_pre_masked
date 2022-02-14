
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static u_int FUNC_0(struct uart_port *VAR_12)
{
 u_int VAR_13 = VAR_7 | VAR_8 | VAR_9;
 u_int VAR_14 = VAR_6;

 if (VAR_12->mapbase == VAR_10) {
  if (VAR_14 & VAR_3)
   VAR_13 &= ~VAR_7;
  if (VAR_14 & VAR_1)
   VAR_13 &= ~VAR_8;
  if (VAR_14 & VAR_5)
   VAR_13 &= ~VAR_9;
 } else if (VAR_12->mapbase == VAR_11) {
  if (VAR_14 & VAR_2)
   VAR_13 &= ~VAR_7;
  if (VAR_14 & VAR_0)
   VAR_13 &= ~VAR_8;
  if (VAR_14 & VAR_4)
   VAR_13 &= ~VAR_9;
 }

 return VAR_13;
}
