
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_2__* tty; int delta_msr_wait; } ;
struct esp_struct {int stat_flags; int MCR; int lock; TYPE_3__ port; scalar_t__ IER; int * xmit_buf; struct esp_struct* next_port; int irq; int break_wait; int line; } ;
struct TYPE_5__ {int flags; TYPE_1__* termios; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int * VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct esp_struct*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int ) ;
 struct esp_struct* VAR_17 ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct esp_struct*,int ,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct esp_struct *VAR_18)
{
 unsigned long VAR_19, VAR_20;

 if (!(VAR_18->port.flags & VAR_0))
  return;






 FUNC_12(&VAR_18->lock, VAR_19);




 FUNC_14(&VAR_18->port.delta_msr_wait);
 FUNC_14(&VAR_18->break_wait);



 if (VAR_18->stat_flags & (VAR_4 | VAR_5)) {
  VAR_20 = FUNC_0();
  FUNC_2(VAR_14);
  FUNC_1(VAR_14);
  FUNC_9(VAR_20);

  VAR_16 = 0;
 }




 FUNC_4(VAR_18->irq, VAR_18);

 if (VAR_15) {
  struct esp_struct *VAR_21 = VAR_17;

  while (VAR_21) {
   if ((VAR_21 != VAR_18) &&
       (VAR_21->port.flags & VAR_0))
    break;

   VAR_21 = VAR_21->next_port;
  }

  if (!VAR_21) {
   FUNC_3(VAR_14);
   FUNC_6((unsigned long)VAR_15,
       FUNC_7(VAR_1));
   VAR_15 = ((void*)0);
  }
 }

 if (VAR_18->xmit_buf) {
  FUNC_5((unsigned long) VAR_18->xmit_buf);
  VAR_18->xmit_buf = ((void*)0);
 }

 VAR_18->IER = 0;
 FUNC_10(VAR_18, VAR_8, VAR_2);
 FUNC_10(VAR_18, VAR_9, 0x00);

 if (!VAR_18->port.tty || (VAR_18->port.tty->termios->c_cflag & VAR_6))
  VAR_18->MCR &= ~(VAR_11|VAR_13);

 VAR_18->MCR &= ~VAR_12;
 FUNC_10(VAR_18, VAR_8, VAR_3);
 FUNC_10(VAR_18, VAR_9, VAR_10);
 FUNC_10(VAR_18, VAR_9, VAR_18->MCR);

 if (VAR_18->port.tty)
  FUNC_11(VAR_7, &VAR_18->port.tty->flags);

 VAR_18->port.flags &= ~VAR_0;
 FUNC_13(&VAR_18->lock, VAR_19);
}
