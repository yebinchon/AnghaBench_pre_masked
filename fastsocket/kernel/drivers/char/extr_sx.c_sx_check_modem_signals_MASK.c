
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* tty; int open_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;
struct sx_port {int c_dcd; TYPE_4__ gs; } ;
struct TYPE_7__ {TYPE_1__* termios; } ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sx_port*,int) ;
 int FUNC_3 (struct sx_port*,int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline void FUNC_7(struct sx_port *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_4, "Checking modem signals (%d/%d)\n",
   VAR_6->c_dcd, FUNC_5(&VAR_6->gs.port));

 if (VAR_7 & VAR_2) {
  VAR_7 &= ~VAR_2;
  FUNC_1(VAR_4, "got a break.\n");
  FUNC_3(VAR_6, VAR_7, VAR_7);
  FUNC_0(&VAR_6->gs);
 }
 if (VAR_7 & VAR_3) {
  VAR_7 &= ~VAR_3;
  FUNC_1(VAR_4, "got a DCD change.\n");
  FUNC_3(VAR_6, VAR_7, VAR_7);
  VAR_8 = FUNC_5(&VAR_6->gs.port);
  FUNC_1(VAR_4, "DCD is now %d\n", VAR_8);
  if (VAR_8 != VAR_6->c_dcd) {
   VAR_6->c_dcd = VAR_8;
   if (FUNC_5(&VAR_6->gs.port)) {

    if ((FUNC_2(VAR_6, VAR_5) !=
      VAR_1) &&
      !(VAR_6->gs.port.tty->termios->
       c_cflag & VAR_0)) {

     FUNC_1(VAR_4, "DCD "
      "active, unblocking open\n");
     FUNC_6(&VAR_6->gs.port.
       open_wait);
    } else {
     FUNC_1(VAR_4, "DCD "
      "raised. Ignoring.\n");
    }
   } else {

    if (!(VAR_6->gs.port.tty->termios->c_cflag & VAR_0)){
     FUNC_1(VAR_4, "DCD "
      "dropped. hanging up....\n");
     FUNC_4(VAR_6->gs.port.tty);
    } else {
     FUNC_1(VAR_4, "DCD "
      "dropped. ignoring.\n");
    }
   }
  } else {
   FUNC_1(VAR_4, "Hmmm. card told us "
    "DCD changed, but it didn't.\n");
  }
 }
}
