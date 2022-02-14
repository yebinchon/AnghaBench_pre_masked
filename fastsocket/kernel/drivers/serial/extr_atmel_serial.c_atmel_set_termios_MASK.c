
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; TYPE_1__* ops; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_2__ {int (* enable_ms ) (struct uart_port*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;



 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 unsigned int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,int) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (struct uart_port*,unsigned int) ;
 int FUNC_7 (struct uart_port*,unsigned int) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct uart_port*) ;
 unsigned int FUNC_12 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_13 (struct uart_port*,unsigned int) ;
 int FUNC_14 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_15(struct uart_port *VAR_39, struct ktermios *VAR_40,
         struct ktermios *VAR_41)
{
 unsigned long VAR_42;
 unsigned int VAR_43, VAR_44, VAR_45, VAR_46;


 VAR_43 = FUNC_2(VAR_39) & ~(VAR_23 | VAR_0
     | VAR_6 | VAR_9
     | VAR_25);

 VAR_46 = FUNC_12(VAR_39, VAR_40, VAR_41, 0, VAR_39->uartclk / 16);
 VAR_45 = FUNC_13(VAR_39, VAR_46);

 if (VAR_45 > 65535) {
  VAR_45 /= 8;
  VAR_43 |= VAR_24;
 }


 switch (VAR_40->c_cflag & VAR_31) {
 case 130:
  VAR_43 |= VAR_1;
  break;
 case 129:
  VAR_43 |= VAR_2;
  break;
 case 128:
  VAR_43 |= VAR_3;
  break;
 default:
  VAR_43 |= VAR_4;
  break;
 }


 if (VAR_40->c_cflag & VAR_32)
  VAR_43 |= VAR_7;


 if (VAR_40->c_cflag & VAR_36) {

  if (VAR_40->c_cflag & VAR_29) {
   if (VAR_40->c_cflag & VAR_38)
    VAR_43 |= VAR_12;
   else
    VAR_43 |= VAR_15;
  } else if (VAR_40->c_cflag & VAR_38)
   VAR_43 |= VAR_14;
  else
   VAR_43 |= VAR_11;
 } else
  VAR_43 |= VAR_13;


 if (VAR_40->c_cflag & VAR_30)
  VAR_43 |= VAR_26;
 else
  VAR_43 |= VAR_27;

 FUNC_9(&VAR_39->lock, VAR_42);

 VAR_39->read_status_mask = VAR_8;
 if (VAR_40->c_iflag & VAR_35)
  VAR_39->read_status_mask |= (VAR_5 | VAR_10);
 if (VAR_40->c_iflag & (VAR_28 | VAR_37))
  VAR_39->read_status_mask |= VAR_18;

 if (FUNC_8(VAR_39))

  FUNC_6(VAR_39, VAR_39->read_status_mask);




 VAR_39->ignore_status_mask = 0;
 if (VAR_40->c_iflag & VAR_34)
  VAR_39->ignore_status_mask |= (VAR_5 | VAR_10);
 if (VAR_40->c_iflag & VAR_33) {
  VAR_39->ignore_status_mask |= VAR_18;




  if (VAR_40->c_iflag & VAR_34)
   VAR_39->ignore_status_mask |= VAR_8;
 }



 FUNC_14(VAR_39, VAR_40->c_cflag, VAR_46);






 VAR_44 = FUNC_1(VAR_39);
 FUNC_5(VAR_39, -1);


 FUNC_4(VAR_39, VAR_21 | VAR_19);


 FUNC_7(VAR_39, VAR_43);


 FUNC_3(VAR_39, VAR_45);
 FUNC_4(VAR_39, VAR_17 | VAR_16);
 FUNC_4(VAR_39, VAR_22 | VAR_20);


 FUNC_6(VAR_39, VAR_44);


 if (FUNC_0(VAR_39, VAR_40->c_cflag))
  VAR_39->ops->enable_ms(VAR_39);

 FUNC_10(&VAR_39->lock, VAR_42);
}
