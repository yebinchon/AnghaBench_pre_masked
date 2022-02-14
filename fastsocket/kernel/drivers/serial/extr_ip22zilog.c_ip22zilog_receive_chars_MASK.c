
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zilog_channel {int data; int control; } ;
struct TYPE_8__ {int overrun; int frame; int parity; int brk; int rx; } ;
struct TYPE_9__ {unsigned int read_status_mask; TYPE_3__ icount; TYPE_2__* state; } ;
struct uart_ip22zilog_port {unsigned char parity_mask; unsigned int tty_break; TYPE_4__ port; } ;
struct tty_struct {int dummy; } ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (struct zilog_channel*) ;
 unsigned int FUNC_2 (struct zilog_channel*,int ) ;
 unsigned char FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,unsigned char) ;
 int FUNC_5 (TYPE_4__*,unsigned int,unsigned int,unsigned char,unsigned char) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static struct tty_struct *FUNC_7(struct uart_ip22zilog_port *VAR_12,
        struct zilog_channel *VAR_13)
{
 struct tty_struct *VAR_14;
 unsigned char VAR_15, VAR_16;
 unsigned int VAR_17;

 VAR_14 = ((void*)0);
 if (VAR_12->port.state != ((void*)0) &&
     VAR_12->port.state->port.tty != ((void*)0))
  VAR_14 = VAR_12->port.state->port.tty;

 for (;;) {
  VAR_15 = FUNC_3(&VAR_13->control);
  FUNC_0();
  if (!(VAR_15 & VAR_5))
   break;

  VAR_17 = FUNC_2(VAR_13, VAR_3);
  if (VAR_17 & (VAR_2 | VAR_6 | VAR_0)) {
   FUNC_6(VAR_1, &VAR_13->control);
   FUNC_0();
   FUNC_1(VAR_13);
  }

  VAR_15 = FUNC_3(&VAR_13->data);
  FUNC_0();

  VAR_15 &= VAR_12->parity_mask;


  if (!VAR_15)
   VAR_17 |= VAR_12->tty_break;


  VAR_16 = VAR_10;
  VAR_12->port.icount.rx++;
  if (VAR_17 & (VAR_2 | VAR_6 | VAR_0 | VAR_7 | VAR_4)) {
   VAR_12->tty_break = 0;

   if (VAR_17 & (VAR_7 | VAR_4)) {
    VAR_12->port.icount.brk++;
    if (VAR_17 & VAR_7)
     continue;
    VAR_17 &= ~(VAR_2 | VAR_0);
   }
   else if (VAR_17 & VAR_2)
    VAR_12->port.icount.parity++;
   else if (VAR_17 & VAR_0)
    VAR_12->port.icount.frame++;
   if (VAR_17 & VAR_6)
    VAR_12->port.icount.overrun++;
   VAR_17 &= VAR_12->port.read_status_mask;
   if (VAR_17 & VAR_4)
    VAR_16 = VAR_8;
   else if (VAR_17 & VAR_2)
    VAR_16 = VAR_11;
   else if (VAR_17 & VAR_0)
    VAR_16 = VAR_9;
  }

  if (FUNC_4(&VAR_12->port, VAR_15))
   continue;

  if (VAR_14)
   FUNC_5(&VAR_12->port, VAR_17, VAR_6, VAR_15, VAR_16);
 }
 return VAR_14;
}
