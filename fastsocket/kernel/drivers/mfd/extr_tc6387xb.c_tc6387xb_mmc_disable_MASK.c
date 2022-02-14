
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 struct clk* FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(VAR_0->dev.parent);
 struct clk *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);

 return 0;
}
