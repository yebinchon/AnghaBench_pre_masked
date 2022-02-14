
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *,struct i2c_adapter*,int ,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct i2c_adapter *VAR_6)
{
 int VAR_7, VAR_8 = 0;

retry:
 if (FUNC_2(&VAR_5, VAR_2) == 0)
  return -VAR_1;

 FUNC_3(&VAR_4);

 VAR_8 = FUNC_1(&VAR_5, VAR_6,
    VAR_3, &VAR_7);
 FUNC_4(&VAR_4);

 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_0)
   goto retry;
  return VAR_8;
 }

 VAR_6->nr = VAR_7;
 return FUNC_0(VAR_6);
}
