
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct s3c24xx_uart_port {TYPE_1__* clksrc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 struct s3c24xx_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct uart_port *VAR_4 = FUNC_0(VAR_1);
 struct s3c24xx_uart_port *VAR_5 = FUNC_2(VAR_4);

 return FUNC_1(VAR_3, VAR_0, "* %s\n", VAR_5->clksrc->name);
}
