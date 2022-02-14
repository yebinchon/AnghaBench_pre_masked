
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {int (* reset_port ) (struct uart_port*,struct s3c2410_uartcfg*) ;} ;
struct s3c2410_uartcfg {int dummy; } ;


 struct s3c24xx_uart_info* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,struct s3c2410_uartcfg*) ;

__attribute__((used)) static inline int FUNC_2(struct uart_port *VAR_0,
        struct s3c2410_uartcfg *VAR_1)
{
 struct s3c24xx_uart_info *VAR_2 = FUNC_0(VAR_0);

 return (VAR_2->reset_port)(VAR_0, VAR_1);
}
