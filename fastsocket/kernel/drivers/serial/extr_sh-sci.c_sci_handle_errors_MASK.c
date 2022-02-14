
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
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 unsigned short FUNC_5 (struct uart_port*,int ) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct sci_port*) ;
 struct sci_port* FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct tty_struct*) ;
 scalar_t__ FUNC_10 (struct tty_struct*,int ,int ) ;
 scalar_t__ FUNC_11 (struct uart_port*) ;

__attribute__((used)) static inline int FUNC_12(struct uart_port *VAR_5)
{
 int VAR_6 = 0;
 unsigned short VAR_7 = FUNC_5(VAR_5, VAR_0);
 struct tty_struct *VAR_8 = VAR_5->state->port.tty;

 if (VAR_7 & FUNC_1(VAR_5)) {

  if (FUNC_10(VAR_8, 0, VAR_3))
   VAR_6++;

  FUNC_4(VAR_5->dev, "overrun error");
 }

 if (VAR_7 & FUNC_0(VAR_5)) {
  if (FUNC_6(VAR_5) == 0) {

   struct sci_port *VAR_9 = FUNC_8(VAR_5);

   if (!VAR_9->break_flag) {
    VAR_9->break_flag = 1;
    FUNC_7(VAR_9);


    if (FUNC_11(VAR_5))
     return 0;

    FUNC_3(VAR_5->dev, "BREAK detected\n");

    if (FUNC_10(VAR_8, 0, VAR_1))
     VAR_6++;
   }

  } else {

   if (FUNC_10(VAR_8, 0, VAR_2))
    VAR_6++;

   FUNC_4(VAR_5->dev, "frame error\n");
  }
 }

 if (VAR_7 & FUNC_2(VAR_5)) {

  if (FUNC_10(VAR_8, 0, VAR_4))
   VAR_6++;

  FUNC_4(VAR_5->dev, "parity error");
 }

 if (VAR_6)
  FUNC_9(VAR_8);

 return VAR_6;
}
