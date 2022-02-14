
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int (* em28xx_write_regs ) (struct em28xx*,int,unsigned char*,int) ;int (* em28xx_read_reg ) (struct em28xx*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct em28xx*,int,unsigned char*,int) ;
 int FUNC_4 (struct em28xx*,int) ;

__attribute__((used)) static int FUNC_5(struct em28xx *VAR_2, unsigned char VAR_3,
    char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned char VAR_8[6];
 FUNC_0(VAR_5 < 1 || VAR_5 > 4);
 VAR_8[5] = 0x80 + VAR_5 - 1;
 VAR_8[4] = VAR_3;
 VAR_8[3] = VAR_4[0];
 if (VAR_5 > 1)
  VAR_8[2] = VAR_4[1];
 if (VAR_5 > 2)
  VAR_8[1] = VAR_4[2];
 if (VAR_5 > 3)
  VAR_8[0] = VAR_4[3];

 VAR_6 = VAR_2->em28xx_write_regs(VAR_2, 4 - VAR_5, &VAR_8[4 - VAR_5], 2 + VAR_5);
 if (VAR_6 != 2 + VAR_5) {
  FUNC_1("writing to i2c device failed (error=%i)\n", VAR_6);
  return -VAR_0;
 }
 for (VAR_7 = VAR_1; VAR_7 > 0;
      VAR_7 -= 5) {
  VAR_6 = VAR_2->em28xx_read_reg(VAR_2, 0x05);
  if (VAR_6 == 0x80 + VAR_5 - 1)
   return VAR_5;
  FUNC_2(5);
 }
 FUNC_1("i2c write timed out\n");
 return -VAR_0;
}
