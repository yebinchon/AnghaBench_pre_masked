
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct ioc4_port {TYPE_1__* ip_serial_regs; } ;
struct TYPE_2__ {int shadow; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct ioc4_port* FUNC_0 (struct uart_port*,int ) ;
 scalar_t__ FUNC_1 (struct ioc4_port*,struct uart_port*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_2)
{
 struct ioc4_port *VAR_3 = FUNC_0(VAR_2, 0);
 unsigned int VAR_4 = 0;

 if (FUNC_1(VAR_3, VAR_2)) {
  if (FUNC_2(&VAR_3->ip_serial_regs->shadow) & VAR_0)
   VAR_4 = VAR_1;
 }
 return VAR_4;
}
