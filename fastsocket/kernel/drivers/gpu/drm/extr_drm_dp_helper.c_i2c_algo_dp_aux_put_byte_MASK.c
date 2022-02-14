
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_algo_dp_aux_data {int running; } ;
struct i2c_adapter {struct i2c_algo_dp_aux_data* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct i2c_adapter *VAR_2, u8 VAR_3)
{
 struct i2c_algo_dp_aux_data *VAR_4 = VAR_2->algo_data;
 int VAR_5;

 if (!VAR_4->running)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_3, ((void*)0));
 return VAR_5;
}
