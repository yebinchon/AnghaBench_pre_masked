
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adt7470_data {int auto_update_stop; int auto_update_interval; int lock; } ;


 int FUNC_0 (struct i2c_client*,struct adt7470_data*) ;
 int FUNC_1 (int *) ;
 struct adt7470_data* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0;
 struct adt7470_data *VAR_2 = FUNC_2(VAR_1);

 while (!FUNC_3()) {
  FUNC_5(&VAR_2->lock);
  FUNC_0(VAR_1, VAR_2);
  FUNC_6(&VAR_2->lock);
  if (FUNC_3())
   break;
  FUNC_4(VAR_2->auto_update_interval);
 }

 FUNC_1(&VAR_2->auto_update_stop);
 return 0;
}
