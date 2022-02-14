
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct ktermios {int dummy; } ;


 int FUNC_0 (struct uart_port*,struct ktermios*,struct ktermios*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_0,
  struct ktermios *VAR_1, struct ktermios *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
