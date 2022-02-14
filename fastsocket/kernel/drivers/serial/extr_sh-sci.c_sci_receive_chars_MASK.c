
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rx; } ;
struct uart_port {scalar_t__ type; TYPE_3__ icount; int dev; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct sci_port {scalar_t__ break_flag; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (char) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_5 (int ,char*,char) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (struct uart_port*,int ) ;
 int FUNC_8 (struct uart_port*,int ,int ) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (struct uart_port*) ;
 struct sci_port* FUNC_11 (struct uart_port*) ;
 int FUNC_12 (struct tty_struct*,int) ;
 int FUNC_13 (struct tty_struct*) ;
 int FUNC_14 (struct tty_struct*,char,unsigned char) ;
 scalar_t__ FUNC_15 (struct uart_port*,char) ;

__attribute__((used)) static inline void FUNC_16(struct uart_port *VAR_6)
{
 struct sci_port *VAR_7 = FUNC_11(VAR_6);
 struct tty_struct *VAR_8 = VAR_6->state->port.tty;
 int VAR_9, VAR_10, VAR_11 = 0;
 unsigned short VAR_12;
 unsigned char VAR_13;

 VAR_12 = FUNC_7(VAR_6, VAR_2);
 if (!(VAR_12 & FUNC_2(VAR_6)))
  return;

 while (1) {
  if (VAR_6->type == VAR_0)
   VAR_10 = FUNC_9(VAR_6);
  else
   VAR_10 = FUNC_10(VAR_6);


  VAR_10 = FUNC_12(VAR_8, VAR_10);


  if (VAR_10 == 0)
   break;

  if (VAR_6->type == VAR_0) {
   char VAR_14 = FUNC_7(VAR_6, VAR_1);
   if (FUNC_15(VAR_6, VAR_14) ||
       VAR_7->break_flag)
    VAR_10 = 0;
   else
    FUNC_14(VAR_8, VAR_14, VAR_4);
  } else {
   for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
    char VAR_15 = FUNC_7(VAR_6, VAR_1);
    VAR_12 = FUNC_7(VAR_6, VAR_2);
    if (FUNC_15(VAR_6, VAR_15)) {
     VAR_10--; VAR_9--;
     continue;
    }


    if (VAR_12&FUNC_0(VAR_6)) {
     VAR_13 = VAR_3;
     FUNC_6(VAR_6->dev, "frame error\n");
    } else if (VAR_12&FUNC_1(VAR_6)) {
     VAR_13 = VAR_5;
     FUNC_6(VAR_6->dev, "parity error\n");
    } else
     VAR_13 = VAR_4;

    FUNC_14(VAR_8, VAR_15, VAR_13);
   }
  }

  FUNC_7(VAR_6, VAR_2);
  FUNC_8(VAR_6, VAR_2, FUNC_3(VAR_6));

  VAR_11 += VAR_10;
  VAR_6->icount.rx += VAR_10;
 }

 if (VAR_11) {

  FUNC_13(VAR_8);
 } else {
  FUNC_7(VAR_6, VAR_2);
  FUNC_8(VAR_6, VAR_2, FUNC_3(VAR_6));
 }
}
