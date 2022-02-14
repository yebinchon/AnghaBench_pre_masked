
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int clk; scalar_t__ mmio_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long long FUNC_3 (int ) ;
 int FUNC_4 (unsigned long long,int) ;

int FUNC_5(struct pwm_device *VAR_5, int VAR_6, int VAR_7)
{
 unsigned long long VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_5 == ((void*)0) || VAR_7 == 0 || VAR_6 > VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5->clk);
 VAR_8 = VAR_8 * VAR_7;
 FUNC_4(VAR_8, 1000000000);
 VAR_9 = VAR_8;

 if (VAR_9 < 1)
  VAR_9 = 1;
 VAR_10 = (VAR_9 - 1) / 1024;
 VAR_11 = VAR_9 / (VAR_10 + 1) - 1;

 if (VAR_10 > 63)
  return -VAR_0;

 if (VAR_6 == VAR_7)
  VAR_12 = VAR_3;
 else
  VAR_12 = (VAR_11 + 1) * VAR_6 / VAR_7;




 FUNC_2(VAR_5->clk);
 FUNC_0(VAR_10, VAR_5->mmio_base + VAR_1);
 FUNC_0(VAR_12, VAR_5->mmio_base + VAR_2);
 FUNC_0(VAR_11, VAR_5->mmio_base + VAR_4);
 FUNC_1(VAR_5->clk);

 return 0;
}
