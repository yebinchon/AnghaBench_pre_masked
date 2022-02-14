
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct etrax_recv_buffer {int dummy; } ;
struct etrax_dma_descr {scalar_t__ buf; } ;
struct TYPE_8__ {TYPE_3__* tty; } ;
struct TYPE_5__ {int * buf; } ;
struct e100_serial {int* ioport; int tx_ctrl; int flags; TYPE_4__ port; TYPE_1__ xmit; int irq; int line; scalar_t__ tr_running; scalar_t__ uses_dma_out; void** ocmdadr; scalar_t__ uses_dma_in; void** icmdadr; struct etrax_dma_descr* rec_descr; } ;
struct TYPE_7__ {int flags; TYPE_2__* termios; } ;
struct TYPE_6__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct e100_serial*) ;
 int FUNC_4 (struct e100_serial*) ;
 int FUNC_5 (struct e100_serial*) ;
 int FUNC_6 (struct e100_serial*) ;
 int FUNC_7 (struct e100_serial*) ;
 int FUNC_8 (struct e100_serial*,int ) ;
 int FUNC_9 (struct e100_serial*,int ) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct etrax_recv_buffer*) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;
 struct etrax_recv_buffer* FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_16 (int ,int *) ;

__attribute__((used)) static void
FUNC_17(struct e100_serial * VAR_8)
{
 unsigned long VAR_9;
 struct etrax_dma_descr *VAR_10 = VAR_8->rec_descr;
 struct etrax_recv_buffer *VAR_11;
 int VAR_12;



 FUNC_1(FUNC_0(VAR_8->line, "shutdown %i\n", VAR_8->line));
 FUNC_3(VAR_8);
 VAR_8->ioport[VAR_2] = (VAR_8->tx_ctrl &= ~0x40);


 if (VAR_8->uses_dma_in) {
  FUNC_4(VAR_8);
  *VAR_8->icmdadr = FUNC_2(VAR_3, VAR_6, VAR_7);
  VAR_8->uses_dma_in = 0;
 } else {
  FUNC_5(VAR_8);
 }

 if (VAR_8->uses_dma_out) {
  FUNC_7(VAR_8);
  VAR_8->tr_running = 0;
  *VAR_8->ocmdadr = FUNC_2(VAR_3, VAR_6, VAR_7);
  VAR_8->uses_dma_out = 0;
 } else {
  FUNC_6(VAR_8);
  VAR_8->tr_running = 0;
 }



 if (!(VAR_8->flags & VAR_0))
  return;






 FUNC_13(VAR_9);

 if (VAR_8->xmit.buf) {
  FUNC_10((unsigned long)VAR_8->xmit.buf);
  VAR_8->xmit.buf = ((void*)0);
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  if (VAR_10[VAR_12].buf) {
   VAR_11 = FUNC_14(VAR_10[VAR_12].buf) - sizeof *VAR_11;
   FUNC_11(VAR_11);
   VAR_10[VAR_12].buf = 0;
  }

 if (!VAR_8->port.tty || (VAR_8->port.tty->termios->c_cflag & VAR_1)) {

  FUNC_8(VAR_8, 0);
  FUNC_9(VAR_8, 0);
 }

 if (VAR_8->port.tty)
  FUNC_16(VAR_5, &VAR_8->port.tty->flags);

 VAR_8->flags &= ~VAR_0;
 FUNC_12(VAR_9);
}
