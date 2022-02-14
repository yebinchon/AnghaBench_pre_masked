
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; struct ktermios* termios; struct stliport* driver_data; } ;
struct TYPE_2__ {int open_wait; } ;
struct stliport {size_t brdnr; TYPE_1__ port; int asig; } ;
struct stlibrd {int dummy; } ;
struct ktermios {int c_cflag; } ;
typedef int asysigs_t ;
typedef int asyport_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct stlibrd** VAR_5 ;
 int FUNC_0 (struct stlibrd*,struct stliport*,int ,int *,int,int ) ;
 int FUNC_1 (struct tty_struct*,struct stliport*,int *,struct ktermios*) ;
 int FUNC_2 (int *,int,int) ;
 size_t VAR_6 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_7, struct ktermios *VAR_8)
{
 struct stliport *VAR_9;
 struct stlibrd *VAR_10;
 struct ktermios *VAR_11;
 asyport_t VAR_12;

 VAR_9 = VAR_7->driver_data;
 if (VAR_9 == ((void*)0))
  return;
 if (VAR_9->brdnr >= VAR_6)
  return;
 VAR_10 = VAR_5[VAR_9->brdnr];
 if (VAR_10 == ((void*)0))
  return;

 VAR_11 = VAR_7->termios;

 FUNC_1(VAR_7, VAR_9, &VAR_12, VAR_11);
 FUNC_0(VAR_10, VAR_9, VAR_0, &VAR_12, sizeof(asyport_t), 0);
 FUNC_2(&VAR_9->asig, ((VAR_11->c_cflag & VAR_2) ? 1 : 0), -1);
 FUNC_0(VAR_10, VAR_9, VAR_1, &VAR_9->asig,
  sizeof(asysigs_t), 0);
 if ((VAR_8->c_cflag & VAR_4) && ((VAR_11->c_cflag & VAR_4) == 0))
  VAR_7->hw_stopped = 0;
 if (((VAR_8->c_cflag & VAR_3) == 0) && (VAR_11->c_cflag & VAR_3))
  FUNC_3(&VAR_9->port.open_wait);
}
