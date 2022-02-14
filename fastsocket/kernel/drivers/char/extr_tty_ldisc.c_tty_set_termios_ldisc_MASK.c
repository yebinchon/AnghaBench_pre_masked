
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int termios_mutex; TYPE_1__* termios; } ;
struct TYPE_2__ {int c_line; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->termios_mutex);
 VAR_0->termios->c_line = VAR_1;
 FUNC_1(&VAR_0->termios_mutex);
}
