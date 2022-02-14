
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef scalar_t__ mutex_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

int FUNC_1(int *VAR_0)
{
 s32 VAR_1;
 mutex_t VAR_2;

 if(!VAR_0 || *VAR_0==0) return -1;

 VAR_2 = (mutex_t)*VAR_0;
 VAR_1 = FUNC_0(VAR_2);
 if(VAR_1==0) *VAR_0 = 0;

 return VAR_1;
}
