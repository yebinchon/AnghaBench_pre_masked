
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_pca_data {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_algo_pca_data*) ;
 int FUNC_2 (struct i2c_algo_pca_data*,int) ;
 int FUNC_3 (struct i2c_algo_pca_data*) ;

__attribute__((used)) static int FUNC_4(struct i2c_algo_pca_data *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3);
 FUNC_0("=== START\n");
 VAR_4 |= VAR_1;
 VAR_4 &= ~(VAR_2|VAR_0);
 FUNC_2(VAR_3, VAR_4);
 return FUNC_3(VAR_3);
}
