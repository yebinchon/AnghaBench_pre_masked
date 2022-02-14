
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline int FUNC_0(const uint32_t VAR_0)
{
 switch ((VAR_0 >> 16) % 5)
 {
  case 0:
   return ((((VAR_0 >> 17) % 18) + 14) << 1) | (VAR_0 & 1);
  case 1:
   return ((((VAR_0 >> 8) % 33) + 2) << 1) | (VAR_0 & 1);
  case 2:
   return ((((VAR_0 >> 1) % 21) + 12) << 1) | (VAR_0 & 1);
  case 3:
   return ((((VAR_0 >> 14) % 13) + 1) << 1) | (VAR_0 & 1);
  case 4:
  default:
   return ((((VAR_0 >> 1) % 22) + 0) << 1) | (VAR_0 & 1);
 }
}
