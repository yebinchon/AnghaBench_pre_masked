
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {struct uart_port* uart_port; } ;
struct uart_port {scalar_t__ type; int fifosize; int timeout; TYPE_1__* ops; int line; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* tx_empty ) (struct uart_port*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct uart_port*) ;
 scalar_t__ FUNC_7 (int,unsigned long) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_5, int VAR_6)
{
 struct uart_state *VAR_7 = VAR_5->driver_data;
 struct uart_port *VAR_8 = VAR_7->uart_port;
 unsigned long VAR_9, VAR_10;

 if (VAR_8->type == VAR_1 || VAR_8->fifosize == 0)
  return;

 FUNC_1();
 VAR_9 = (VAR_8->timeout - VAR_0/50) / VAR_8->fifosize;
 VAR_9 = VAR_9 / 5;
 if (VAR_9 == 0)
  VAR_9 = 1;
 if (VAR_6 && VAR_6 < VAR_9)
  VAR_9 = VAR_6;
 if (VAR_6 == 0 || VAR_6 > 2 * VAR_8->timeout)
  VAR_6 = 2 * VAR_8->timeout;

 VAR_10 = VAR_4 + VAR_6;

 FUNC_3("uart_wait_until_sent(%d), jiffies=%lu, expire=%lu...\n",
  VAR_8->line, VAR_4, VAR_10);






 while (!VAR_8->ops->tx_empty(VAR_8)) {
  FUNC_2(FUNC_0(VAR_9));
  if (FUNC_5(VAR_3))
   break;
  if (FUNC_7(VAR_4, VAR_10))
   break;
 }
 FUNC_4(VAR_2);
 FUNC_8();
}
