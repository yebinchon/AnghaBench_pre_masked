
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_2__ {int c_cflag; int c_ispeed; int c_ospeed; scalar_t__ c_iflag; scalar_t__ c_oflag; scalar_t__ c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_8)
{
 *(VAR_8->termios) = VAR_7;
 VAR_8->termios->c_cflag = VAR_1 | VAR_2 | VAR_3 | VAR_0
    | VAR_6 | VAR_4 | VAR_5;
 VAR_8->termios->c_ispeed = 9600;
 VAR_8->termios->c_ospeed = 9600;
 VAR_8->termios->c_lflag = 0;
 VAR_8->termios->c_oflag = 0;
 VAR_8->termios->c_iflag = 0;
}
