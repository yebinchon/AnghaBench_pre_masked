
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int termios_mutex; TYPE_1__* ops; struct ktermios* termios; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,struct ktermios*) ;

__attribute__((used)) static inline void FUNC_3(struct tty_struct *VAR_1, int VAR_2)
{
 struct ktermios VAR_3;
 int VAR_4;

 FUNC_0(&VAR_1->termios_mutex);
 VAR_3 = *(VAR_1->termios);
 VAR_4 = VAR_1->termios->c_cflag;

 if (VAR_2)
  VAR_4 &= ~VAR_0;
 else
  VAR_4 |= VAR_0;

 VAR_1->termios->c_cflag = VAR_4;
 if (VAR_1->ops->set_termios)
  VAR_1->ops->set_termios(VAR_1, &VAR_3);
 FUNC_1(&VAR_1->termios_mutex);
}
