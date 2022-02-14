
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*,struct uart_port*) ;
 int VAR_6 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct uart_port *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7->irq, VAR_6,
     VAR_1 | VAR_0, "uartlite", VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_1(VAR_4 | VAR_5,
        VAR_7->membase + VAR_2);
 FUNC_1(VAR_3, VAR_7->membase + VAR_2);

 return 0;
}
