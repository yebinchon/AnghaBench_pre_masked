
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static bool FUNC_0(u32 VAR_0, u32 VAR_1)
{
 int VAR_2;

 if (VAR_0 & 0xff000000 || VAR_1 & 0xff000000)
  return 0;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  if (((VAR_0 >> VAR_2*8) & 0xff) >= ((VAR_1 >> VAR_2*8) & 0xff))
   return 0;
 }

 return 1;
}
