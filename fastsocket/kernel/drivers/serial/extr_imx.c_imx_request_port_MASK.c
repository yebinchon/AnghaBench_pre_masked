
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (struct platform_device*,int ,int ) ;
 void* FUNC_1 (scalar_t__,scalar_t__,char*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct uart_port *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_2(VAR_3->dev);
 struct resource *VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_2, 0);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_5->start, VAR_5->end - VAR_5->start + 1,
   "imx-uart");

 return VAR_6 ? 0 : -VAR_0;
}
