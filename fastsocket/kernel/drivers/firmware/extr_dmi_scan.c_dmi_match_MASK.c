
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dmi_field { ____Placeholder_dmi_field } dmi_field ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,char const*) ;

bool FUNC_2(enum dmi_field VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0) || VAR_1 == ((void*)0))
  return VAR_2 == VAR_1;

 return !FUNC_1(VAR_2, VAR_1);
}
