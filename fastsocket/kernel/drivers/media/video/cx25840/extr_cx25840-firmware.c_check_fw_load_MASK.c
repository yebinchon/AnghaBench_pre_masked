
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,char*,int ) ;
 int FUNC_3 (struct i2c_client*,char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1, int VAR_2)
{

 int VAR_3 = FUNC_0(VAR_1, 0x801) << 8;
 VAR_3 |= FUNC_0(VAR_1, 0x800);

 if (VAR_2 != VAR_3) {
  FUNC_2(VAR_1, "firmware %s load failed\n",
    FUNC_1(VAR_1));
  return -VAR_0;
 }

 FUNC_3(VAR_1, "loaded %s firmware (%d bytes)\n",
   FUNC_1(VAR_1), VAR_2);
 return 0;
}
