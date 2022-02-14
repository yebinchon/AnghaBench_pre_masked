
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algorithm {int dummy; } ;
struct i2c_adapter {int * algo_data; struct i2c_algorithm* algo; int name; } ;
struct dibx000_i2c_master {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*,struct dibx000_i2c_master*) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_1,
       struct i2c_algorithm *VAR_2, const char *VAR_3,
       struct dibx000_i2c_master *VAR_4)
{
 FUNC_2(VAR_1->name, VAR_3, sizeof(VAR_1->name));
 VAR_1->algo = VAR_2;
 VAR_1->algo_data = ((void*)0);
 FUNC_1(VAR_1, VAR_4);
 if (FUNC_0(VAR_1) < 0)
  return -VAR_0;
 return 0;
}
