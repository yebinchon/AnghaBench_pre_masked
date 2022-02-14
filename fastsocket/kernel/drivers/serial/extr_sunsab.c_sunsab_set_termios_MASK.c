
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct uart_sunsab_port {TYPE_1__ port; } ;
struct uart_port {int dummy; } ;
struct ktermios {int c_iflag; int c_cflag; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_sunsab_port*,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_4 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_0, struct ktermios *VAR_1,
          struct ktermios *VAR_2)
{
 struct uart_sunsab_port *VAR_3 = (struct uart_sunsab_port *) VAR_0;
 unsigned long VAR_4;
 unsigned int VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, 0, 4000000);
 unsigned int VAR_6 = FUNC_4(VAR_0, VAR_5);

 FUNC_0(&VAR_3->port.lock, VAR_4);
 FUNC_2(VAR_3, VAR_1->c_cflag, VAR_1->c_iflag, VAR_5, VAR_6);
 FUNC_1(&VAR_3->port.lock, VAR_4);
}
