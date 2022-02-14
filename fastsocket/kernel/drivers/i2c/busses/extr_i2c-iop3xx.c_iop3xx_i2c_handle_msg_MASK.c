
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_algo_iop3xx_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_iop3xx_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,int ,int ) ;
 int FUNC_1 (struct i2c_algo_iop3xx_data*,struct i2c_msg*) ;
 int FUNC_2 (struct i2c_adapter*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct i2c_adapter *VAR_1, struct i2c_msg* VAR_2)
{
 struct i2c_algo_iop3xx_data *VAR_3 = VAR_1->algo_data;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 < 0) {
  return VAR_4;
 }

 if ((VAR_2->flags&VAR_0)) {
  return FUNC_0(VAR_1, VAR_2->buf, VAR_2->len);
 } else {
  return FUNC_2(VAR_1, VAR_2->buf, VAR_2->len);
 }
}
