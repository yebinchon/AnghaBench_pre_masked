
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int fifosize; int read_status_mask; int ignore_status_mask; int lock; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


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
 int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_5 (struct uart_port*,unsigned int) ;
 int FUNC_6 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_19, struct ktermios *VAR_20,
    struct ktermios *VAR_21)
{
 unsigned int VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25;




 VAR_20->c_cflag |= VAR_0;




 VAR_23 = FUNC_4(VAR_19, VAR_20, VAR_21, 0, VAR_19->uartclk/16);
 VAR_24 = FUNC_5(VAR_19, VAR_23);

 switch (VAR_20->c_cflag & VAR_1) {
 case 130:
  VAR_22 = VAR_14;
  break;
 case 129:
  VAR_22 = VAR_15;
  break;
 case 128:
  VAR_22 = VAR_16;
  break;
 default:
  VAR_22 = VAR_17;
  break;
 }
 if (VAR_20->c_cflag & VAR_2)
  VAR_22 |= VAR_18;
 if (VAR_20->c_cflag & VAR_6) {
  VAR_22 |= VAR_13;
  if (!(VAR_20->c_cflag & VAR_7))
   VAR_22 |= VAR_11;
 }
 if (VAR_19->fifosize > 1)
  VAR_22 |= VAR_12;

 FUNC_2(&VAR_19->lock, VAR_25);




 FUNC_6(VAR_19, VAR_20->c_cflag, VAR_23);

 VAR_19->read_status_mask = VAR_9;
 if (VAR_20->c_iflag & VAR_5)
  VAR_19->read_status_mask |= VAR_10 | VAR_8;




 VAR_19->ignore_status_mask = 0;
 if (VAR_20->c_iflag & VAR_4)
  VAR_19->ignore_status_mask |= VAR_8 | VAR_10;
 if (VAR_20->c_iflag & VAR_3) {




  if (VAR_20->c_iflag & VAR_4)
   VAR_19->ignore_status_mask |= VAR_9;
 }

 VAR_24 -= 1;

 FUNC_1(VAR_22 | VAR_24, FUNC_0(VAR_19));

 FUNC_3(&VAR_19->lock, VAR_25);
}
