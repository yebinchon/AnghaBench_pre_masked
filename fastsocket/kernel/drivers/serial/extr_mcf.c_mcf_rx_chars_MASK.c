
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame; int overrun; int parity; int brk; int rx; } ;
struct uart_port {unsigned char read_status_mask; TYPE_3__* state; TYPE_1__ icount; scalar_t__ membase; } ;
struct mcf_uart {struct uart_port port; } ;
struct TYPE_5__ {int tty; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*,unsigned char) ;
 int FUNC_4 (struct uart_port*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mcf_uart *VAR_14)
{
 struct uart_port *VAR_15 = &VAR_14->port;
 unsigned char VAR_16, VAR_17, VAR_18;

 while ((VAR_16 = FUNC_0(VAR_15->membase + VAR_3)) & VAR_9) {
  VAR_17 = FUNC_0(VAR_15->membase + VAR_2);
  VAR_18 = VAR_12;
  VAR_15->icount.rx++;

  if (VAR_16 & VAR_5) {
   FUNC_5(VAR_1,
    VAR_15->membase + VAR_0);

   if (VAR_16 & VAR_4) {
    VAR_15->icount.brk++;
    if (FUNC_2(VAR_15))
     continue;
   } else if (VAR_16 & VAR_8) {
    VAR_15->icount.parity++;
   } else if (VAR_16 & VAR_7) {
    VAR_15->icount.overrun++;
   } else if (VAR_16 & VAR_6) {
    VAR_15->icount.frame++;
   }

   VAR_16 &= VAR_15->read_status_mask;

   if (VAR_16 & VAR_4)
    VAR_18 = VAR_10;
   else if (VAR_16 & VAR_8)
    VAR_18 = VAR_13;
   else if (VAR_16 & VAR_6)
    VAR_18 = VAR_11;
  }

  if (FUNC_3(VAR_15, VAR_17))
   continue;
  FUNC_4(VAR_15, VAR_16, VAR_7, VAR_17, VAR_18);
 }

 FUNC_1(VAR_15->state->port.tty);
}
