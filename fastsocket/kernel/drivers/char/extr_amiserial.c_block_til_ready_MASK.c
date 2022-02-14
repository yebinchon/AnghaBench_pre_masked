
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wait_queue {int * member_1; int member_0; } ;
struct tty_struct {int flags; TYPE_1__* termios; } ;
struct serial_state {int count; int line; } ;
struct file {int f_flags; } ;
struct async_struct {int flags; int line; int blocked_open; int open_wait; int close_wait; struct serial_state* state; } ;
struct TYPE_4__ {int pra; } ;
struct TYPE_3__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct wait_queue*) ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,struct wait_queue*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct file*) ;
 struct wait_queue VAR_17 ;

__attribute__((used)) static int FUNC_13(struct tty_struct *VAR_18, struct file * VAR_19,
      struct async_struct *VAR_20)
{



 struct wait_queue VAR_21 = { &VAR_16, ((void*)0) };

 struct serial_state *VAR_22 = VAR_20->state;
 int VAR_23;
 int VAR_24 = 0, VAR_25 = 0;
 unsigned long VAR_26;





 if (FUNC_12(VAR_19) ||
     (VAR_20->flags & VAR_0)) {
  if (VAR_20->flags & VAR_0)
   FUNC_3(&VAR_20->close_wait);




  return -VAR_6;

 }





 if ((VAR_19->f_flags & VAR_8) ||
     (VAR_18->flags & (1 << VAR_14))) {
  VAR_20->flags |= VAR_3;
  return 0;
 }

 if (VAR_18->termios->c_cflag & VAR_5)
  VAR_24 = 1;
 VAR_23 = 0;
 FUNC_2(&VAR_20->open_wait, &VAR_21);




 FUNC_5(VAR_26);
 if (!FUNC_12(VAR_19)) {
  VAR_25 = 1;
  VAR_22->count--;
 }
 FUNC_4(VAR_26);
 VAR_20->blocked_open++;
 while (1) {
  FUNC_5(VAR_26);
  if (VAR_18->termios->c_cflag & VAR_4)
          FUNC_8(VAR_10|VAR_11);
  FUNC_4(VAR_26);
  FUNC_10(VAR_12);
  if (FUNC_12(VAR_19) ||
      !(VAR_20->flags & VAR_2)) {






   VAR_23 = -VAR_6;

   break;
  }
  if (!(VAR_20->flags & VAR_0) &&
      (VAR_24 || (!(VAR_15.pra & VAR_9)) ))
   break;
  if (FUNC_11(VAR_16)) {
   VAR_23 = -VAR_7;
   break;
  }




  FUNC_9();
 }
 FUNC_1(VAR_13);
 FUNC_7(&VAR_20->open_wait, &VAR_21);
 if (VAR_25)
  VAR_22->count++;
 VAR_20->blocked_open--;




 if (VAR_23)
  return VAR_23;
 VAR_20->flags |= VAR_3;
 return 0;
}
