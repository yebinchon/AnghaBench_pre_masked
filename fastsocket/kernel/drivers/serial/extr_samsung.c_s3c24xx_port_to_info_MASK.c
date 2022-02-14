
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct s3c24xx_uart_info {int dummy; } ;
struct TYPE_2__ {struct s3c24xx_uart_info* info; } ;


 TYPE_1__* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static inline struct s3c24xx_uart_info *FUNC_1(struct uart_port *VAR_0)
{
 return FUNC_0(VAR_0)->info;
}
