
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
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 unsigned int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_9 (struct uart_port*,unsigned int) ;
 int FUNC_10 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_29, struct ktermios *VAR_30, struct ktermios *VAR_31)
{
 unsigned int VAR_32, VAR_33 = 0;
 unsigned long VAR_34;
 unsigned int VAR_35, VAR_36;




 VAR_35 = FUNC_8(VAR_29, VAR_30, VAR_31, 0, VAR_29->uartclk/16);
 VAR_36 = FUNC_9(VAR_29, VAR_35);

 switch (VAR_30->c_cflag & VAR_3) {
 case 130:
  VAR_32 = VAR_12;
  break;
 case 129:
  VAR_32 = VAR_13;
  break;
 case 128:
  VAR_32 = VAR_14;
  break;
 default:
  VAR_32 = VAR_15;
  break;
 }


 if (VAR_30->c_cflag & VAR_4)
  VAR_32 |= VAR_20;


 if (VAR_30->c_cflag & VAR_8) {
  if (VAR_30->c_cflag & VAR_1) {
   if (VAR_30->c_cflag & VAR_10)
    VAR_32 |= VAR_26;
   else
    VAR_32 |= VAR_28;
  }
  else if (VAR_30->c_cflag & VAR_10)
   VAR_32 |= VAR_27;
  else
   VAR_32 |= VAR_25;
 }

 if (VAR_29->fifosize > 1)
  VAR_33 = VAR_17 | VAR_19 | VAR_18 | VAR_16;

 FUNC_6(&VAR_29->lock, VAR_34);




 FUNC_10(VAR_29, VAR_30->c_cflag, VAR_35);

 VAR_29->read_status_mask = VAR_24;
 if (VAR_30->c_iflag & VAR_7)
  VAR_29->read_status_mask |= (VAR_22 | VAR_23);
 if (VAR_30->c_iflag & (VAR_0 | VAR_9))
  VAR_29->read_status_mask |= VAR_21;




 VAR_29->ignore_status_mask = 0;
 if (VAR_30->c_iflag & VAR_6)
  VAR_29->ignore_status_mask |= (VAR_22 | VAR_23);
 if (VAR_30->c_iflag & VAR_5) {
  VAR_29->ignore_status_mask |= VAR_21;




  if (VAR_30->c_iflag & VAR_6)
   VAR_29->ignore_status_mask |= VAR_24;
 }




 if ((VAR_30->c_cflag & VAR_2) == 0)
  VAR_29->ignore_status_mask |= VAR_11;


 if (FUNC_0(VAR_29, VAR_30->c_cflag))
  FUNC_5(VAR_29);
 else
  FUNC_4(VAR_29);


 FUNC_1(VAR_29, VAR_36);

 FUNC_3(VAR_29, VAR_32);
 FUNC_2(VAR_29, VAR_33);

 FUNC_7(&VAR_29->lock, VAR_34);
}
