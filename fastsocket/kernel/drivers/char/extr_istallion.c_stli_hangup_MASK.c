
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* termios; struct stliport* driver_data; } ;
struct tty_port {int lock; int flags; } ;
struct stliport {size_t brdnr; int state; int asig; struct tty_port port; } ;
struct stlibrd {int dummy; } ;
typedef int asysigs_t ;
struct TYPE_2__ {int c_cflag; } ;


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
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct stlibrd** VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int ) ;
 size_t VAR_13 ;
 int FUNC_5 (struct stlibrd*,struct stliport*,int ,int ) ;
 int FUNC_6 (struct stlibrd*,struct stliport*,int ,int *,int,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct tty_port*) ;

__attribute__((used)) static void FUNC_9(struct tty_struct *VAR_14)
{
 struct stliport *VAR_15;
 struct stlibrd *VAR_16;
 struct tty_port *VAR_17;
 unsigned long VAR_18;

 VAR_15 = VAR_14->driver_data;
 if (VAR_15 == ((void*)0))
  return;
 if (VAR_15->brdnr >= VAR_13)
  return;
 VAR_16 = VAR_11[VAR_15->brdnr];
 if (VAR_16 == ((void*)0))
  return;
 VAR_17 = &VAR_15->port;

 FUNC_2(&VAR_17->lock, VAR_18);
 VAR_17->flags &= ~VAR_0;
 FUNC_3(&VAR_17->lock, VAR_18);

 if (!FUNC_7(VAR_3, &VAR_15->state))
  FUNC_5(VAR_16, VAR_15, 0, 0);

 FUNC_2(&VAR_12, VAR_18);
 if (VAR_14->termios->c_cflag & VAR_2) {
  FUNC_4(&VAR_15->asig, 0, 0);
  if (FUNC_7(VAR_4, &VAR_15->state)) {
   FUNC_1(VAR_7, &VAR_15->state);
   FUNC_1(VAR_6, &VAR_15->state);
   FUNC_1(VAR_5, &VAR_15->state);
  } else {
   FUNC_6(VAR_16, VAR_15, VAR_1,
    &VAR_15->asig, sizeof(asysigs_t), 0);
  }
 }

 FUNC_0(VAR_9, &VAR_15->state);
 FUNC_0(VAR_8, &VAR_15->state);
 FUNC_1(VAR_10, &VAR_14->flags);
 FUNC_3(&VAR_12, VAR_18);

 FUNC_8(VAR_17);
}
