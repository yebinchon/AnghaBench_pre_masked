
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_bit_data {int dummy; } ;
struct i2c_adapter {int retries; int * algo; int name; struct i2c_algo_bit_data* algo_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_algo_bit_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_3)
{
 struct i2c_algo_bit_data *VAR_4 = VAR_3->algo_data;

 if (VAR_1) {
  int VAR_5 = FUNC_0(VAR_4, VAR_3->name);
  if (VAR_5 < 0)
   return -VAR_0;
 }


 VAR_3->algo = &VAR_2;
 VAR_3->retries = 3;

 return 0;
}
