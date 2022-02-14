
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int,unsigned char,char*,int) ;scalar_t__ (* em28xx_read_reg ) (struct em28xx*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct em28xx*,int,unsigned char,char*,int) ;
 scalar_t__ FUNC_2 (struct em28xx*,int) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_1, unsigned char VAR_2,
     char *VAR_3, int VAR_4)
{
 int VAR_5;
 VAR_5 = VAR_1->em28xx_read_reg_req_len(VAR_1, 2, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0("reading i2c device failed (error=%i)\n", VAR_5);
  return VAR_5;
 }
 if (VAR_1->em28xx_read_reg(VAR_1, 0x5) != 0)
  return -VAR_0;
 return VAR_5;
}
