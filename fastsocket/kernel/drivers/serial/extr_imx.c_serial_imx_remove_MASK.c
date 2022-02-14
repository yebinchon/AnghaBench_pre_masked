
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct imxuart_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct imxuart_platform_data {int (* exit ) (struct platform_device*) ;} ;
struct TYPE_4__ {int membase; } ;
struct imx_port {TYPE_2__ port; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct imx_port*) ;
 struct imx_port* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct imxuart_platform_data *VAR_2;
 struct imx_port *VAR_3 = FUNC_4(VAR_1);

 VAR_2 = VAR_1->dev.platform_data;

 FUNC_5(VAR_1, ((void*)0));

 if (VAR_3) {
  FUNC_7(&VAR_0, &VAR_3->port);
  FUNC_1(VAR_3->clk);
 }

 FUNC_0(VAR_3->clk);

 if (VAR_2->exit)
  VAR_2->exit(VAR_1);

 FUNC_2(VAR_3->port.membase);
 FUNC_3(VAR_3);

 return 0;
}
