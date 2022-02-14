
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; } ;
struct s3c24xx_uart_info {int type; } ;


 int VAR_0 ;
 struct s3c24xx_uart_info* FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1, int VAR_2)
{
 struct s3c24xx_uart_info *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 & VAR_0 &&
     FUNC_1(VAR_1) == 0)
  VAR_1->type = VAR_3->type;
}
