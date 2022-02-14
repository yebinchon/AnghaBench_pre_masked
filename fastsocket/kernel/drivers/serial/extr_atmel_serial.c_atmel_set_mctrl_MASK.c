
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {scalar_t__ mapbase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_12, u_int VAR_13)
{
 unsigned int VAR_14 = 0;
 unsigned int VAR_15;
 if (VAR_13 & VAR_11)
  VAR_14 |= VAR_8;
 else
  VAR_14 |= VAR_7;

 if (VAR_13 & VAR_9)
  VAR_14 |= VAR_6;
 else
  VAR_14 |= VAR_5;

 FUNC_1(VAR_12, VAR_14);


 VAR_15 = FUNC_0(VAR_12) & ~VAR_2;
 if (VAR_13 & VAR_10)
  VAR_15 |= VAR_3;
 else
  VAR_15 |= VAR_4;
 FUNC_2(VAR_12, VAR_15);
}
