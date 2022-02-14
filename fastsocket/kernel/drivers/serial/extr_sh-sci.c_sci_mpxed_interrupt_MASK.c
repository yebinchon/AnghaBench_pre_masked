
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_0 (struct uart_port*) ;
 unsigned short FUNC_1 (struct uart_port*) ;
 unsigned short FUNC_2 (struct uart_port*) ;
 unsigned short FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int,void*) ;
 int FUNC_5 (int,void*) ;
 unsigned short FUNC_6 (struct uart_port*,int ) ;
 int FUNC_7 (int,void*) ;
 int FUNC_8 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 unsigned short VAR_8, VAR_9, VAR_10;
 struct uart_port *VAR_11 = VAR_7;
 irqreturn_t VAR_12 = VAR_0;

 VAR_8 = FUNC_6(VAR_11, VAR_5);
 VAR_9 = FUNC_6(VAR_11, VAR_4);
 VAR_10 = VAR_9 & (VAR_1 | VAR_2);


 if ((VAR_8 & FUNC_3(VAR_11)) && (VAR_9 & VAR_3))
  VAR_12 = FUNC_8(VAR_6, VAR_7);

 if ((VAR_8 & FUNC_2(VAR_11)) && (VAR_9 & VAR_2))
  VAR_12 = FUNC_7(VAR_6, VAR_7);

 if ((VAR_8 & FUNC_1(VAR_11)) && VAR_10)
  VAR_12 = FUNC_5(VAR_6, VAR_7);

 if ((VAR_8 & FUNC_0(VAR_11)) && VAR_10)
  VAR_12 = FUNC_4(VAR_6, VAR_7);

 return VAR_12;
}
