
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm93_data {int valid; int update_lock; scalar_t__ last_updated; int (* update ) (struct lm93_data*,struct i2c_client*) ;} ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct lm93_data* FUNC_0 (struct i2c_client*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lm93_data*,struct i2c_client*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static struct lm93_data *FUNC_6(struct device *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_2);
 struct lm93_data *VAR_4 = FUNC_0(VAR_3);
 const unsigned long VAR_5 = VAR_0 + (VAR_0 / 2);

 FUNC_1(&VAR_4->update_lock);

 if (FUNC_4(VAR_1, VAR_4->last_updated + VAR_5) ||
  !VAR_4->valid) {

  VAR_4->update(VAR_4, VAR_3);
  VAR_4->last_updated = VAR_1;
  VAR_4->valid = 1;
 }

 FUNC_2(&VAR_4->update_lock);
 return VAR_4;
}
