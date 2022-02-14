
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 void** VAR_0 ;

char* FUNC_0(char *VAR_1,const char *VAR_2,s32 VAR_3)
{
 s32 VAR_4;
 char VAR_5;

 for(VAR_4=0;VAR_4<VAR_3;VAR_4++,VAR_2++) {
  VAR_5 = *VAR_2;
  *VAR_1++ = VAR_0[VAR_5>>4];
  *VAR_1++ = VAR_0[VAR_5&0x0f];
 }
 *VAR_1 = 0;
 return VAR_1;
}
