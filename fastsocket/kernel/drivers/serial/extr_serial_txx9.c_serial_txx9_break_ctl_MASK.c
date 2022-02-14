
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_txx9_port*,int ,int ) ;
 int FUNC_1 (struct uart_txx9_port*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct uart_txx9_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_txx9_port *VAR_4 = FUNC_4(VAR_2);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->port.lock, VAR_5);
 if (VAR_3 == -1)
  FUNC_1(VAR_4, VAR_0, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0, VAR_1);
 FUNC_3(&VAR_4->port.lock, VAR_5);
}
