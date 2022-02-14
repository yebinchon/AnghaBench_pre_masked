
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int clk; int clk_div; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pwm_device*) ;
 struct pwm_device* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pwm_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->clk_div);
 FUNC_0(VAR_1->clk);
 FUNC_1(VAR_1);

 return 0;
}
