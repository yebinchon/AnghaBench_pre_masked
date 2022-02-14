
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_uart_port {struct s3c24xx_uart_info* info; } ;
struct s3c24xx_uart_info {unsigned long rx_fifofull; int fifosize; unsigned long rx_fifomask; unsigned long rx_fifoshift; } ;



__attribute__((used)) static int FUNC_0(struct s3c24xx_uart_port *VAR_0,
         unsigned long VAR_1)
{
 struct s3c24xx_uart_info *VAR_2 = VAR_0->info;

 if (VAR_1 & VAR_2->rx_fifofull)
  return VAR_2->fifosize;

 return (VAR_1 & VAR_2->rx_fifomask) >> VAR_2->rx_fifoshift;
}
