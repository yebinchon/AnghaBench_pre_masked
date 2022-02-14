
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_clksrc {int divisor; char* name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static int FUNC_1(struct uart_port *VAR_2,
        struct s3c24xx_uart_clksrc *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2, VAR_0);

 VAR_3->divisor = 1;
 VAR_3->name = (VAR_4 & VAR_1) ? "uclk" : "pclk";

 return 0;
}
