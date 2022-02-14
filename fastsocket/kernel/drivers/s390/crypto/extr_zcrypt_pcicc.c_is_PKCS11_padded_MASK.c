
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 int VAR_2;
 if ((VAR_0[0] != 0x00) || (VAR_0[1] != 0x01))
  return 0;
 for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2++)
  if (VAR_0[VAR_2] != 0xFF)
   break;
 if (VAR_2 < 10 || VAR_2 == VAR_1)
  return 0;
 if (VAR_0[VAR_2] != 0x00)
  return 0;
 return 1;
}
