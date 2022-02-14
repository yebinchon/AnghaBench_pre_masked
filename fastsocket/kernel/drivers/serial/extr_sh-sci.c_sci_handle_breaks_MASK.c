
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dev; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct sci_port {int break_flag; } ;
struct TYPE_3__ {struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 unsigned short FUNC_3 (struct uart_port*,int ) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*,int ,int ) ;
 scalar_t__ FUNC_7 (struct uart_port*) ;

__attribute__((used)) static inline int FUNC_8(struct uart_port *VAR_2)
{
 int VAR_3 = 0;
 unsigned short VAR_4 = FUNC_3(VAR_2, VAR_0);
 struct tty_struct *VAR_5 = VAR_2->state->port.tty;
 struct sci_port *VAR_6 = FUNC_4(VAR_2);

 if (FUNC_7(VAR_2))
  return 0;

 if (!VAR_6->break_flag && VAR_4 & FUNC_0(VAR_2)) {





  if (FUNC_6(VAR_5, 0, VAR_1))
   VAR_3++;

  FUNC_1(VAR_2->dev, "BREAK detected\n");
 }

 if (VAR_3)
  FUNC_5(VAR_5);

 VAR_3 += FUNC_2(VAR_2);

 return VAR_3;
}
