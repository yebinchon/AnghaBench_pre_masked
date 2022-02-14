
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (void*,size_t) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (size_t,size_t,int*,int*) ;
 size_t VAR_0 ;
 int FUNC_3 (void*,size_t) ;
 void* FUNC_4 (int *,size_t) ;
 int FUNC_5 (void*,size_t) ;

void *
FUNC_6(size_t VAR_1, size_t VAR_2, bool *VAR_3, bool *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;
 FUNC_1(VAR_2 != 0);
 FUNC_1((VAR_2 & VAR_0) == 0);

 VAR_5 = FUNC_4(((void*)0), VAR_1);
 if (VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6 != 0) {
  FUNC_5(VAR_5, VAR_1);
  return (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4));
 }

 FUNC_1(VAR_5 != ((void*)0));
 *VAR_3 = 1;
 if (!*VAR_4)
  *VAR_4 = FUNC_3(VAR_5, VAR_1);
 return (VAR_5);
}
