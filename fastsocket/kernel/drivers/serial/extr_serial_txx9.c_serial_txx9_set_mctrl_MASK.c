
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_txx9_port {int dummy; } ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_txx9_port*,int ,int ) ;
 int FUNC_1 (struct uart_txx9_port*,int ,int ) ;
 struct uart_txx9_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct uart_txx9_port *VAR_5 = FUNC_2(VAR_3);

 if (VAR_4 & VAR_0)
  FUNC_0(VAR_5, VAR_1, VAR_2);
 else
  FUNC_1(VAR_5, VAR_1, VAR_2);
}
