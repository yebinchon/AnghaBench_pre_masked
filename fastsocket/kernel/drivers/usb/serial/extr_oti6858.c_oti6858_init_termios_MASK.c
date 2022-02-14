
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_2__ {int c_cflag; int c_ispeed; int c_ospeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_6)
{
 *(VAR_6->termios) = VAR_5;
 VAR_6->termios->c_cflag = VAR_0 | VAR_3 | VAR_2 | VAR_4 | VAR_1;
 VAR_6->termios->c_ispeed = 38400;
 VAR_6->termios->c_ospeed = 38400;
}
