
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ membase; } ;
struct imx_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 struct imx_port *VAR_4 = (struct imx_port *)VAR_2;
 unsigned long VAR_5, VAR_6;

 FUNC_1(&VAR_4->port.lock, VAR_5);

 VAR_6 = FUNC_0(VAR_4->port.membase + VAR_0) & ~VAR_1;

 if ( VAR_3 != 0 )
  VAR_6 |= VAR_1;

 FUNC_3(VAR_6, VAR_4->port.membase + VAR_0);

 FUNC_2(&VAR_4->port.lock, VAR_5);
}
