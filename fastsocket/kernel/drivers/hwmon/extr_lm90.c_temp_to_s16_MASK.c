
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s16 ;



__attribute__((used)) static s16 FUNC_0(long VAR_0)
{
 if (VAR_0 <= -128000)
  return 0x8000;
 if (VAR_0 >= 127875)
  return 0x7FE0;
 if (VAR_0 < 0)
  return (VAR_0 - 62) / 125 * 32;
 return (VAR_0 + 62) / 125 * 32;
}
