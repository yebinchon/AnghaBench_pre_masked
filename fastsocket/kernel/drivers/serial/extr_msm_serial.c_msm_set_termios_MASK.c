
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int read_status_mask; } ;
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
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 unsigned int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct ktermios*) ;
 int FUNC_6 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_8 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_26, struct ktermios *VAR_27,
       struct ktermios *VAR_28)
{
 unsigned long VAR_29;
 unsigned int VAR_30, VAR_31;

 FUNC_3(&VAR_26->lock, VAR_29);


 VAR_30 = FUNC_7(VAR_26, VAR_27, VAR_28, 300, 115200);
 VAR_30 = FUNC_1(VAR_26, VAR_30);
 if (FUNC_5(VAR_27))
  FUNC_6(VAR_27, VAR_30, VAR_30);


 VAR_31 = FUNC_0(VAR_26, VAR_12);
 VAR_31 &= ~VAR_18;
 if (VAR_27->c_cflag & VAR_6) {
  if (VAR_27->c_cflag & VAR_8)
   VAR_31 |= VAR_20;
  else if (VAR_27->c_cflag & VAR_1)
   VAR_31 |= VAR_21;
  else
   VAR_31 |= VAR_19;
 }


 VAR_31 &= ~VAR_13;
 switch (VAR_27->c_cflag & VAR_3) {
 case 131:
  VAR_31 |= VAR_14;
  break;
 case 130:
  VAR_31 |= VAR_15;
  break;
 case 129:
  VAR_31 |= VAR_16;
  break;
 case 128:
 default:
  VAR_31 |= VAR_17;
  break;
 }


 VAR_31 &= ~(VAR_22 | VAR_23);
 if (VAR_27->c_cflag & VAR_4)
  VAR_31 |= VAR_23;
 else
  VAR_31 |= VAR_22;


 FUNC_2(VAR_26, VAR_31, VAR_12);


 VAR_31 = FUNC_0(VAR_26, VAR_9);
 VAR_31 &= ~(VAR_10 | VAR_11);
 if (VAR_27->c_cflag & VAR_2) {
  VAR_31 |= VAR_10;
  VAR_31 |= VAR_11;
 }
 FUNC_2(VAR_26, VAR_31, VAR_9);


 VAR_26->read_status_mask = 0;
 if (VAR_27->c_iflag & VAR_5)
  VAR_26->read_status_mask |= VAR_24;
 if (VAR_27->c_iflag & (VAR_0 | VAR_7))
  VAR_26->read_status_mask |= VAR_25;

 FUNC_8(VAR_26, VAR_27->c_cflag, VAR_30);

 FUNC_4(&VAR_26->lock, VAR_29);
}
