
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long
FUNC_0 (unsigned long VAR_0)
{
 unsigned long VAR_1 = (VAR_0 >> 0) & 0x7fffff;
 unsigned long VAR_2 = (VAR_0 >> 31) & 0x1;
 unsigned long VAR_3 = (VAR_0 >> 30) & 0x1;
 unsigned long VAR_4 = (VAR_0 >> 23) & 0x7f;
 unsigned long VAR_5;

 VAR_5 = (VAR_3 << 10) | VAR_4;
 if (VAR_3) {
  if (VAR_4 == 0x7f) {
   VAR_5 = 0x7ff;
  }
 } else {
  if (VAR_4 == 0x00) {
   VAR_5 = 0x000;
  } else {
   VAR_5 |= (0x7 << 7);
  }
 }
 return (VAR_2 << 63) | (VAR_5 << 52) | (VAR_1 << 29);
}
