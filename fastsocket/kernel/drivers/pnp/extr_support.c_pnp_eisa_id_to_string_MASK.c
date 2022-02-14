
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 char FUNC_1 (int) ;
 char FUNC_2 (int) ;

void FUNC_3(u32 VAR_0, char *VAR_1)
{
 VAR_0 = FUNC_0(VAR_0);
 VAR_1[0] = 'A' + ((VAR_0 >> 26) & 0x3f) - 1;
 VAR_1[1] = 'A' + ((VAR_0 >> 21) & 0x1f) - 1;
 VAR_1[2] = 'A' + ((VAR_0 >> 16) & 0x1f) - 1;
 VAR_1[3] = FUNC_1(VAR_0 >> 8);
 VAR_1[4] = FUNC_2(VAR_0 >> 8);
 VAR_1[5] = FUNC_1(VAR_0);
 VAR_1[6] = FUNC_2(VAR_0);
 VAR_1[7] = '\0';
}
