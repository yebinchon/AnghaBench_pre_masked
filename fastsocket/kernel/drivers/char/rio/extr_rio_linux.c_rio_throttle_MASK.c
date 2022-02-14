
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; scalar_t__ driver_data; } ;
struct Port {int State; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 struct Port *VAR_3 = (struct Port *) VAR_2->driver_data;

 FUNC_1();




 if ((VAR_2->termios->c_cflag & VAR_0) || (FUNC_0(VAR_2))) {
  VAR_3->State |= VAR_1;
 }

 FUNC_2();
}
