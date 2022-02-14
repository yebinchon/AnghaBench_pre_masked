
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef enum mt9m111_context { ____Placeholder_mt9m111_context } mt9m111_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_10,
          enum mt9m111_context VAR_11)
{
 int VAR_12 = VAR_8 | VAR_3
  | VAR_7 | VAR_2
  | VAR_4 | VAR_6
  | VAR_9
  | VAR_5;
 int VAR_13 = VAR_8;

 if (VAR_11 == VAR_1)
  return FUNC_0(VAR_0, VAR_12);
 else
  return FUNC_0(VAR_0, VAR_13);
}
