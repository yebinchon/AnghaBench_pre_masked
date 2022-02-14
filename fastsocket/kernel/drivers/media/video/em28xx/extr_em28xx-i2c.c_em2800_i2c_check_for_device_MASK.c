
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int (* em28xx_write_regs ) (struct em28xx*,int,char*,int) ;unsigned int (* em28xx_read_reg ) (struct em28xx*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct em28xx*,int,char*,int) ;
 int FUNC_3 (struct em28xx*,int,char*,int) ;
 unsigned int FUNC_4 (struct em28xx*,int) ;

__attribute__((used)) static int FUNC_5(struct em28xx *VAR_2, unsigned char VAR_3)
{
 char VAR_4;
 int VAR_5;
 int VAR_6;
 VAR_4 = VAR_3;
 VAR_5 = VAR_2->em28xx_write_regs(VAR_2, 0x04, &VAR_4, 1);
 if (VAR_5 < 0) {
  FUNC_0("setting i2c device address failed (error=%i)\n",
       VAR_5);
  return VAR_5;
 }
 VAR_4 = 0x84;
 VAR_5 = VAR_2->em28xx_write_regs(VAR_2, 0x05, &VAR_4, 1);
 if (VAR_5 < 0) {
  FUNC_0("preparing i2c read failed (error=%i)\n", VAR_5);
  return VAR_5;
 }
 for (VAR_6 = VAR_0; VAR_6 > 0;
      VAR_6 -= 5) {
  unsigned VAR_7 = VAR_2->em28xx_read_reg(VAR_2, 0x5);

  if (VAR_7 == 0x94)
   return -VAR_1;
  else if (VAR_7 == 0x84)
   return 0;
  FUNC_1(5);
 }
 return -VAR_1;
}
