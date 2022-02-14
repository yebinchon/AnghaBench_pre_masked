
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; struct ktermios* termios; } ;
struct moxa_port {int dummy; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct moxa_port*,int,int,int,int,int) ;
 int FUNC_1 (struct moxa_port*,struct ktermios*,int ) ;
 int FUNC_2 (struct tty_struct*,int,int) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct ktermios*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_5, struct ktermios *VAR_6)
{
 register struct ktermios *VAR_7 = VAR_5->termios;
 struct moxa_port *VAR_8 = VAR_5->driver_data;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = 0;
 if (VAR_7->c_cflag & VAR_1)
  VAR_9 = VAR_10 = 1;
 if (VAR_7->c_iflag & VAR_4)
  VAR_11 = 1;
 if (VAR_7->c_iflag & VAR_3)
  VAR_12 = 1;
 if (VAR_7->c_iflag & VAR_2)
  VAR_13 = 1;


 VAR_7->c_cflag &= ~VAR_0;
 FUNC_0(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 VAR_14 = FUNC_1(VAR_8, VAR_7, FUNC_3(VAR_5));
 if (VAR_14 == -1)
  VAR_14 = FUNC_4(VAR_6);

 FUNC_2(VAR_5, VAR_14, VAR_14);
}
