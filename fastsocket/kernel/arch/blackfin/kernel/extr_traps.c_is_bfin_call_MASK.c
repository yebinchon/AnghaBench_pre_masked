
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short*,unsigned short*) ;

__attribute__((used)) static bool FUNC_1(unsigned short *VAR_0)
{
 unsigned short VAR_1 = 0, *VAR_2;
 VAR_2 = (unsigned short *)VAR_0;

 if (!FUNC_0(&VAR_1, VAR_2))
  return 0;

 if ((VAR_1 >= 0x0060 && VAR_1 <= 0x0067) ||
     (VAR_1 >= 0x0070 && VAR_1 <= 0x0077))
  return 1;

 VAR_2--;
 if (!FUNC_0(&VAR_1, VAR_2))
  return 0;

 if (VAR_1 >= 0xE300 && VAR_1 <= 0xE3FF)
  return 1;

 return 0;

}
