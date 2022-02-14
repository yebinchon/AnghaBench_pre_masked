
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;

__attribute__((used)) static u32 FUNC_1(void)
{
 u32 VAR_0;
 VAR_0 = FUNC_0();
 if ((VAR_0 & 0xF) == 0xd)
  return 1;
 if (VAR_0 & 0x2)
  return 1;
 else
  return 0;
}
