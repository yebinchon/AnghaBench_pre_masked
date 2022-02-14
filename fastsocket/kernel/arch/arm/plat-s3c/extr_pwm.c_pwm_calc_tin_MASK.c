
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int clk_div; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct pwm_device*,char*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_3(struct pwm_device *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(FUNC_0(VAR_0->clk_div));
 FUNC_2(VAR_0, "tin parent at %lu\n", VAR_2);

 for (VAR_3 = 2; VAR_3 <= 16; VAR_3 *= 2) {
  if ((VAR_2 / (VAR_3 << 16)) < VAR_1)
   return VAR_2 / VAR_3;
 }

 return VAR_2 / 16;
}
