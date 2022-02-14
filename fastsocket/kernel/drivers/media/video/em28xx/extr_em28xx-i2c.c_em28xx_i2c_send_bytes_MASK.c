
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int (* em28xx_write_regs_req ) (struct em28xx*,int,unsigned char,char*,short) ;} ;


 int FUNC_0 (struct em28xx*,int,unsigned char,char*,short) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char VAR_1, char *VAR_2,
     short VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct em28xx *VAR_6 = (struct em28xx *)VAR_0;

 VAR_5 = VAR_6->em28xx_write_regs_req(VAR_6, VAR_4 ? 2 : 3, VAR_1, VAR_2, VAR_3);

 return VAR_5;
}
