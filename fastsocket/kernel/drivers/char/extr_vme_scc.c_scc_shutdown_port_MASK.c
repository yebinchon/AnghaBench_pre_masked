
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tty; int flags; } ;
struct TYPE_8__ {TYPE_3__ port; } ;
struct scc_port {TYPE_4__ gs; } ;
struct TYPE_6__ {TYPE_1__* termios; } ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scc_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
 struct scc_port *VAR_3 = VAR_2;

 VAR_3->gs.port.flags &= ~ VAR_0;
 if (VAR_3->gs.port.tty && (VAR_3->gs.port.tty->termios->c_cflag & VAR_1)) {
  FUNC_0 (VAR_3, 0, 0);
 }
}
