
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct ktermios {int dummy; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_4,
     struct ktermios *VAR_5)
{
 VAR_4->termios->c_cflag &= ~(VAR_2 | VAR_3);
 VAR_4->termios->c_cflag |= (VAR_1 | VAR_0);
}
