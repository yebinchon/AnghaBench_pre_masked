
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(unsigned long VAR_0)
{
 if (VAR_0 < 83UL)
  return 0xffff;
 if (VAR_0 >= 1350000UL)
  return 0x0004;
 return ((1350000UL + VAR_0 / 2) / VAR_0) << 2;
}
