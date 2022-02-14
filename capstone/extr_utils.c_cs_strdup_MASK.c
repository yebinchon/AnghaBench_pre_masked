
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (void*,char const*,size_t) ;
 int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0)
{
 size_t VAR_1 = FUNC_2(VAR_0)+ 1;
 void *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return ((void*)0);

 return (char *)FUNC_1(VAR_2, VAR_0, VAR_1);
}
