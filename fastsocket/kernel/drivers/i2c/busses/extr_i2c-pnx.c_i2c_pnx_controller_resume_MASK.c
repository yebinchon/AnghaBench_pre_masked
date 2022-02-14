
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct i2c_pnx_data {int (* resume ) (struct platform_device*) ;} ;


 struct i2c_pnx_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct i2c_pnx_data *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->resume(VAR_0);
}
