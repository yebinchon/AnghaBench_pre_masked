
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; } ;
struct TYPE_2__ {int c_lflag; int c_iflag; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_9)
{

 VAR_9->termios->c_lflag = 0;
 VAR_9->termios->c_lflag &= ~(VAR_5 | VAR_1 | VAR_0 | VAR_2 | VAR_8);
 VAR_9->termios->c_iflag = VAR_3 | VAR_4 | VAR_6;

 VAR_9->termios->c_oflag &= ~VAR_7;
}
