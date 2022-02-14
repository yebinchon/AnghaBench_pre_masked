
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; } ;
struct m68k_serial {int flags; int blocked_open; int count; int open_wait; int close_wait; } ;
struct file {int f_flags; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
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
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct m68k_serial*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (struct file*) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_13, struct file * VAR_14,
      struct m68k_serial *VAR_15)
{
 FUNC_0(VAR_12, VAR_11);
 int VAR_16;
 int VAR_17 = 0;





 if (VAR_15->flags & VAR_4) {
  FUNC_2(&VAR_15->close_wait);






  return -VAR_1;

 }





 if ((VAR_14->f_flags & VAR_3) ||
     (VAR_13->flags & (1 << VAR_10))) {
  VAR_15->flags |= VAR_7;
  return 0;
 }

 if (VAR_13->termios->c_cflag & VAR_0)
  VAR_17 = 1;
 VAR_16 = 0;
 FUNC_1(&VAR_15->open_wait, &VAR_12);

 VAR_15->count--;
 VAR_15->blocked_open++;
 while (1) {
  FUNC_3();
  FUNC_5(VAR_15, 1);
  FUNC_4();
  VAR_11->state = VAR_8;
  if (FUNC_9(VAR_14) ||
      !(VAR_15->flags & VAR_6)) {






   VAR_16 = -VAR_1;

   break;
  }
  if (!(VAR_15->flags & VAR_4) && VAR_17)
   break;
                if (FUNC_8(VAR_11)) {
   VAR_16 = -VAR_2;
   break;
  }
  FUNC_7();
 }
 VAR_11->state = VAR_9;
 FUNC_6(&VAR_15->open_wait, &VAR_12);
 if (!FUNC_9(VAR_14))
  VAR_15->count++;
 VAR_15->blocked_open--;

 if (VAR_16)
  return VAR_16;
 VAR_15->flags |= VAR_7;
 return 0;
}
