
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct cx24123_state {int i2c; } ;


 int FUNC_0 (struct cx24123_state*,int,int) ;
 struct cx24123_state* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
 struct i2c_msg VAR_1[], int VAR_2)
{
 struct cx24123_state *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, 1, 1);
 return FUNC_2(VAR_3->i2c, VAR_1, VAR_2);
}
