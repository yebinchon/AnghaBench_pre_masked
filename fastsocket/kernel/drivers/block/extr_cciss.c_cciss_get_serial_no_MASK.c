
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ctlr_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (int *,int ,unsigned char*,int ,int,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_6(ctlr_info_t *VAR_5, int VAR_6,
   unsigned char *VAR_7, int VAR_8)
{

 int VAR_9;
 unsigned char *VAR_10;
 unsigned char VAR_11[8];

 if (VAR_8 > 16)
  VAR_8 = 16;
 FUNC_4(VAR_7, 0xff, VAR_8);
 VAR_10 = FUNC_1(64, VAR_1);
 if (!VAR_10)
  return;
 FUNC_4(VAR_7, 0, VAR_8);
 FUNC_2(VAR_5, VAR_11, VAR_6);
 VAR_9 = FUNC_5(VAR_5, VAR_0, VAR_10,
  64, 0x83, VAR_11, VAR_4);
 if (VAR_9 == VAR_2)
  FUNC_3(VAR_7, &VAR_10[8], VAR_8);
 FUNC_0(VAR_10);
 return;
}
