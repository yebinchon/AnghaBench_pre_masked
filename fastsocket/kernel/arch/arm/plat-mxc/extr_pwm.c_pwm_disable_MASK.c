
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {scalar_t__ clk_enabled; int clk; scalar_t__ mmio_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct pwm_device *VAR_1)
{
 FUNC_1(0, VAR_1->mmio_base + VAR_0);

 if (VAR_1->clk_enabled) {
  FUNC_0(VAR_1->clk);
  VAR_1->clk_enabled = 0;
 }
}
