
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {scalar_t__ clk_div; int clk; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct pwm_device *VAR_0)
{
 return FUNC_0(VAR_0->clk) == VAR_0->clk_div;
}
