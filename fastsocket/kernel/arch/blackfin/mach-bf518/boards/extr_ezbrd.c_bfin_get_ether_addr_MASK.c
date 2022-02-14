
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



void FUNC_0(char *VAR_0)
{

 u32 VAR_1;
 u64 VAR_2;
 u32 (*VAR_3)(u32 VAR_4, u32 VAR_5, u64 *VAR_6) = (void *)0xEF00001A;

 VAR_1 = VAR_3(0xDF, 0x00, &VAR_2);
 if (!(VAR_1 & 0x1)) {
  char *VAR_7 = (char *)&VAR_2;
  for (VAR_1 = 0; VAR_1 < 6; ++VAR_1)
   VAR_0[VAR_1] = VAR_7[5 - VAR_1];
 }
}
