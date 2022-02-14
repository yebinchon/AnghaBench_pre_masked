
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int ,int ) ;
 int FUNC_6 (int,void*) ;
 int FUNC_7 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;


 if (VAR_5->type == VAR_1) {
  if (FUNC_2(VAR_5)) {

   FUNC_4(VAR_5, VAR_2);
   FUNC_5(VAR_5, VAR_2, FUNC_1(VAR_5));
  }
 } else {
  FUNC_3(VAR_5);
  FUNC_6(VAR_3, VAR_4);
 }

 FUNC_5(VAR_5, VAR_2, FUNC_0(VAR_5));


 FUNC_7(VAR_3, VAR_4);

 return VAR_0;
}
