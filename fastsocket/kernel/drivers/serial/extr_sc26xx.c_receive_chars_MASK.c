
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {int read_status_mask; int ignore_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 void* FUNC_0 (struct uart_port*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int FUNC_1 (struct tty_struct*,unsigned char,char) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,unsigned char) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct tty_struct *FUNC_5(struct uart_port *VAR_11)
{
 struct tty_struct *VAR_12 = ((void*)0);
 int VAR_13 = 10000;
 unsigned char VAR_14;
 char VAR_15;
 u8 VAR_16;

 if (VAR_11->state != ((void*)0))
  VAR_12 = VAR_11->state->port.tty;

 while (VAR_13-- > 0) {
  VAR_16 = FUNC_0(VAR_11, VAR_1);
  if (!(VAR_16 & VAR_6))
   break;
  VAR_14 = FUNC_0(VAR_11, VAR_0);

  VAR_15 = VAR_9;
  VAR_11->icount.rx++;

  if (FUNC_4(VAR_16 & (VAR_2 | VAR_3 |
           VAR_5 | VAR_4))) {
   if (VAR_16 & VAR_2) {
    VAR_16 &= ~(VAR_5 | VAR_3);
    VAR_11->icount.brk++;
    if (FUNC_2(VAR_11))
     continue;
   } else if (VAR_16 & VAR_5)
    VAR_11->icount.parity++;
   else if (VAR_16 & VAR_3)
    VAR_11->icount.frame++;
   if (VAR_16 & VAR_4)
    VAR_11->icount.overrun++;

   VAR_16 &= VAR_11->read_status_mask;
   if (VAR_16 & VAR_2)
    VAR_15 = VAR_7;
   else if (VAR_16 & VAR_5)
    VAR_15 = VAR_10;
   else if (VAR_16 & VAR_3)
    VAR_15 = VAR_8;
  }

  if (FUNC_3(VAR_11, VAR_14))
   continue;

  if (VAR_16 & VAR_11->ignore_status_mask)
   continue;

  FUNC_1(VAR_12, VAR_14, VAR_15);
 }
 return VAR_12;
}
