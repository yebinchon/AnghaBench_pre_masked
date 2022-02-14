
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct i2c_client *VAR_2, int VAR_3, unsigned VAR_4, void *VAR_5)
{
 FUNC_1(VAR_3 + 1);
 FUNC_1(VAR_3 + 2);
 FUNC_1(VAR_3 + 3);

 if (VAR_1 > 0) {
  FUNC_0(&VAR_2->dev, &VAR_0);
  FUNC_1(VAR_1);
 }
 return 0;
}
