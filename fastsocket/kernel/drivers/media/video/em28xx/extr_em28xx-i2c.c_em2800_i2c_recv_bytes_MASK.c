
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int,int,char*,int) ;} ;


 int FUNC_0 (struct em28xx*,unsigned char) ;
 int FUNC_1 (char*,unsigned char,int) ;
 int FUNC_2 (struct em28xx*,int,int,char*,int) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_0, unsigned char VAR_1,
     char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4) {
  FUNC_1
      ("preparing read at i2c address 0x%x failed (error=%i)\n",
       VAR_1, VAR_4);
  return VAR_4;
 }
 VAR_4 = VAR_0->em28xx_read_reg_req_len(VAR_0, 0x0, 0x3, VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1("reading from i2c device at 0x%x failed (error=%i)",
       VAR_1, VAR_4);
  return VAR_4;
 }
 return VAR_4;
}
