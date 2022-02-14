
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_struct* tty; } ;
struct uart_state {TYPE_1__ port; } ;
struct uart_icount {int rx; } ;
struct uart_port {int lock; struct uart_icount icount; struct uart_state* state; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*,int) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,unsigned char*,int) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_1)
{
 struct tty_struct *VAR_2;
 unsigned char VAR_3[VAR_0];
 int VAR_4, VAR_5 = VAR_0;
 struct uart_icount *VAR_6;
 struct uart_state *VAR_7 = VAR_1->state;
 unsigned long VAR_8;


 if (!VAR_7)
  return;
 if (!VAR_7->port.tty)
  return;

 FUNC_1(&VAR_1->lock, VAR_8);
 VAR_2 = VAR_7->port.tty;

 VAR_5 = FUNC_3(VAR_2, VAR_0);

 if (VAR_5 > 0) {
  VAR_6 = &VAR_1->icount;
  VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_5);
  if (VAR_4 > 0) {
   FUNC_5(VAR_2, VAR_3, VAR_4);
   VAR_6->rx += VAR_4;
  }
 }

 FUNC_2(&VAR_1->lock, VAR_8);

 FUNC_4(VAR_2);
}
