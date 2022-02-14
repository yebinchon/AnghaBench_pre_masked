
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; struct stliport* driver_data; } ;
struct tty_port {int flags; } ;
struct stliport {scalar_t__ closing_wait; size_t brdnr; int state; int asig; struct tty_port port; } ;
struct stlibrd {int dummy; } ;
struct file {int dummy; } ;
typedef int asysigs_t ;
struct TYPE_2__ {int c_cflag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct stlibrd** VAR_10 ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*) ;
 int VAR_11 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct stlibrd*,struct stliport*,int ,int ) ;
 int FUNC_8 (struct stlibrd*,struct stliport*,int ,int *,int,int ) ;
 struct tty_struct* VAR_12 ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_port*,struct tty_struct*) ;
 scalar_t__ FUNC_12 (struct tty_port*,struct tty_struct*,struct file*) ;
 int FUNC_13 (struct tty_port*,int *) ;
 int FUNC_14 (struct tty_struct*,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct tty_struct *VAR_13, struct file *VAR_14)
{
 struct stlibrd *VAR_15;
 struct stliport *VAR_16;
 struct tty_port *VAR_17;
 unsigned long VAR_18;

 VAR_16 = VAR_13->driver_data;
 if (VAR_16 == ((void*)0))
  return;
 VAR_17 = &VAR_16->port;

 if (FUNC_12(VAR_17, VAR_13, VAR_14) == 0)
  return;







  FUNC_2(&VAR_11, VAR_18);
 if (VAR_13 == VAR_12)
  FUNC_5(VAR_13);
 FUNC_3(&VAR_11, VAR_18);



 if (VAR_16->closing_wait != VAR_0)
  FUNC_14(VAR_13, VAR_16->closing_wait);


 VAR_17->flags &= ~VAR_1;

 VAR_15 = VAR_10[VAR_16->brdnr];
 FUNC_7(VAR_15, VAR_16, 0, 0);
 if (VAR_13->termios->c_cflag & VAR_3) {
  FUNC_6(&VAR_16->asig, 0, 0);
  if (FUNC_9(VAR_4, &VAR_16->state))
   FUNC_1(VAR_6, &VAR_16->state);
  else
   FUNC_8(VAR_15, VAR_16, VAR_2, &VAR_16->asig,
    sizeof(asysigs_t), 0);
 }
 FUNC_0(VAR_8, &VAR_16->state);
 FUNC_0(VAR_7, &VAR_16->state);
 FUNC_1(VAR_9, &VAR_13->flags);
 FUNC_10(VAR_13);
 FUNC_1(VAR_5, &VAR_16->state);
 FUNC_4(VAR_13);

 FUNC_11(VAR_17, VAR_13);
 FUNC_13(VAR_17, ((void*)0));
}
