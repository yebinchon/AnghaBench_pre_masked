
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int8_t ;
typedef int u_int32_t ;
struct sh_mobile_i2c_data {int iccl; int icch; int clk; int dev; } ;


 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;
 int FUNC_2 (struct sh_mobile_i2c_data*) ;
 int VAR_0 ;
 int FUNC_3 (struct sh_mobile_i2c_data*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sh_mobile_i2c_data *VAR_2)
{
 unsigned long VAR_3;
 u_int32_t VAR_4;
 u_int32_t VAR_5;
 u_int32_t VAR_6;


 FUNC_8(VAR_2->dev);
 FUNC_4(VAR_2->clk);


 VAR_3 = FUNC_5(VAR_2->clk);






 VAR_4 = VAR_3 * 5;
 VAR_5 = VAR_1 * 9;
 VAR_6 = VAR_4 * 10 / VAR_5;
 if (VAR_6 % 10 >= 5)
  VAR_2->iccl = (u_int8_t)((VAR_4/VAR_5) + 1);
 else
  VAR_2->iccl = (u_int8_t)(VAR_4/VAR_5);



 VAR_4 = VAR_3 * 4;
 VAR_6 = VAR_4 * 10 / VAR_5;
 if (VAR_6 % 10 >= 5)
  VAR_2->icch = (u_int8_t)((VAR_4/VAR_5) + 1);
 else
  VAR_2->icch = (u_int8_t)(VAR_4/VAR_5);


 FUNC_7(FUNC_6(FUNC_2(VAR_2)) | VAR_0, FUNC_2(VAR_2));


 FUNC_7(0, FUNC_3(VAR_2));


 FUNC_7(VAR_2->iccl, FUNC_1(VAR_2));
 FUNC_7(VAR_2->icch, FUNC_0(VAR_2));
}
