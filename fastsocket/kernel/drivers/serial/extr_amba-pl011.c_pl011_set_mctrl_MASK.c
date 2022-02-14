
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
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_11, unsigned int VAR_12)
{
 struct uart_amba_port *VAR_13 = (struct uart_amba_port *)VAR_11;
 unsigned int VAR_14;

 VAR_14 = FUNC_1(VAR_13->port.membase + VAR_5);







 if (VAR_12 & VAR_4) VAR_14 |= VAR_10; else VAR_14 &= ~VAR_10;
 if (VAR_12 & VAR_0) VAR_14 |= VAR_6; else VAR_14 &= ~VAR_6;
 if (VAR_12 & VAR_2) VAR_14 |= VAR_8; else VAR_14 &= ~VAR_8;
 if (VAR_12 & VAR_3) VAR_14 |= VAR_9; else VAR_14 &= ~VAR_9;
 if (VAR_12 & VAR_1) VAR_14 |= VAR_7; else VAR_14 &= ~VAR_7;


 FUNC_2(VAR_14, VAR_13->port.membase + VAR_5);
}
