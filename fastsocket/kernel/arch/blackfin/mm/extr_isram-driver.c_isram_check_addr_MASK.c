
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,void const*,size_t) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(const void *VAR_2, size_t VAR_3)
{
 if ((VAR_2 >= (void *)VAR_1) &&
     (VAR_2 < (void *)(VAR_1 + VAR_0))) {
  if ((VAR_2 + VAR_3) > (void *)(VAR_1 + VAR_0)) {
   FUNC_1(((void*)0), ((void*)0));
   FUNC_0("copy involving %p length (%zu) too long\n", VAR_2, VAR_3);
  }
  return 1;
 }
 return 0;
}
