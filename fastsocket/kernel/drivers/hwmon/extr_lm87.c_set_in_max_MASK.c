
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm87_data {int update_lock; int * in_max; int * in_scale; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (long,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct lm87_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_0, const char *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_8(VAR_0);
 struct lm87_data *VAR_4 = FUNC_3(VAR_3);
 long VAR_5 = FUNC_7(VAR_1, ((void*)0), 10);

 FUNC_5(&VAR_4->update_lock);
 VAR_4->in_max[VAR_2] = FUNC_0(VAR_5, VAR_4->in_scale[VAR_2]);
 FUNC_4(VAR_3, VAR_2<6 ? FUNC_2(VAR_2) :
    FUNC_1(VAR_2-6), VAR_4->in_max[VAR_2]);
 FUNC_6(&VAR_4->update_lock);
}
