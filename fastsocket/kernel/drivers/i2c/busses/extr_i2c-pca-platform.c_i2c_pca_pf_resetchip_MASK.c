
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_pca_pf_data {int gpio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct i2c_pca_pf_data *VAR_1 = VAR_0;

 FUNC_0(VAR_1->gpio, 0);
 FUNC_1(100);
 FUNC_0(VAR_1->gpio, 1);
}
