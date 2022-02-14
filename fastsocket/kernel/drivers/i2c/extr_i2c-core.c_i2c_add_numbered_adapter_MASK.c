
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *,struct i2c_adapter*,int,int*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct i2c_adapter *VAR_8)
{
 int VAR_9;
 int VAR_10;

 if (VAR_8->nr & ~VAR_5)
  return -VAR_2;

retry:
 if (FUNC_2(&VAR_7, VAR_4) == 0)
  return -VAR_3;

 FUNC_4(&VAR_6);



 VAR_10 = FUNC_1(&VAR_7, VAR_8, VAR_8->nr, &VAR_9);
 if (VAR_10 == 0 && VAR_9 != VAR_8->nr) {
  VAR_10 = -VAR_1;
  FUNC_3(&VAR_7, VAR_9);
 }
 FUNC_5(&VAR_6);
 if (VAR_10 == -VAR_0)
  goto retry;

 if (VAR_10 == 0)
  VAR_10 = FUNC_0(VAR_8);
 return VAR_10;
}
