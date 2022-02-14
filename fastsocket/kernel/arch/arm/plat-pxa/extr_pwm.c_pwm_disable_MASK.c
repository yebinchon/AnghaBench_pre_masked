
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {scalar_t__ clk_enabled; int clk; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct pwm_device *VAR_0)
{
 if (VAR_0->clk_enabled) {
  FUNC_0(VAR_0->clk);
  VAR_0->clk_enabled = 0;
 }
}
