
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (char const*,int*) ;
 char* FUNC_1 (char const*,int*) ;

s32 FUNC_2(const char *VAR_0,s32 *VAR_1,char **VAR_2,u32 *VAR_3)
{
 s32 VAR_4,VAR_5,VAR_6;

 VAR_0++;
 if(!FUNC_0(VAR_0,&VAR_4) || *(VAR_0+1)!=',') return 0;

 VAR_0 += 2;
 VAR_0 = FUNC_1(VAR_0,&VAR_5);
 if(VAR_0==((void*)0) || *VAR_0!=',') return 0;

 VAR_0++;
 VAR_0 = FUNC_1(VAR_0,&VAR_6);
 if(VAR_0==((void*)0) || VAR_6<1) return 0;

 *VAR_1 = VAR_4;
 *VAR_2 = (char*)VAR_5;
 *VAR_3 = VAR_6;

 return 1;
}
