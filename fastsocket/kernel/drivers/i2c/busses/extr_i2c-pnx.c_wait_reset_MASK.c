
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_pnx_algo_data {int dummy; } ;


 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(long VAR_1, struct i2c_pnx_algo_data *VAR_2)
{
 while (VAR_1 > 0 &&
   (FUNC_1(FUNC_0(VAR_2)) & VAR_0)) {
  FUNC_2(1);
  VAR_1--;
 }
 return (VAR_1 <= 0);
}
