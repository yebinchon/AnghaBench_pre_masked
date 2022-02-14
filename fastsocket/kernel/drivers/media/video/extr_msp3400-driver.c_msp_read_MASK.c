
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int member_2; int* member_3; int member_1; int member_0; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,int,int,int) ;
 int FUNC_5 (struct i2c_client*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u8 VAR_7[3];
 u8 VAR_8[2];
 struct i2c_msg VAR_9[2] = {
  { VAR_2->addr, 0, 3, VAR_7 },
  { VAR_2->addr, &VAR_0, 2, VAR_8 }
 };

 VAR_7[0] = VAR_3 + 1;
 VAR_7[1] = VAR_4 >> 8;
 VAR_7[2] = VAR_4 & 0xff;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if (FUNC_0(VAR_2->adapter, VAR_9, 2) == 2)
   break;
  FUNC_5(VAR_2, "I/O error #%d (read 0x%02x/0x%02x)\n", VAR_5,
         VAR_3, VAR_4);
  FUNC_3(FUNC_1(10));
 }
 if (VAR_5 == 3) {
  FUNC_5(VAR_2, "resetting chip, sound will go off.\n");
  FUNC_2(VAR_2);
  return -1;
 }
 VAR_6 = VAR_8[0] << 8 | VAR_8[1];
 FUNC_4(3, VAR_1, VAR_2, "msp_read(0x%x, 0x%x): 0x%x\n",
   VAR_3, VAR_4, VAR_6);
 return VAR_6;
}
