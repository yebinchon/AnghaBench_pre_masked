
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,size_t) ;

void *
FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 void *VAR_4 = (void *)((uintptr_t)VAR_0 + VAR_2);

 FUNC_0(VAR_1 >= VAR_2 + VAR_3);
 {
  size_t VAR_5 = VAR_1 - VAR_2 - VAR_3;

  if (VAR_2 != 0)
   FUNC_2(VAR_0, VAR_2);
  if (VAR_5 != 0)
   FUNC_2((void *)((uintptr_t)VAR_4 + VAR_3), VAR_5);
  return (VAR_4);
 }

}
