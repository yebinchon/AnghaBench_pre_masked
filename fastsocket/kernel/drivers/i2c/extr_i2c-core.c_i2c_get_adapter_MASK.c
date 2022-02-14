
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

struct i2c_adapter* FUNC_4(int VAR_2)
{
 struct i2c_adapter *VAR_3;

 FUNC_1(&VAR_0);
 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_3 && !FUNC_3(VAR_3->owner))
  VAR_3 = ((void*)0);

 FUNC_2(&VAR_0);
 return VAR_3;
}
