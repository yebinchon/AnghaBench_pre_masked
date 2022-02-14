
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 unsigned short FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*,unsigned short) ;
 unsigned char FUNC_3 (struct uart_8250_port*,int ) ;
 int FUNC_4 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_5(struct uart_8250_port *VAR_12)
{
 unsigned char VAR_13, VAR_14, VAR_15;
 unsigned short VAR_16;
 int VAR_17;

 VAR_15 = FUNC_3(VAR_12, VAR_4);
 FUNC_4(VAR_12, VAR_4, 0);
 VAR_13 = FUNC_3(VAR_12, VAR_0);
 VAR_14 = FUNC_3(VAR_12, VAR_8);
 FUNC_4(VAR_12, VAR_0, VAR_3 |
      VAR_1 | VAR_2);
 FUNC_4(VAR_12, VAR_8, VAR_9);
 FUNC_4(VAR_12, VAR_4, VAR_5);
 VAR_16 = FUNC_1(VAR_12);
 FUNC_2(VAR_12, 0x0001);
 FUNC_4(VAR_12, VAR_4, 0x03);
 for (VAR_17 = 0; VAR_17 < 256; VAR_17++)
  FUNC_4(VAR_12, VAR_11, VAR_17);
 FUNC_0(20);
 for (VAR_17 = 0; (FUNC_3(VAR_12, VAR_6) & VAR_7) &&
      (VAR_17 < 256); VAR_17++)
  FUNC_3(VAR_12, VAR_10);
 FUNC_4(VAR_12, VAR_0, VAR_13);
 FUNC_4(VAR_12, VAR_8, VAR_14);
 FUNC_4(VAR_12, VAR_4, VAR_5);
 FUNC_2(VAR_12, VAR_16);
 FUNC_4(VAR_12, VAR_4, VAR_15);

 return VAR_17;
}
