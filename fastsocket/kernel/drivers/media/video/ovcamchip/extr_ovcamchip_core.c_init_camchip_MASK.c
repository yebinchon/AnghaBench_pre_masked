
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int,unsigned char*) ;
 int FUNC_3 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned char VAR_7, VAR_8;


 FUNC_3(VAR_4, 0x12, 0x80);


 FUNC_1(150);

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3 && !VAR_6; VAR_5++) {
  if (FUNC_2(VAR_4, VAR_1, &VAR_7) >= 0) {
   if (FUNC_2(VAR_4, VAR_2, &VAR_8) >= 0) {
    if (VAR_7 == 0x7F && VAR_8 == 0xA2) {
     VAR_6 = 1;
     continue;
    }
   }
  }


  FUNC_3(VAR_4, 0x12, 0x80);


  FUNC_1(150);


  FUNC_2(VAR_4, 0x00, &VAR_8);
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(1, "I2C synced in %d attempt(s)", VAR_5);

 return 0;
}
