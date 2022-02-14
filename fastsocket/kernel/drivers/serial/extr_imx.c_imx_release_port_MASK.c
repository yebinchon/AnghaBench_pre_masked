
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct platform_device*,int ,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_1->dev);
 struct resource *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0, 0);
 FUNC_1(VAR_3->start, VAR_3->end - VAR_3->start + 1);
}
