
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ixp2000_i2c_data {int adapter; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ixp2000_i2c_data*) ;
 struct ixp2000_i2c_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ixp2000_i2c_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, ((void*)0));

 FUNC_0(&VAR_1->adapter);

 FUNC_1(VAR_1);

 return 0;
}
