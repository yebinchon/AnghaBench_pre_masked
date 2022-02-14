
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_8250_port *VAR_4)
{
 unsigned char VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 VAR_6 = FUNC_0(VAR_4, VAR_1);

 FUNC_1(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4, VAR_1, 0);

 VAR_8 = FUNC_0(VAR_4, VAR_0) | FUNC_0(VAR_4, VAR_1) << 8;

 FUNC_1(VAR_4, VAR_0, VAR_5);
 FUNC_1(VAR_4, VAR_1, VAR_6);
 FUNC_1(VAR_4, VAR_2, VAR_7);

 return VAR_8;
}
