
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pca9532_data {int update_lock; int * psc; int * pwm; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pca9532_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0, int VAR_1)
{
 struct pca9532_data *VAR_2 = FUNC_2(VAR_0);
 FUNC_4(&VAR_2->update_lock);
 FUNC_3(VAR_0, FUNC_1(VAR_1),
  VAR_2->pwm[VAR_1]);
 FUNC_3(VAR_0, FUNC_0(VAR_1),
  VAR_2->psc[VAR_1]);
 FUNC_5(&VAR_2->update_lock);
 return 0;
}
