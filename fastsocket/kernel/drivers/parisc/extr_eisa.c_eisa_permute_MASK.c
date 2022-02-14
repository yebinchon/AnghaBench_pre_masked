
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(unsigned short VAR_0)
{
 if (VAR_0 & 0x300) {
  return 0xfc000000 | ((VAR_0 & 0xfc00) >> 6)
   | ((VAR_0 & 0x3f8) << 9) | (VAR_0 & 7);
 } else {
  return 0xfc000000 | VAR_0;
 }
}
