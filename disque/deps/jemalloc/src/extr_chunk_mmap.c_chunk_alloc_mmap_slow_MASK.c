
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t FUNC_0 (uintptr_t,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,size_t) ;
 void* FUNC_3 (int *,size_t) ;
 void* FUNC_4 (void*,size_t,size_t,size_t) ;

__attribute__((used)) static void *
FUNC_5(size_t VAR_1, size_t VAR_2, bool *VAR_3, bool *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;

 VAR_6 = VAR_1 + VAR_2 - VAR_0;

 if (VAR_6 < VAR_1)
  return (((void*)0));
 do {
  void *VAR_7;
  size_t VAR_8;
  VAR_7 = FUNC_3(((void*)0), VAR_6);
  if (VAR_7 == ((void*)0))
   return (((void*)0));
  VAR_8 = FUNC_0((uintptr_t)VAR_7, VAR_2) -
      (uintptr_t)VAR_7;
  VAR_5 = FUNC_4(VAR_7, VAR_6, VAR_8, VAR_1);
 } while (VAR_5 == ((void*)0));

 FUNC_1(VAR_5 != ((void*)0));
 *VAR_3 = 1;
 if (!*VAR_4)
  *VAR_4 = FUNC_2(VAR_5, VAR_1);
 return (VAR_5);
}
