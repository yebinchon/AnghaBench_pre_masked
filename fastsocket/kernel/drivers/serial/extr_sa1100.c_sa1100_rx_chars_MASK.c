
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_8__ {int overrun; int frame; int parity; int rx; } ;
struct TYPE_9__ {unsigned int read_status_mask; scalar_t__ sysrq; TYPE_3__ icount; TYPE_2__* state; } ;
struct sa1100_port {TYPE_4__ port; } ;
struct TYPE_6__ {struct tty_struct* tty; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct sa1100_port*) ;
 int FUNC_1 (struct sa1100_port*) ;
 int FUNC_2 (struct sa1100_port*) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,unsigned int) ;
 int FUNC_7 (TYPE_4__*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_8(struct sa1100_port *VAR_7)
{
 struct tty_struct *VAR_8 = VAR_7->port.state->port.tty;
 unsigned int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_4(FUNC_2(VAR_7)) |
   FUNC_3(FUNC_1(VAR_7));
 while (VAR_9 & FUNC_4(VAR_5)) {
  VAR_10 = FUNC_0(VAR_7);

  VAR_7->port.icount.rx++;

  VAR_11 = VAR_1;





  if (VAR_9 & FUNC_4(VAR_4 | VAR_3 | VAR_6)) {
   if (VAR_9 & FUNC_4(VAR_4))
    VAR_7->port.icount.parity++;
   else if (VAR_9 & FUNC_4(VAR_3))
    VAR_7->port.icount.frame++;
   if (VAR_9 & FUNC_4(VAR_6))
    VAR_7->port.icount.overrun++;

   VAR_9 &= VAR_7->port.read_status_mask;

   if (VAR_9 & FUNC_4(VAR_4))
    VAR_11 = VAR_2;
   else if (VAR_9 & FUNC_4(VAR_3))
    VAR_11 = VAR_0;




  }

  if (FUNC_6(&VAR_7->port, VAR_10))
   goto ignore_char;

  FUNC_7(&VAR_7->port, VAR_9, FUNC_4(VAR_6), VAR_10, VAR_11);

 ignore_char:
  VAR_9 = FUNC_4(FUNC_2(VAR_7)) |
    FUNC_3(FUNC_1(VAR_7));
 }
 FUNC_5(VAR_8);
}
