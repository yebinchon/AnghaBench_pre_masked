
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_uart_info {int dummy; } ;
struct platform_driver {int resume; int suspend; } ;


 int FUNC_0 (char*,struct platform_driver*,struct s3c24xx_uart_info*) ;
 int FUNC_1 (struct platform_driver*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct platform_driver *VAR_2,
   struct s3c24xx_uart_info *VAR_3)
{
 FUNC_0("s3c24xx_serial_init(%p,%p)\n", VAR_2, VAR_3);






 return FUNC_1(VAR_2);
}
