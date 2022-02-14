
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; } ;
struct file {int f_flags; } ;
struct e100_serial {int flags; int count; int line; int blocked_open; int open_wait; int close_wait; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int *) ;
 int VAR_11 ;
 int FUNC_2 (struct e100_serial*,int) ;
 int FUNC_3 (struct e100_serial*,int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct file*) ;
 int VAR_12 ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int
FUNC_13(struct tty_struct *VAR_13, struct file * VAR_14,
  struct e100_serial *VAR_15)
{
 FUNC_0(VAR_12, VAR_11);
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18 = 0, VAR_19 = 0;





 if (FUNC_11(VAR_14) ||
     (VAR_15->flags & VAR_0)) {
  FUNC_12(VAR_15->close_wait,
   !(VAR_15->flags & VAR_0));






  return -VAR_5;

 }





 if ((VAR_14->f_flags & VAR_7) ||
     (VAR_13->flags & (1 << VAR_10))) {
  VAR_15->flags |= VAR_3;
  return 0;
 }

 if (VAR_13->termios->c_cflag & VAR_4) {
   VAR_18 = 1;
 }
 VAR_17 = 0;
 FUNC_1(&VAR_15->open_wait, &VAR_12);




 FUNC_5(VAR_16);
 if (!FUNC_11(VAR_14)) {
  VAR_19++;
  VAR_15->count--;
 }
 FUNC_4(VAR_16);
 VAR_15->blocked_open++;
 while (1) {
  FUNC_5(VAR_16);

  FUNC_3(VAR_15, 1);
  FUNC_2(VAR_15, 1);
  FUNC_4(VAR_16);
  FUNC_9(VAR_8);
  if (FUNC_11(VAR_14) ||
      !(VAR_15->flags & VAR_2)) {






   VAR_17 = -VAR_5;

   break;
  }
  if (!(VAR_15->flags & VAR_0) && VAR_18)

   break;
  if (FUNC_10(VAR_11)) {
   VAR_17 = -VAR_6;
   break;
  }




  FUNC_8();
 }
 FUNC_9(VAR_9);
 FUNC_7(&VAR_15->open_wait, &VAR_12);
 if (VAR_19)
  VAR_15->count++;
 VAR_15->blocked_open--;




 if (VAR_17)
  return VAR_17;
 VAR_15->flags |= VAR_3;
 return 0;
}
