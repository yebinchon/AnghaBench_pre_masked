
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mutex_t ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(int *VAR_0)
{
 mutex_t VAR_1;

 if(!VAR_0 || *VAR_0==0) return -1;

 VAR_1 = (mutex_t)*VAR_0;
 return FUNC_0(VAR_1);
}
