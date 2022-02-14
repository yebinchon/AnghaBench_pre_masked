
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; } ;
struct serial_state {int smc_scc_num; int count; int line; } ;
struct file {int f_flags; } ;
struct TYPE_11__ {int flags; int line; int blocked_open; int open_wait; struct serial_state* state; int close_wait; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_12__ {int state; } ;
struct TYPE_10__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* VAR_18 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (struct file*) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_14(struct tty_struct *VAR_20, struct file * VAR_21,
      ser_info_t *VAR_22)
{



 struct serial_state *VAR_23 = VAR_22->state;
 int VAR_24;
 int VAR_25 = 0;





 if (FUNC_13(VAR_21) ||
     (VAR_22->flags & VAR_0)) {
  if (VAR_22->flags & VAR_0)
   FUNC_2(&VAR_22->close_wait);






  return -VAR_6;

 }







 if ((VAR_21->f_flags & VAR_9) ||
     (VAR_20->flags & (1 << VAR_12)) ||
     !(VAR_22->state->smc_scc_num & VAR_8)) {
  VAR_22->flags |= VAR_3;
  return 0;
 }

 if (VAR_20->termios->c_cflag & VAR_5)
  VAR_25 = 1;
 VAR_24 = 0;
 if (VAR_24)
  return VAR_24;
 VAR_22->flags |= VAR_3;
 return 0;
}
