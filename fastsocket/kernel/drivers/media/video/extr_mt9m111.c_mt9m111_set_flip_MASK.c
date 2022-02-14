
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {scalar_t__ context; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 struct mt9m111* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_3, int VAR_4, int VAR_5)
{
 struct mt9m111 *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 if (VAR_6->context == VAR_0) {
  if (VAR_4)
   VAR_7 = FUNC_1(VAR_2, VAR_5);
  else
   VAR_7 = FUNC_0(VAR_2, VAR_5);
 } else {
  if (VAR_4)
   VAR_7 = FUNC_1(VAR_1, VAR_5);
  else
   VAR_7 = FUNC_0(VAR_1, VAR_5);
 }

 return VAR_7;
}
