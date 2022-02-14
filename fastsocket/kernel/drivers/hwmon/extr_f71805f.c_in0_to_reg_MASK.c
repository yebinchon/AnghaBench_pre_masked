
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(long VAR_0)
{
 if (VAR_0 <= 0)
  return 0;
 if (VAR_0 >= 4032)
  return 0xfc;
 return (((VAR_0 + 32) / 64) << 2);
}
