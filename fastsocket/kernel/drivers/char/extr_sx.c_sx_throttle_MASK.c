
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; struct sx_port* driver_data; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ port; } ;
struct sx_port {TYPE_3__ gs; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 struct sx_port *VAR_3 = VAR_2->driver_data;

 FUNC_1();



 if ((VAR_2->termios->c_cflag & VAR_0) || (FUNC_0(VAR_2))) {
  VAR_3->gs.port.flags |= VAR_1;
 }
 FUNC_2();
}
