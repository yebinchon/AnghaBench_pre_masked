
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 scalar_t__ VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_35, struct ktermios *VAR_36,
 struct ktermios *VAR_37)
{
 unsigned long VAR_38;
 unsigned int VAR_39, VAR_40;



 unsigned char VAR_41, VAR_42;

 VAR_39 = FUNC_2(VAR_35, VAR_36, VAR_37, 0, 230400);




 VAR_40 = ((VAR_32 / VAR_39) + 16) / 32;


 VAR_41 = VAR_14 | VAR_13;
 VAR_42 = 0;

 switch (VAR_36->c_cflag & VAR_2) {
 case 131: VAR_41 |= VAR_4; break;
 case 130: VAR_41 |= VAR_5; break;
 case 129: VAR_41 |= VAR_6; break;
 case 128:
 default: VAR_41 |= VAR_7; break;
 }

 if (VAR_36->c_cflag & VAR_33) {
  if (VAR_36->c_cflag & VAR_0) {
   if (VAR_36->c_cflag & VAR_34)
    VAR_41 |= VAR_9;
   else
    VAR_41 |= VAR_12;
  } else {
   if (VAR_36->c_cflag & VAR_34)
    VAR_41 |= VAR_11;
   else
    VAR_41 |= VAR_8;
  }
 } else {
  VAR_41 |= VAR_10;
 }

 if (VAR_36->c_cflag & VAR_3)
  VAR_42 |= VAR_17;
 else
  VAR_42 |= VAR_16;

 if (VAR_36->c_cflag & VAR_1) {
  VAR_41 |= VAR_15;
  VAR_42 |= VAR_18;
 }

 FUNC_0(&VAR_35->lock, VAR_38);
 FUNC_3(VAR_23, VAR_35->membase + VAR_21);
 FUNC_3(VAR_24, VAR_35->membase + VAR_21);
 FUNC_3(VAR_22, VAR_35->membase + VAR_21);
 FUNC_3(VAR_41, VAR_35->membase + VAR_31);
 FUNC_3(VAR_42, VAR_35->membase + VAR_31);
 FUNC_3((VAR_40 & 0xff00) >> 8, VAR_35->membase + VAR_19);
 FUNC_3((VAR_40 & 0xff), VAR_35->membase + VAR_20);



 FUNC_3(VAR_28 | VAR_29,
  VAR_35->membase + VAR_27);
 FUNC_3(VAR_25 | VAR_26,
  VAR_35->membase + VAR_21);
 FUNC_1(&VAR_35->lock, VAR_38);
}
