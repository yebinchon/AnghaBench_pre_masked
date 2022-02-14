
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int fifosize; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; } ;
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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 int FUNC_1 (struct uart_port*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_6 (struct uart_port*,int,unsigned int) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct uart_port *VAR_27, struct ktermios *VAR_28,
       struct ktermios *VAR_29)
{
 unsigned int VAR_30, VAR_31;
 unsigned long VAR_32;
 unsigned int VAR_33, VAR_34;




 VAR_33 = FUNC_5(VAR_27, VAR_28, VAR_29, 0, VAR_27->uartclk/16);
 VAR_34 = VAR_27->uartclk * 4 / VAR_33;

 switch (VAR_28->c_cflag & VAR_2) {
 case 130:
  VAR_30 = VAR_22;
  break;
 case 129:
  VAR_30 = VAR_23;
  break;
 case 128:
  VAR_30 = VAR_24;
  break;
 default:
  VAR_30 = VAR_25;
  break;
 }
 if (VAR_28->c_cflag & VAR_3)
  VAR_30 |= VAR_21;
 if (VAR_28->c_cflag & VAR_7) {
  VAR_30 |= VAR_20;
  if (!(VAR_28->c_cflag & VAR_9))
   VAR_30 |= VAR_18;
 }
 if (VAR_27->fifosize > 1)
  VAR_30 |= VAR_19;

 FUNC_3(&VAR_27->lock, VAR_32);




 FUNC_6(VAR_27, VAR_28->c_cflag, VAR_33);

 VAR_27->read_status_mask = VAR_13 | 255;
 if (VAR_28->c_iflag & VAR_6)
  VAR_27->read_status_mask |= VAR_12 | VAR_14;
 if (VAR_28->c_iflag & (VAR_0 | VAR_8))
  VAR_27->read_status_mask |= VAR_11;




 VAR_27->ignore_status_mask = 0;
 if (VAR_28->c_iflag & VAR_5)
  VAR_27->ignore_status_mask |= VAR_12 | VAR_14;
 if (VAR_28->c_iflag & VAR_4) {
  VAR_27->ignore_status_mask |= VAR_11;




  if (VAR_28->c_iflag & VAR_5)
   VAR_27->ignore_status_mask |= VAR_13;
 }




 if ((VAR_28->c_cflag & VAR_1) == 0)
  VAR_27->ignore_status_mask |= VAR_26;

 if (FUNC_0(VAR_27, VAR_28->c_cflag))
  FUNC_1(VAR_27);


 VAR_31 = FUNC_2(VAR_27->membase + VAR_10);
 FUNC_7(0, VAR_27->membase + VAR_10);


 FUNC_7(VAR_34 & 0x3f, VAR_27->membase + VAR_15);
 FUNC_7(VAR_34 >> 6, VAR_27->membase + VAR_16);






 FUNC_7(VAR_30, VAR_27->membase + VAR_17);
 FUNC_7(VAR_31, VAR_27->membase + VAR_10);

 FUNC_4(&VAR_27->lock, VAR_32);
}
