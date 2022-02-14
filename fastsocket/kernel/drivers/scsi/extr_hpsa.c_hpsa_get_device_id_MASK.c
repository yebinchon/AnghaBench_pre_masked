
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctlr_info*,unsigned char*,int,unsigned char*,int) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct ctlr_info *VAR_1, unsigned char *VAR_2,
 unsigned char *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned char *VAR_6;

 if (VAR_4 > 16)
  VAR_4 = 16;
 VAR_6 = FUNC_2(64, VAR_0);
 if (!VAR_6)
  return -1;
 VAR_5 = FUNC_0(VAR_1, VAR_2, 0x83, VAR_6, 64);
 if (VAR_5 == 0)
  FUNC_3(VAR_3, &VAR_6[8], VAR_4);
 FUNC_1(VAR_6);
 return VAR_5 != 0;
}
