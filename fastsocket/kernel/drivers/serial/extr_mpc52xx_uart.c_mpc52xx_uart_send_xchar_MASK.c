
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {char x_char; int lock; } ;
struct TYPE_2__ {int (* start_tx ) (struct uart_port*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_1, char VAR_2)
{
 unsigned long VAR_3;
 FUNC_0(&VAR_1->lock, VAR_3);

 VAR_1->x_char = VAR_2;
 if (VAR_2) {


  VAR_0->start_tx(VAR_1);
 }

 FUNC_1(&VAR_1->lock, VAR_3);
}
