
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_1__* termios; struct r_port* driver_data; } ;
struct r_port {int channel; } ;
struct ktermios {unsigned int c_cflag; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;
typedef int CHANNEL_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct tty_struct*,struct r_port*,struct ktermios*) ;
 scalar_t__ FUNC_1 (struct r_port*,char*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_6,
      struct ktermios *VAR_7)
{
 struct r_port *VAR_8 = VAR_6->driver_data;
 CHANNEL_t *VAR_9;
 unsigned VAR_10;

 if (FUNC_1(VAR_8, "rp_set_termios"))
  return;

 VAR_10 = VAR_6->termios->c_cflag;




 if (((VAR_10 & VAR_5) == VAR_3) || ((VAR_10 & VAR_5) == VAR_4))
  VAR_6->termios->c_cflag =
      ((VAR_10 & ~VAR_5) | (VAR_7->c_cflag & VAR_5));

 VAR_6->termios->c_cflag &= ~VAR_1;

 FUNC_0(VAR_6, VAR_8, VAR_7);

 VAR_9 = &VAR_8->channel;


 if ((VAR_7->c_cflag & VAR_0) && !(VAR_6->termios->c_cflag & VAR_0)) {
  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
 }


 if (!(VAR_7->c_cflag & VAR_0) && (VAR_6->termios->c_cflag & VAR_0)) {
  if (!VAR_6->hw_stopped || !(VAR_6->termios->c_cflag & VAR_2))
   FUNC_6(VAR_9);
  FUNC_5(VAR_9);
 }

 if ((VAR_7->c_cflag & VAR_2) && !(VAR_6->termios->c_cflag & VAR_2)) {
  VAR_6->hw_stopped = 0;
  FUNC_2(VAR_6);
 }
}
