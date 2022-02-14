
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,unsigned long,size_t) ;
 int FUNC_1 (unsigned long,unsigned long,size_t) ;

void * FUNC_2(void * VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (!(((unsigned long) VAR_0 ^ (unsigned long) VAR_1) & 7)) {
  FUNC_0 ((unsigned long) VAR_0, (unsigned long) VAR_1,
         VAR_2);
  return VAR_0;
 }
 FUNC_1 ((unsigned long) VAR_0, (unsigned long) VAR_1, VAR_2);
 return VAR_0;
}
