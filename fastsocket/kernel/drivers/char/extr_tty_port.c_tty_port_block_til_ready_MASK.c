
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; } ;
struct tty_port {int flags; int lock; int blocked_open; int count; int open_wait; int close_wait; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (struct file*) ;
 int FUNC_9 (struct tty_port*) ;
 int FUNC_10 (struct tty_port*) ;
 int VAR_11 ;
 int FUNC_11 (int ,int) ;

int FUNC_12(struct tty_port *VAR_12,
    struct tty_struct *VAR_13, struct file *VAR_14)
{
 int VAR_15 = 0, VAR_16;
 unsigned long VAR_17;
 FUNC_1(VAR_11);
 int VAR_18;


 if (FUNC_8(VAR_14) || VAR_12->flags & VAR_0) {
  FUNC_11(VAR_12->close_wait,
    !(VAR_12->flags & VAR_0));
  if (VAR_12->flags & VAR_1)
   return -VAR_5;
  else
   return -VAR_6;
 }



 if (VAR_13->flags & (1 << VAR_9)) {
  VAR_12->flags |= VAR_3;
  return 0;
 }
 if (VAR_14->f_flags & VAR_7) {

  if (VAR_13->termios->c_cflag & VAR_4)
   FUNC_10(VAR_12);
  VAR_12->flags |= VAR_3;
  return 0;
 }

 if (FUNC_0(VAR_13))
  VAR_15 = 1;





 VAR_16 = 0;


 FUNC_6(&VAR_12->lock, VAR_17);
 if (!FUNC_8(VAR_14))
  VAR_12->count--;
 VAR_12->blocked_open++;
 FUNC_7(&VAR_12->lock, VAR_17);

 while (1) {

  if (VAR_13->termios->c_cflag & VAR_4)
   FUNC_10(VAR_12);

  FUNC_3(&VAR_12->open_wait, &VAR_11, VAR_8);

  if (FUNC_8(VAR_14) || !(VAR_12->flags & VAR_2)) {
   if (VAR_12->flags & VAR_1)
    VAR_16 = -VAR_5;
   else
    VAR_16 = -VAR_6;
   break;
  }


  VAR_18 = FUNC_9(VAR_12);
  if (!(VAR_12->flags & VAR_0) &&
    (VAR_15 || VAR_18))
   break;
  if (FUNC_5(VAR_10)) {
   VAR_16 = -VAR_6;
   break;
  }
  FUNC_4();
 }
 FUNC_2(&VAR_12->open_wait, &VAR_11);



 FUNC_6(&VAR_12->lock, VAR_17);
 if (!FUNC_8(VAR_14))
  VAR_12->count++;
 VAR_12->blocked_open--;
 if (VAR_16 == 0)
  VAR_12->flags |= VAR_3;
 FUNC_7(&VAR_12->lock, VAR_17);
 return VAR_16;

}
