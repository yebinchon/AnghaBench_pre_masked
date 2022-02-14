
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int * membase; int mapbase; int dev; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct platform_device* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_3(VAR_1->dev);
 struct resource *VAR_3;
 resource_size_t VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_0, 0);
 if (FUNC_4(!VAR_3))
  return;
 VAR_4 = VAR_3->end - VAR_3->start + 1;

 FUNC_2(VAR_1->mapbase, VAR_4);
 FUNC_0(VAR_1->membase);
 VAR_1->membase = ((void*)0);
}
