
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct TYPE_2__ {int flags; struct tty_struct* tty; } ;
struct specialix_port {TYPE_1__ port; scalar_t__ IER; int * xmit_buf; int * hits; int overrun; } ;
struct specialix_board {int count; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct specialix_board*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct specialix_port*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_8 ;
 int FUNC_10 (struct specialix_board*,int ,scalar_t__) ;
 int FUNC_11 (struct specialix_board*) ;
 int FUNC_12 (struct specialix_board*) ;

__attribute__((used)) static void FUNC_13(struct specialix_board *VAR_9,
      struct specialix_port *VAR_10)
{
 struct tty_struct *VAR_11;
 int VAR_12;
 unsigned long VAR_13;

 FUNC_4();

 if (!(VAR_10->port.flags & VAR_0)) {
  FUNC_5();
  return;
 }

 if (VAR_8 & VAR_6) {
  FUNC_2(VAR_6,
   "sx%d: port %d: %ld overruns, FIFO hits [ ",
    FUNC_1(VAR_9), FUNC_6(VAR_10), VAR_10->overrun);
  for (VAR_12 = 0; VAR_12 < 10; VAR_12++)
   FUNC_2(VAR_6, "%ld ", VAR_10->hits[VAR_12]);
  FUNC_2(VAR_6, "].\n");
 }

 if (VAR_10->xmit_buf) {
  FUNC_3((unsigned long) VAR_10->xmit_buf);
  VAR_10->xmit_buf = ((void*)0);
 }


 FUNC_8(&VAR_9->lock, VAR_13);
 FUNC_10(VAR_9, VAR_2, FUNC_6(VAR_10));

 VAR_11 = VAR_10->port.tty;
 if (VAR_11 == ((void*)0) || FUNC_0(VAR_11)) {

  FUNC_10(VAR_9, VAR_5, 0);
 }
 FUNC_9(&VAR_9->lock, VAR_13);

 FUNC_12(VAR_9);
 FUNC_8(&VAR_9->lock, VAR_13);
 FUNC_10(VAR_9, VAR_3, VAR_1);

 VAR_10->IER = 0;
 FUNC_10(VAR_9, VAR_4, VAR_10->IER);
 FUNC_9(&VAR_9->lock, VAR_13);
 if (VAR_11)
  FUNC_7(VAR_7, &VAR_11->flags);
 VAR_10->port.flags &= ~VAR_0;

 if (!VAR_9->count)
  FUNC_11(VAR_9);
 FUNC_5();
}
