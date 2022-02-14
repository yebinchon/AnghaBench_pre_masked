
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
size_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2;

 for (VAR_2 = VAR_0; VAR_1 != 0 && *VAR_2 != '\0'; VAR_2++, VAR_1--)
  ;

 return (size_t)(VAR_2 - VAR_0);
}
