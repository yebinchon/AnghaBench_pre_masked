
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int member_0; int member_2; unsigned char* member_3; int member_1; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int,int ,struct i2c_client*,char*,int,unsigned char) ;
 int FUNC_2 (struct i2c_client*,char*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 unsigned char VAR_5[1];
 unsigned char VAR_6[1];
 struct i2c_msg VAR_7[2] = {
  { VAR_3, 0, 1, VAR_5 },
  { VAR_3, VAR_0, 1, VAR_6 }
 };

 VAR_5[0] = VAR_4;

 if (2 != FUNC_0(VAR_2->adapter, VAR_7, 2)) {
  FUNC_2(VAR_2, "I/O error (read2)\n");
  return -1;
 }
 FUNC_1(1, VAR_1, VAR_2, "chip_read2: reg%d=0x%x\n", VAR_4, VAR_6[0]);
 return VAR_6[0];
}
