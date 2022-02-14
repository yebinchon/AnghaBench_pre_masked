
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_cpm_port {scalar_t__* gpios; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_4, unsigned int VAR_5)
{
 struct uart_cpm_port *VAR_6 = (struct uart_cpm_port *)VAR_4;

 if (VAR_6->gpios[VAR_1] >= 0)
  FUNC_0(VAR_6->gpios[VAR_1], !(VAR_5 & VAR_3));

 if (VAR_6->gpios[VAR_0] >= 0)
  FUNC_0(VAR_6->gpios[VAR_0], !(VAR_5 & VAR_2));
}
