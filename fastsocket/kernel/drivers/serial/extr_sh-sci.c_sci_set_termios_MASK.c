
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; scalar_t__ type; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct uart_port*) ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_2 (struct uart_port*) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (struct uart_port*,int ,int) ;
 int FUNC_7 (struct uart_port*,int ) ;
 unsigned int FUNC_8 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_9 (struct uart_port*,int,unsigned int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct uart_port *VAR_16, struct ktermios *VAR_17,
       struct ktermios *VAR_18)
{
 unsigned int VAR_19, VAR_20, VAR_21;
 int VAR_22 = -1;

 VAR_20 = FUNC_8(VAR_16, VAR_17, VAR_18, 0, VAR_16->uartclk/16);
 if (FUNC_3(VAR_20))
  VAR_22 = FUNC_0(VAR_20, VAR_16->uartclk);

 do {
  VAR_19 = FUNC_4(VAR_16, VAR_15);
 } while (!(VAR_19 & FUNC_2(VAR_16)));

 FUNC_6(VAR_16, VAR_13, 0x00);

 if (VAR_16->type != VAR_7)
  FUNC_6(VAR_16, VAR_9, VAR_11 | VAR_12);

 VAR_21 = FUNC_4(VAR_16, VAR_14) & 3;
 if ((VAR_17->c_cflag & VAR_3) == VAR_2)
  VAR_21 |= 0x40;
 if (VAR_17->c_cflag & VAR_5)
  VAR_21 |= 0x20;
 if (VAR_17->c_cflag & VAR_6)
  VAR_21 |= 0x30;
 if (VAR_17->c_cflag & VAR_4)
  VAR_21 |= 0x08;

 FUNC_9(VAR_16, VAR_17->c_cflag, VAR_20);

 FUNC_6(VAR_16, VAR_14, VAR_21);

 if (VAR_22 > 0) {
  if (VAR_22 >= 256) {
   FUNC_6(VAR_16, VAR_14, (FUNC_4(VAR_16, VAR_14) & ~3) | 1);
   VAR_22 >>= 2;
  } else
   FUNC_6(VAR_16, VAR_14, FUNC_4(VAR_16, VAR_14) & ~3);

  FUNC_6(VAR_16, VAR_8, VAR_22);
  FUNC_10((1000000+(VAR_20-1)) / VAR_20);
 }

 FUNC_5(VAR_16, VAR_17->c_cflag);
 FUNC_6(VAR_16, VAR_9, (VAR_17->c_cflag & VAR_1) ? VAR_10 : 0);

 FUNC_6(VAR_16, VAR_13, FUNC_1(VAR_16));

 if ((VAR_17->c_cflag & VAR_0) != 0)
  FUNC_7(VAR_16, 0);
}
