
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, int VAR_3,
   unsigned VAR_4, void *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
  if (VAR_1[VAR_6] != -VAR_0) {
   FUNC_1(VAR_1[VAR_6]);
   FUNC_0(VAR_1[VAR_6]);
   VAR_1[VAR_6] = -VAR_0;
  }
 }
 return 0;
}
