
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int membase; int dev; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 struct platform_device* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_4(VAR_3->dev);
 struct resource *VAR_5;
 resource_size_t VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_2, 0);
 if (FUNC_5(!VAR_5))
  return -VAR_1;
 VAR_6 = VAR_5->end - VAR_5->start + 1;

 if (FUNC_5(!FUNC_3(VAR_3->mapbase, VAR_6, "msm_serial")))
  return -VAR_0;

 VAR_3->membase = FUNC_0(VAR_3->mapbase, VAR_6);
 if (!VAR_3->membase) {
  FUNC_2(VAR_3->mapbase, VAR_6);
  return -VAR_0;
 }

 return 0;
}
