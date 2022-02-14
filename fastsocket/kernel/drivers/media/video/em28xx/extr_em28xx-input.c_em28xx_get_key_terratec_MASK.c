
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct IR_i2c {int c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(struct IR_i2c *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 unsigned char VAR_4;


 if (1 != FUNC_0(VAR_1->c, &VAR_4, 1)) {
  FUNC_1("read error\n");
  return -VAR_0;
 }





 FUNC_1("key %02x\n", VAR_4);

 if (VAR_4 == 0xff)
  return 0;

 if (VAR_4 == 0xfe)

  return 1;

 *VAR_2 = VAR_4;
 *VAR_3 = VAR_4;
 return 1;
}
