
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct i2c_client*) ;
 scalar_t__ FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2)
{






 FUNC_0(3, "Testing for 0V7xx0");
 if (FUNC_2(VAR_2) < 0)
  return -VAR_1;

 if (VAR_2->addr & 1) {
  if (FUNC_4(VAR_2) < 0) {
   FUNC_1("Failed to init OV7xx0");
   return -VAR_0;
  }
  return 0;
 }

 FUNC_0(3, "Testing for 0V6xx0");
 if (FUNC_3(VAR_2) < 0) {
  FUNC_1("Failed to init OV6xx0");
  return -VAR_0;
 }
 return 0;
}
