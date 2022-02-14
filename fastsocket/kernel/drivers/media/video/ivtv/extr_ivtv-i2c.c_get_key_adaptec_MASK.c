
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct IR_i2c {int c; } ;
typedef int keybuf ;


 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct IR_i2c *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 unsigned char VAR_3[4];

 VAR_3[0] = 0x00;
 FUNC_1(VAR_0->c, VAR_3, 1);

 if (FUNC_0(VAR_0->c, VAR_3, sizeof(VAR_3)) != sizeof(VAR_3)) {
  return 0;
 }


 if (VAR_3[2] == 0xff)
  return 0;


 VAR_3[2] &= 0x7f;
 VAR_3[3] |= 0x80;

 *VAR_1 = VAR_3[3] | VAR_3[2] << 8 | VAR_3[1] << 16 |VAR_3[0] << 24;
 *VAR_2 = *VAR_1;

 return 1;
}
