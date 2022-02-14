
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 if ((VAR_0 % 1000000) == 0)
  return (VAR_0 / 10000);
 else
  return (((VAR_0 / 1000000) + 1)*100);
}
