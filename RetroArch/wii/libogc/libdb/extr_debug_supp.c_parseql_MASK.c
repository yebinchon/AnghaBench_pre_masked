
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 char* FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*,int*) ;
 int FUNC_2 (char const*,int*) ;

s32 FUNC_3(const char *VAR_0,s32 *VAR_1,s32 *VAR_2,s32 *VAR_3)
{
 const char *VAR_4;

 VAR_4 = VAR_0+2;
 if(!FUNC_2(VAR_4,VAR_1)) return 0;

 VAR_4++;
 if(!FUNC_1(VAR_4,VAR_2)) return 0;

 VAR_4 += 2;
 VAR_4 = FUNC_0(VAR_4,VAR_3);
 if(VAR_4==((void*)0)) return 0;

 return 1;
}
