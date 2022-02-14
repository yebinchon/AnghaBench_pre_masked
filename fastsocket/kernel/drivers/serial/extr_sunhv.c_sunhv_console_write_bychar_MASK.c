
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ sysrq; } ;
struct console {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct uart_port*,char) ;
 struct uart_port* VAR_1 ;

__attribute__((used)) static void FUNC_6(struct console *VAR_2, const char *VAR_3, unsigned VAR_4)
{
 struct uart_port *VAR_5 = VAR_1;
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 1;

 FUNC_1(VAR_6);
 if (VAR_5->sysrq) {
  VAR_8 = 0;
 } else if (VAR_0) {
  VAR_8 = FUNC_3(&VAR_5->lock);
 } else
  FUNC_2(&VAR_5->lock);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (*VAR_3 == '\n')
   FUNC_5(VAR_5, '\r');
  FUNC_5(VAR_5, *VAR_3++);
 }

 if (VAR_8)
  FUNC_4(&VAR_5->lock);
 FUNC_0(VAR_6);
}
