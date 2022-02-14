
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct uart_icount {int overrun; int parity; int frame; int brk; int rx; } ;
struct tty_struct {int low_latency; } ;
struct TYPE_7__ {scalar_t__ read_status_mask; scalar_t__ ignore_status_mask; struct uart_icount icount; TYPE_2__* state; } ;
struct mn10300_serial_port {unsigned int rx_inp; unsigned int rx_outp; scalar_t__* rx_buffer; int rx_brk; TYPE_3__ uart; int name; } ;
struct TYPE_5__ {struct tty_struct* tty; } ;
struct TYPE_6__ {TYPE_1__ port; } ;


 int FUNC_0 (unsigned int,unsigned int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct tty_struct*,int) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct mn10300_serial_port *VAR_9)
{
 struct uart_icount *VAR_10 = &VAR_9->uart.icount;
 struct tty_struct *VAR_11 = VAR_9->uart.state->port.tty;
 unsigned VAR_12;
 int VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 FUNC_1("%s", VAR_9->name);

 VAR_16 = 0;

 VAR_13 = FUNC_0(VAR_9->rx_inp, VAR_9->rx_outp, VAR_0);
 VAR_13 = FUNC_4(VAR_11, VAR_13);
 if (VAR_13 == 0) {
  if (!VAR_11->low_latency)
   FUNC_5(VAR_11);
  return;
 }

try_again:

 VAR_12 = VAR_9->rx_outp;
 if (VAR_12 == VAR_9->rx_inp) {
  if (VAR_16 && !VAR_11->low_latency)
   FUNC_5(VAR_11);
  return;
 }

 VAR_15 = VAR_9->rx_buffer[VAR_12++];
 VAR_14 = VAR_9->rx_buffer[VAR_12++];
 FUNC_3();
 VAR_9->rx_outp = VAR_12 & (VAR_0 - 1);
 VAR_9->uart.icount.rx++;

 VAR_14 &= VAR_1 | VAR_3 | VAR_2;
 VAR_17 = 0;
 VAR_18 = 0;







 switch (VAR_9->rx_brk) {
 case 0:

  break;

 case 1:
  if (VAR_14 & VAR_1 && VAR_15 == 0) {
   VAR_9->rx_brk = 2;
   goto try_again;
  }
  goto not_break;

 case 2:
  if (VAR_14 & VAR_1 && VAR_15 == 0) {
   VAR_9->rx_brk = 3;
   FUNC_2("Rx Break Detected");
   VAR_10->brk++;
   if (FUNC_7(&VAR_9->uart))
    goto ignore_char;
   VAR_17 |= 1 << VAR_4;
   goto insert;
  }
  goto not_break;

 default:
  if (VAR_14 & (VAR_1 | VAR_3 | VAR_2))
   goto try_again;

  VAR_9->rx_brk = 0;

  switch (VAR_15) {
  case 0xFF:
  case 0xFE:
  case 0xFC:
  case 0xF8:
  case 0xF0:
  case 0xE0:
  case 0xC0:
  case 0x80:
  case 0x00:

   goto try_again;
  }
  break;
 }

process_errors:

 if (VAR_14 & VAR_1) {
  if (VAR_15 == 0) {

   VAR_9->rx_brk = 1;
   goto try_again;
  }

  FUNC_2("Rx Framing Error");
  VAR_10->frame++;
  VAR_17 |= 1 << VAR_5;
 }


 if (VAR_14 & VAR_3) {
  FUNC_2("Rx Parity Error");
  VAR_10->parity++;
  VAR_17 = VAR_8;
 }


 if (VAR_17 == 0) {
  if (FUNC_8(&VAR_9->uart, VAR_15))
   goto ignore_char;
  VAR_17 = (1 << VAR_6);
 }


 if (VAR_14 & VAR_2) {
  if (VAR_9->rx_brk)
   goto try_again;

  FUNC_2("Rx Overrun Error");
  VAR_10->overrun++;
  VAR_18 = 1;
 }

insert:
 VAR_17 &= VAR_9->uart.read_status_mask;

 if (!VAR_18 && !(VAR_17 & VAR_9->uart.ignore_status_mask)) {
  int VAR_19;

  if (VAR_17 & (1 << VAR_4))
   VAR_19 = VAR_4;
  else if (VAR_17 & (1 << VAR_8))
   VAR_19 = VAR_8;
  else if (VAR_17 & (1 << VAR_5))
   VAR_19 = VAR_5;
  else
   VAR_19 = VAR_6;

  FUNC_6(VAR_11, VAR_15, VAR_19);
 }




 if (VAR_18)
  FUNC_6(VAR_11, 0, VAR_7);

 VAR_13--;
 if (VAR_13 <= 0) {
  if (!VAR_11->low_latency)
   FUNC_5(VAR_11);
  return;
 }

ignore_char:
 VAR_16 = 1;
 goto try_again;

not_break:
 VAR_9->rx_brk = 0;
 goto process_errors;
}
