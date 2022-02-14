
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; } ;
struct TYPE_2__ {int flags; int blocked_open; int count; int open_wait; int close_wait; } ;
struct specialix_port {TYPE_1__ port; int lock; int MSVR; } ;
struct specialix_board {int lock; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int *) ;
 int VAR_14 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct specialix_board* FUNC_6 (struct specialix_port*) ;
 int FUNC_7 (struct specialix_port*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (struct tty_struct*) ;
 int FUNC_15 (struct specialix_board*,int ) ;
 int FUNC_16 (struct specialix_board*,int ,int ) ;
 scalar_t__ FUNC_17 (struct file*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_18(struct tty_struct *VAR_16, struct file *VAR_17,
      struct specialix_port *VAR_18)
{
 FUNC_1(VAR_15, VAR_14);
 struct specialix_board *VAR_19 = FUNC_6(VAR_18);
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22;
 unsigned long VAR_23;

 FUNC_3();





 if (FUNC_17(VAR_17) || VAR_18->port.flags & VAR_0) {
  FUNC_5(&VAR_18->port.close_wait);
  if (VAR_18->port.flags & VAR_1) {
   FUNC_4();
   return -VAR_6;
  } else {
   FUNC_4();
   return -VAR_7;
  }
 }





 if ((VAR_17->f_flags & VAR_10) ||
     (VAR_16->flags & (1 << VAR_13))) {
  VAR_18->port.flags |= VAR_3;
  FUNC_4();
  return 0;
 }

 if (FUNC_0(VAR_16))
  VAR_21 = 1;
 VAR_20 = 0;
 FUNC_2(&VAR_18->port.open_wait, &VAR_15);
 FUNC_12(&VAR_18->lock, VAR_23);
 if (!FUNC_17(VAR_17))
  VAR_18->port.count--;
 FUNC_13(&VAR_18->lock, VAR_23);
 VAR_18->port.blocked_open++;
 while (1) {
  FUNC_12(&VAR_19->lock, VAR_23);
  FUNC_16(VAR_19, VAR_4, FUNC_7(VAR_18));
  VAR_22 = FUNC_15(VAR_19, VAR_5) & VAR_8;
  if (FUNC_14(VAR_16)) {

   VAR_18->MSVR |= VAR_9;
   FUNC_16(VAR_19, VAR_5, VAR_18->MSVR);
  } else {

   VAR_18->MSVR |= VAR_9;
   FUNC_16(VAR_19, VAR_5, VAR_18->MSVR);
  }
  FUNC_13(&VAR_19->lock, VAR_23);
  FUNC_10(VAR_11);
  if (FUNC_17(VAR_17) ||
      !(VAR_18->port.flags & VAR_2)) {
   if (VAR_18->port.flags & VAR_1)
    VAR_20 = -VAR_6;
   else
    VAR_20 = -VAR_7;
   break;
  }
  if (!(VAR_18->port.flags & VAR_0) &&
      (VAR_21 || VAR_22))
   break;
  if (FUNC_11(VAR_14)) {
   VAR_20 = -VAR_7;
   break;
  }
  FUNC_9();
 }

 FUNC_10(VAR_12);
 FUNC_8(&VAR_18->port.open_wait, &VAR_15);
 FUNC_12(&VAR_18->lock, VAR_23);
 if (!FUNC_17(VAR_17))
  VAR_18->port.count++;
 VAR_18->port.blocked_open--;
 FUNC_13(&VAR_18->lock, VAR_23);
 if (VAR_20) {
  FUNC_4();
  return VAR_20;
 }

 VAR_18->port.flags |= VAR_3;
 FUNC_4();
 return 0;
}
