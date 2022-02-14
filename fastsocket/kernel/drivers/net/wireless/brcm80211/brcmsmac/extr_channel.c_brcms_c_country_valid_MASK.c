
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{




 if (!((0x80 & VAR_0[0]) == 0 && VAR_0[0] >= 0x41 && VAR_0[0] <= 0x5A &&
       (0x80 & VAR_0[1]) == 0 && VAR_0[1] >= 0x41 && VAR_0[1] <= 0x5A))
  return 0;





 if (!FUNC_0("AA", VAR_0) ||
     !FUNC_0("ZZ", VAR_0) ||
     VAR_0[0] == 'X' ||
     (VAR_0[0] == 'Q' &&
      (VAR_0[1] >= 'M' && VAR_0[1] <= 'Z')))
  return 0;

 if (!FUNC_0("NA", VAR_0))
  return 0;

 return 1;
}
