
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_txx9_port {int dummy; } ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_txx9_port*,int ) ;
 struct uart_txx9_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_8)
{
 struct uart_txx9_port *VAR_9 = FUNC_1(VAR_8);
 unsigned int VAR_10;


 VAR_10 = VAR_0 | VAR_2;
 VAR_10 |= (FUNC_0(VAR_9, VAR_6) & VAR_7) ? 0 : VAR_3;
 VAR_10 |= (FUNC_0(VAR_9, VAR_4) & VAR_5) ? 0 : VAR_1;

 return VAR_10;
}
