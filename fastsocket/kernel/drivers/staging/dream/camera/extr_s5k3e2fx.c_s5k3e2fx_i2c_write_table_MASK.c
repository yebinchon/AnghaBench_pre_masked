
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k3e2fx_i2c_reg_conf {int dummy; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int32_t FUNC_0(
 struct s5k3e2fx_i2c_reg_conf *VAR_1, int VAR_2)
{
 int VAR_3;
 int32_t VAR_4 = -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_4 < 0)
   break;
  VAR_1++;
 }

 return VAR_4;
}
