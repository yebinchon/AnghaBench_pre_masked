
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {struct ktermios* termios; scalar_t__ stopped; struct gs_port* driver_data; } ;
struct ktermios {scalar_t__ c_iflag; scalar_t__ c_oflag; int c_cflag; scalar_t__ c_lflag; scalar_t__ c_line; int c_cc; } ;
struct TYPE_6__ {int open_wait; } ;
struct TYPE_4__ {int flags; struct tty_struct* tty; } ;
struct gs_port {int baud_base; int custom_divisor; int baud; int wakeup_chars; TYPE_3__ gs; TYPE_2__* rd; TYPE_1__ port; } ;
struct TYPE_5__ {int (* set_real_termios ) (struct gs_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_15 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct gs_port*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct gs_port*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (int *) ;

void FUNC_10 (struct tty_struct * VAR_16,
                     struct ktermios * VAR_17)
{
 struct gs_port *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 struct ktermios *VAR_22;

 FUNC_0();

 VAR_18 = VAR_16->driver_data;

 if (!VAR_18) return;
 if (!VAR_18->port.tty) {

  FUNC_2 (VAR_10, "gs: Odd: port->port.tty is NULL\n");
  VAR_18->port.tty = VAR_16;
 }


 VAR_22 = VAR_16->termios;

 if (VAR_15 & VAR_10) {
  FUNC_2 (VAR_10, "termios structure (%p):\n", VAR_22);
 }

 if(VAR_17 && (VAR_15 & VAR_10)) {
  if(VAR_22->c_iflag != VAR_17->c_iflag) FUNC_6("c_iflag changed\n");
  if(VAR_22->c_oflag != VAR_17->c_oflag) FUNC_6("c_oflag changed\n");
  if(VAR_22->c_cflag != VAR_17->c_cflag) FUNC_6("c_cflag changed\n");
  if(VAR_22->c_lflag != VAR_17->c_lflag) FUNC_6("c_lflag changed\n");
  if(VAR_22->c_line != VAR_17->c_line) FUNC_6("c_line changed\n");
  if(!FUNC_5(VAR_22->c_cc, VAR_17->c_cc, VAR_13)) FUNC_6("c_cc changed\n");
 }

 VAR_19 = FUNC_8(VAR_16);

 if ((VAR_22->c_cflag & VAR_7) == VAR_6) {
  if ( (VAR_18->port.flags & VAR_2) == VAR_1)
   VAR_19 = 57600;
  else if ((VAR_18->port.flags & VAR_2) == VAR_4)
   VAR_19 = 115200;
  else if ((VAR_18->port.flags & VAR_2) == VAR_3)
   VAR_19 = 230400;
  else if ((VAR_18->port.flags & VAR_2) == VAR_5)
   VAR_19 = 460800;
  else if ((VAR_18->port.flags & VAR_2) == VAR_0)
   VAR_19 = (VAR_18->baud_base / VAR_18->custom_divisor);
 }






 VAR_18->baud = VAR_19;



 VAR_20 = (VAR_19 / 10 / VAR_11) * 2;

 if (VAR_20 < 0) VAR_20 = 0;
 if (VAR_20 >= VAR_14) VAR_20 = VAR_14-1;

 VAR_18->wakeup_chars = VAR_20;



 VAR_21 = FUNC_4 (VAR_18, VAR_12);
 if (VAR_21 < 0) return ;

 VAR_21 = VAR_18->rd->set_real_termios(VAR_18);
 if (VAR_21 < 0) return ;

 if ((!VAR_17 ||
      (VAR_17->c_cflag & VAR_9)) &&
     !( VAR_22->c_cflag & VAR_9)) {
  VAR_16->stopped = 0;
  FUNC_3(VAR_16);
 }
 FUNC_1();
 return ;
}
