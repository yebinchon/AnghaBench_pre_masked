
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 scalar_t__ FUNC_0 (char const*,int*) ;

const char* FUNC_1(const char *VAR_0,s32 *VAR_1)
{
 s32 VAR_2,VAR_3,VAR_4;
 s32 VAR_5,VAR_6;

 VAR_5 = 0;
 for(VAR_2=0;VAR_2<8;VAR_2++,VAR_0++) {
  if(*VAR_0!='0') break;

  VAR_5 = 1;
 }

 VAR_3 = 0;
 VAR_6 = 8 - VAR_2;
 for(VAR_2=0;VAR_2<VAR_6;VAR_2++,VAR_0++) {
  if(!FUNC_0(VAR_0,&VAR_4)) {
   if(VAR_2==0 && !VAR_5) return ((void*)0);

   *VAR_1 = VAR_3;
   return VAR_0;
  }
  VAR_3 = (VAR_3<<4)|VAR_4;
 }
 if(FUNC_0(VAR_0,&VAR_4)) return ((void*)0);

 *VAR_1 = VAR_3;
 return VAR_0;
}
