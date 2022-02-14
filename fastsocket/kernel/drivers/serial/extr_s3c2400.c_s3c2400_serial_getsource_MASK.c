
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_clksrc {int divisor; char* name; } ;



__attribute__((used)) static int FUNC_0(struct uart_port *VAR_0,
        struct s3c24xx_uart_clksrc *VAR_1)
{
 VAR_1->divisor = 1;
 VAR_1->name = "pclk";

 return 0;
}
