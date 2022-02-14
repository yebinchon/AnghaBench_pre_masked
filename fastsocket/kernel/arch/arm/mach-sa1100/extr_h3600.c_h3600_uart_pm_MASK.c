
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_4, u_int VAR_5, u_int VAR_6)
{
 if (VAR_4->mapbase == VAR_2) {
  FUNC_0(VAR_0, !VAR_5);
 } else if (VAR_4->mapbase == VAR_3) {
  FUNC_0(VAR_1, !VAR_5);
 }
}
