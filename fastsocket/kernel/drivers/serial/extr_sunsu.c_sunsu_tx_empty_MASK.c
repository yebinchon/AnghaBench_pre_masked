
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_sunsu_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_sunsu_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3)
{
 struct uart_sunsu_port *VAR_4 = (struct uart_sunsu_port *) VAR_3;
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_1(&VAR_4->port.lock, VAR_5);
 VAR_6 = FUNC_0(VAR_4, VAR_1) & VAR_2 ? VAR_0 : 0;
 FUNC_2(&VAR_4->port.lock, VAR_5);

 return VAR_6;
}
