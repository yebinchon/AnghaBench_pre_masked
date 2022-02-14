
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm87_data {int update_lock; int * temp_low; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (long) ;
 struct lm87_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1, const char *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_1);
 struct lm87_data *VAR_5 = FUNC_1(VAR_4);
 long VAR_6 = FUNC_5(VAR_2, ((void*)0), 10);

 FUNC_3(&VAR_5->update_lock);
 VAR_5->temp_low[VAR_3] = FUNC_0(VAR_6);
 FUNC_2(VAR_4, VAR_0[VAR_3], VAR_5->temp_low[VAR_3]);
 FUNC_4(&VAR_5->update_lock);
}
