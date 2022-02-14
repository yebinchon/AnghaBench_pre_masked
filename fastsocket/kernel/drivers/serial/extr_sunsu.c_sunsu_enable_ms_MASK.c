
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_sunsu_port {TYPE_1__ port; int ier; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_sunsu_port*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 struct uart_sunsu_port *VAR_3 = (struct uart_sunsu_port *) VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->port.lock, VAR_4);
 VAR_3->ier |= VAR_1;
 FUNC_0(VAR_3, VAR_0, VAR_3->ier);
 FUNC_2(&VAR_3->port.lock, VAR_4);
}
