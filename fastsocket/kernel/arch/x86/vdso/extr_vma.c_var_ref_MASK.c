
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void *FUNC_1(void *VAR_2, char *VAR_3)
{
 if (*(void **)VAR_2 != (void *)VAR_0) {
  FUNC_0("VDSO: variable %s broken\n", VAR_3);
  VAR_1 = 0;
 }
 return VAR_2;
}
