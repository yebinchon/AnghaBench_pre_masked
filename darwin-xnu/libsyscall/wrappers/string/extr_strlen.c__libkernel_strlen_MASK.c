
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t VAR_0 ;
 unsigned long const VAR_1 ;
 unsigned long const VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((visibility("hidden")))
size_t
FUNC_1(const char *VAR_3)
{
 const char *VAR_4;
 const unsigned long *VAR_5;


 for (VAR_4 = VAR_3; (uintptr_t)VAR_4 & VAR_0; VAR_4++)
     if (*VAR_4 == '\0')
  return (VAR_4 - VAR_3);


 for (VAR_5 = (const unsigned long *)VAR_4; ; VAR_5++)
     if ((*VAR_5 - VAR_1) & VAR_2) {
  VAR_4 = (const char *)(VAR_5);
  FUNC_0(0);
  FUNC_0(1);
  FUNC_0(2);
  FUNC_0(3);






     }


 return (0);
}
