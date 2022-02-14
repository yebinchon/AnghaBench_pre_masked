
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;

void *FUNC_1(size_t VAR_1, size_t VAR_2)
{
 if(!VAR_1 || !VAR_2)
  return FUNC_0(1);
 if(VAR_1 > VAR_0 / VAR_2)
  return 0;
 return FUNC_0(VAR_1*VAR_2);
}
