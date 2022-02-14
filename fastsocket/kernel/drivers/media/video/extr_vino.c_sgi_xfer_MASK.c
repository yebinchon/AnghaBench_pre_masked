
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_algo_sgi_data {int dummy; } ;
struct i2c_adapter {struct i2c_algo_sgi_data* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_algo_sgi_data*,int ,int) ;
 int FUNC_1 (struct i2c_algo_sgi_data*,int ,int ) ;
 int FUNC_2 (struct i2c_algo_sgi_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2,
      int VAR_3)
{
 struct i2c_algo_sgi_data *VAR_4 = VAR_1->algo_data;
 struct i2c_msg *VAR_5;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; !VAR_7 && VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = &VAR_2[VAR_6];
  VAR_7 = FUNC_0(VAR_4, VAR_5->addr, VAR_5->flags & VAR_0);
  if (VAR_7 || !VAR_5->len)
   continue;
  if (VAR_5->flags & VAR_0)
   VAR_7 = FUNC_1(VAR_4, VAR_5->buf, VAR_5->len);
  else
   VAR_7 = FUNC_2(VAR_4, VAR_5->buf, VAR_5->len);
 }

 return (VAR_7 < 0) ? VAR_7 : VAR_6;
}
