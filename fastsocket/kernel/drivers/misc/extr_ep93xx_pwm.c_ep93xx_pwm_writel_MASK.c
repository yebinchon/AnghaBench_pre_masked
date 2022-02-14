
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_pwm {scalar_t__ mmio_base; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct ep93xx_pwm *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 FUNC_0(VAR_1, VAR_0->mmio_base + VAR_2);
}
