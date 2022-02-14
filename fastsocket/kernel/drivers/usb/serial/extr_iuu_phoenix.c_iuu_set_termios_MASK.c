
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {TYPE_1__* termios; } ;
struct ktermios {int dummy; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct usb_serial_port*,int,unsigned int*,unsigned int) ;
 int FUNC_1 (struct tty_struct*,int,int) ;
 int FUNC_2 (TYPE_1__*,struct ktermios*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_16,
  struct usb_serial_port *VAR_17, struct ktermios *VAR_18)
{
 const u32 VAR_19 = VAR_0|VAR_12|VAR_13;

 unsigned int VAR_20 = VAR_16->termios->c_cflag;
 int VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 int VAR_24 = VAR_1;
 int VAR_25 = 9600;
 u32 VAR_26 = VAR_20 & VAR_19;


 VAR_23 = 0;
 if (VAR_20 & VAR_0) {
  if (VAR_20 & VAR_13)
   VAR_23 |= VAR_10;
  else
   VAR_23 |= VAR_7;
 } else if (!(VAR_20 & VAR_12)) {
  VAR_23 |= VAR_8;
  VAR_24 = VAR_2;
 } else if (VAR_20 & VAR_13)
  VAR_23 |= VAR_9;
 else
  VAR_23 |= VAR_6;

 VAR_23 |= (VAR_20 & VAR_4 ? VAR_11 : VAR_5);


 VAR_21 = FUNC_0(VAR_17,
   (VAR_15 == 2) ? 16457 : 9600 * VAR_14 / 100,
   &VAR_22, VAR_23);





  if (VAR_18)
   FUNC_2(VAR_16->termios, VAR_18);
 if (VAR_21 != 0)
  return;

 FUNC_1(VAR_16, VAR_25, VAR_25);
 VAR_16->termios->c_cflag &= ~(VAR_19|VAR_3);
 VAR_16->termios->c_cflag |= VAR_26 | VAR_24;
}
