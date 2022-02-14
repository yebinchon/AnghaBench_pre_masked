
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4, u_int VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_5 & VAR_1)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;

 if (VAR_5 & VAR_0)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 FUNC_1(VAR_4, VAR_6);
}
