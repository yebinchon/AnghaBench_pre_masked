
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasemi_smbus {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct pasemi_smbus* algo_data; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct pasemi_smbus*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_0,
      struct i2c_msg *VAR_1, int VAR_2)
{
 struct pasemi_smbus *VAR_3 = VAR_0->algo_data;
 int VAR_4, VAR_5;

 FUNC_1(VAR_3);

 VAR_4 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2 && !VAR_4; VAR_5++)
  VAR_4 = FUNC_0(VAR_0, &VAR_1[VAR_5], (VAR_5 == (VAR_2 - 1)));

 return VAR_4 ? VAR_4 : VAR_2;
}
