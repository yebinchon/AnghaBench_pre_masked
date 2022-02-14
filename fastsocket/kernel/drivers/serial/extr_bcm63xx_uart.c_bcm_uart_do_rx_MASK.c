
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct uart_port {unsigned int read_status_mask; unsigned int ignore_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {struct tty_struct* tty; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,unsigned int,char) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_13)
{
 struct tty_struct *VAR_14;
 unsigned int VAR_15;




 VAR_15 = 32;
 VAR_14 = VAR_13->state->port.tty;
 do {
  unsigned int VAR_16, VAR_17, VAR_18;
  char VAR_19;



  VAR_16 = FUNC_1(VAR_13, VAR_10);
  if (!(VAR_16 & FUNC_0(VAR_11)))
   break;

  VAR_18 = VAR_17 = FUNC_1(VAR_13, VAR_9);
  VAR_13->icount.rx++;
  VAR_19 = VAR_2;
  VAR_17 &= 0xff;

  if (FUNC_6((VAR_18 & VAR_5))) {

   if (VAR_18 & VAR_6) {
    VAR_13->icount.brk++;
    if (FUNC_4(VAR_13))
     continue;
   }

   if (VAR_18 & VAR_8)
    VAR_13->icount.parity++;
   if (VAR_18 & VAR_7)
    VAR_13->icount.frame++;


   VAR_18 &= VAR_13->read_status_mask;
   if (VAR_18 & VAR_6)
    VAR_19 = VAR_0;
   if (VAR_18 & VAR_7)
    VAR_19 = VAR_1;
   if (VAR_18 & VAR_8)
    VAR_19 = VAR_4;
  }

  if (FUNC_5(VAR_13, VAR_17))
   continue;

  if (FUNC_6(VAR_16 & FUNC_0(VAR_12))) {
   VAR_13->icount.overrun++;
   FUNC_3(VAR_14, 0, VAR_3);
  }

  if ((VAR_18 & VAR_13->ignore_status_mask) == 0)
   FUNC_3(VAR_14, VAR_17, VAR_19);

 } while (--VAR_15);

 FUNC_2(VAR_14);
}
