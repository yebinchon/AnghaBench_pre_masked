
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ktermios* termios; } ;
struct ktermios {int c_cflag; int c_ispeed; int c_ospeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ktermios VAR_5 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_6)
{
 struct ktermios *VAR_7 = VAR_6->termios;
 *VAR_7 = VAR_5;
 VAR_7->c_cflag = VAR_0 | VAR_3
          | VAR_2 | VAR_4 | VAR_1;
 VAR_7->c_ispeed = 9600;
 VAR_7->c_ospeed = 9600;
}
