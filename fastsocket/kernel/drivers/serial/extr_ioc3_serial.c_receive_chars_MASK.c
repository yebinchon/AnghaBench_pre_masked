
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tty_struct* tty; } ;
struct uart_state {TYPE_1__ port; } ;
struct TYPE_4__ {int rx; } ;
struct uart_port {int lock; TYPE_2__ icount; struct uart_state* state; } ;
struct tty_struct {int dummy; } ;
struct ioc3_port {int ip_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*,unsigned char*,int) ;
 struct ioc3_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*,int) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_2)
{
 struct tty_struct *VAR_3;
 unsigned char VAR_4[VAR_1];
 int VAR_5 = 0, VAR_6, VAR_7 = 0;
 struct uart_state *VAR_8 = VAR_2->state;
 struct ioc3_port *VAR_9 = FUNC_1(VAR_2);
 unsigned long VAR_10;


 if (!VAR_8)
  return 0;
 if (!VAR_8->port.tty)
  return 0;

 if (!(VAR_9->ip_flags & VAR_0))
  return 0;

 FUNC_2(&VAR_2->lock, VAR_10);
 VAR_3 = VAR_8->port.tty;

 VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_1);
 if (VAR_5 > 0) {
  VAR_7 = 1;
  VAR_6 = FUNC_4(VAR_3, VAR_5);
  FUNC_6(VAR_3, VAR_4, VAR_6);
  VAR_2->icount.rx += VAR_5;
 }
 FUNC_3(&VAR_2->lock, VAR_10);

 if (VAR_7)
  FUNC_5(VAR_3);

 return VAR_5;
}
