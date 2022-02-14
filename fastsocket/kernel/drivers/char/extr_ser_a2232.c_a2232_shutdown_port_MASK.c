
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct a2232status {int Command; int OutFlush; int Setup; } ;
struct TYPE_7__ {TYPE_2__* tty; int flags; } ;
struct TYPE_8__ {TYPE_3__ port; } ;
struct a2232_port {TYPE_4__ gs; int which_port_on_a2232; int which_a2232; } ;
struct TYPE_6__ {TYPE_1__* termios; } ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct a2232status* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
 struct a2232_port *VAR_5;
 volatile struct a2232status *VAR_6;
 unsigned long VAR_7;

 VAR_5 = VAR_4;
 VAR_6 = FUNC_0(VAR_5->which_a2232, VAR_5->which_port_on_a2232);

 FUNC_2(VAR_7);

 VAR_5->gs.port.flags &= ~VAR_2;

 if (VAR_5->gs.port.tty && VAR_5->gs.port.tty->termios->c_cflag & VAR_3) {


  VAR_6->Command = ( (VAR_6->Command & ~VAR_0) |
     VAR_1 );
  VAR_6->OutFlush = -1;
  VAR_6->Setup = -1;
 }

 FUNC_1(VAR_7);
}
