
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct tty_port {int flags; int blocked_open; int lock; int count; int open_wait; int close_wait; struct tty_struct* tty; } ;
struct gs_port {struct tty_port port; } ;
struct file {int f_flags; } ;
struct TYPE_4__ {int blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ FUNC_13 (struct file*) ;
 int FUNC_14 (struct tty_port*) ;
 int VAR_12 ;

int FUNC_15(void *VAR_13, struct file * VAR_14)
{
 struct gs_port *VAR_15 = VAR_13;
 struct tty_port *VAR_16 = &VAR_15->port;
 FUNC_1(VAR_12, VAR_11);
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 struct tty_struct *VAR_20;
 unsigned long VAR_21;

 FUNC_3 ();

 if (!VAR_16) return 0;

 VAR_20 = VAR_16->tty;

 FUNC_5 (VAR_6, "Entering gs_block_till_ready.\n");




 if (FUNC_13(VAR_14) || VAR_16->flags & VAR_0) {
  FUNC_6(&VAR_16->close_wait);
  if (VAR_16->flags & VAR_1)
   return -VAR_4;
  else
   return -VAR_5;
 }

 FUNC_5 (VAR_6, "after hung up\n");





 if ((VAR_14->f_flags & VAR_7) ||
     (VAR_20->flags & (1 << VAR_10))) {
  VAR_16->flags |= VAR_3;
  return 0;
 }

 FUNC_5 (VAR_6, "after nonblock\n");

 if (FUNC_0(VAR_20))
  VAR_18 = 1;
 VAR_17 = 0;

 FUNC_2(&VAR_16->open_wait, &VAR_12);

 FUNC_5 (VAR_6, "after add waitq.\n");
 FUNC_11(&VAR_16->lock, VAR_21);
 if (!FUNC_13(VAR_14)) {
  VAR_16->count--;
 }
 VAR_16->blocked_open++;
 FUNC_12(&VAR_16->lock, VAR_21);
 while (1) {
  VAR_19 = FUNC_14(VAR_16);
  FUNC_5 (VAR_6, "CD is now %d.\n", VAR_19);
  FUNC_9 (VAR_8);
  if (FUNC_13(VAR_14) ||
      !(VAR_16->flags & VAR_2)) {
   if (VAR_16->flags & VAR_1)
    VAR_17 = -VAR_4;
   else
    VAR_17 = -VAR_5;
   break;
  }
  if (!(VAR_16->flags & VAR_0) &&
      (VAR_18 || VAR_19))
   break;
  FUNC_5 (VAR_6, "signal_pending is now: %d (%lx)\n",
  (int)FUNC_10 (VAR_11), *(long*)(&VAR_11->blocked));
  if (FUNC_10(VAR_11)) {
   VAR_17 = -VAR_5;
   break;
  }
  FUNC_8();
 }
 FUNC_5 (VAR_6, "Got out of the loop. (%d)\n",
      VAR_16->blocked_open);
 FUNC_9 (VAR_9);
 FUNC_7(&VAR_16->open_wait, &VAR_12);

 FUNC_11(&VAR_16->lock, VAR_21);
 if (!FUNC_13(VAR_14)) {
  VAR_16->count++;
 }
 VAR_16->blocked_open--;
 if (VAR_17 == 0)
         VAR_16->flags |= VAR_3;
 FUNC_12(&VAR_16->lock, VAR_21);
 FUNC_4 ();
 return VAR_17;
}
