
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int termios_mutex; TYPE_1__* ops; struct ktermios* termios; } ;
struct ktermios {int dummy; } ;
typedef int speed_t ;
struct TYPE_2__ {int (* set_termios ) (struct tty_struct*,struct ktermios*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*,struct ktermios*) ;
 int FUNC_3 (struct tty_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0, speed_t VAR_1)
{
 struct ktermios VAR_2;

 FUNC_0(&VAR_0->termios_mutex);
 VAR_2 =*(VAR_0->termios);
 FUNC_3(VAR_0, VAR_1, VAR_1);
 VAR_0->ops->set_termios(VAR_0, &VAR_2);
 FUNC_1(&VAR_0->termios_mutex);
}
