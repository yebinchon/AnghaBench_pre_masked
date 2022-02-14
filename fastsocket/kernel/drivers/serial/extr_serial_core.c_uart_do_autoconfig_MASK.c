
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; } ;
struct uart_state {struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {scalar_t__ type; int flags; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* config_port ) (struct uart_port*,int) ;int (* release_port ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (struct uart_state*) ;
 int FUNC_7 (struct uart_state*,int) ;

__attribute__((used)) static int FUNC_8(struct uart_state *VAR_8)
{
 struct uart_port *VAR_9 = VAR_8->uart_port;
 struct tty_port *VAR_10 = &VAR_8->port;
 int VAR_11, VAR_12;

 if (!FUNC_0(VAR_0))
  return -VAR_2;






 if (FUNC_1(&VAR_10->mutex))
  return -VAR_3;

 VAR_12 = -VAR_1;
 if (FUNC_5(VAR_10) == 1) {
  FUNC_6(VAR_8);





  if (VAR_9->type != VAR_4)
   VAR_9->ops->release_port(VAR_9);

  VAR_11 = VAR_6;
  if (VAR_9->flags & VAR_7)
   VAR_11 |= VAR_5;





  VAR_9->ops->config_port(VAR_9, VAR_11);

  VAR_12 = FUNC_7(VAR_8, 1);
 }
 FUNC_2(&VAR_10->mutex);
 return VAR_12;
}
