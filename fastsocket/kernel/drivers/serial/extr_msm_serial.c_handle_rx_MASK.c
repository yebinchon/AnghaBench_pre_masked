
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rx; int frame; int brk; int overrun; } ;
struct uart_port {unsigned int read_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,unsigned int,char) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_12)
{
 struct tty_struct *VAR_13 = VAR_12->state->port.tty;
 unsigned int VAR_14;





 if ((FUNC_0(VAR_12, VAR_7) & VAR_8)) {
  VAR_12->icount.overrun++;
  FUNC_3(VAR_13, 0, VAR_3);
  FUNC_1(VAR_12, VAR_5, VAR_4);
 }


 while ((VAR_14 = FUNC_0(VAR_12, VAR_7)) & VAR_11) {
  unsigned int VAR_15;
  char VAR_16 = VAR_2;

  VAR_15 = FUNC_0(VAR_12, VAR_6);

  if (VAR_14 & VAR_10) {
   VAR_12->icount.brk++;
   if (FUNC_4(VAR_12))
    continue;
  } else if (VAR_14 & VAR_9) {
   VAR_12->icount.frame++;
  } else {
   VAR_12->icount.rx++;
  }


  VAR_14 &= VAR_12->read_status_mask;

  if (VAR_14 & VAR_10) {
   VAR_16 = VAR_0;
  } else if (VAR_14 & VAR_9) {
   VAR_16 = VAR_1;
  }

  if (!FUNC_5(VAR_12, VAR_15))
   FUNC_3(VAR_13, VAR_15, VAR_16);
 }

 FUNC_2(VAR_13);
}
