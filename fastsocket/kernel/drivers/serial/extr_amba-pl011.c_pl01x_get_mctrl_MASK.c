
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_9)
{
 struct uart_amba_port *VAR_10 = (struct uart_amba_port *)VAR_9;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = FUNC_1(VAR_10->port.membase + VAR_5);





 if (VAR_12 & VAR_7) VAR_11 |= VAR_0;
 if (VAR_12 & VAR_8) VAR_11 |= VAR_2;
 if (VAR_12 & VAR_6) VAR_11 |= VAR_1;
 if (VAR_12 & VAR_4) VAR_11 |= VAR_3;

 return VAR_11;
}
