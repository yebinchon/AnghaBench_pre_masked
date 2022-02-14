
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct sa1100_port {TYPE_1__ port; } ;


 unsigned int FUNC_0 (struct sa1100_port*) ;
 int FUNC_1 (struct sa1100_port*,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1, int VAR_2)
{
 struct sa1100_port *VAR_3 = (struct sa1100_port *)VAR_1;
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_2(&VAR_3->port.lock, VAR_4);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_2 == -1)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_5);
 FUNC_3(&VAR_3->port.lock, VAR_4);
}
