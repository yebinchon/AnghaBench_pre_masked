
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 char* VAR_0 ;

char* FUNC_0(char *VAR_1,s32 VAR_2)
{
 s32 VAR_3,VAR_4,VAR_5;

 for(VAR_3=0,VAR_5=28;VAR_3<8;VAR_3++,VAR_5-=4,VAR_1++) {
  VAR_4 = (VAR_2>>VAR_5)&0x0f;
  *VAR_1 = VAR_0[VAR_4];
 }
 return VAR_1;
}
