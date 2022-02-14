
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (long,int) ;

__attribute__((used)) static unsigned long
FUNC_2 (unsigned long VAR_0,
     long VAR_1,
     int VAR_2,
     const char **VAR_3)
{
  if (!FUNC_1 (VAR_1, VAR_2))
    *VAR_3 = FUNC_0("invalid conditional option");
  else if ((VAR_1 & 1) != 0)
    *VAR_3 = FUNC_0("attempt to set y bit when using + or - modifier");

  return VAR_0 | ((VAR_1 & 0x1f) << 21);
}
