
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_0, unsigned int *VAR_1,
         unsigned int *VAR_2,
         unsigned int *VAR_3)
{
 static int VAR_4[] = { 9, 10, 11, 12, 0, 14, 15, 0 };

 *VAR_1 = VAR_4[FUNC_2(FUNC_0(VAR_0)) & 0x7];
 *VAR_2 = (FUNC_2(FUNC_0(VAR_0)) & 0x8) >> 3;
 *VAR_3 = FUNC_2(FUNC_1(VAR_0)) & 0x1;
 FUNC_3(FUNC_2(FUNC_0(VAR_0)) | 0x10, FUNC_0(VAR_0));
}
