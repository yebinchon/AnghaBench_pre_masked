
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct uart_port {int dummy; } ;
struct ioc3_port {TYPE_1__* ip_serial_regs; } ;
struct TYPE_2__ {int shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct ioc3_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_6)
{
 struct ioc3_port *VAR_7 = FUNC_0(VAR_6);
 uint32_t VAR_8;
 unsigned int VAR_9 = 0;

 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_1(&VAR_7->ip_serial_regs->shadow);
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_3;
 if (VAR_8 & VAR_2)
  VAR_9 |= VAR_5;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_4;
 return VAR_9;
}
