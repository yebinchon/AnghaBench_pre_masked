
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct adc_device {int clk; int irq; int regs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct adc_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adc_device*) ;
 struct adc_device* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct adc_device *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(VAR_1->regs);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_0(VAR_1->clk);
 FUNC_1(VAR_1->clk);
 FUNC_4(VAR_1);

 return 0;
}
