
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;


 int FUNC_0 (char const*,int*) ;

s32 FUNC_1(const char *VAR_0,s32 *VAR_1)
{
 s32 VAR_2,VAR_3;

 if(!FUNC_0(VAR_0,&VAR_2) || !FUNC_0(VAR_0+1,&VAR_3)) return 0;

 *VAR_1 = (VAR_2<<4)|VAR_3;
 return 1;
}
