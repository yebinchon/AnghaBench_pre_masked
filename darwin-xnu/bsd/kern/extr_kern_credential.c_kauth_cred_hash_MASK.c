
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_long ;



__attribute__((used)) static inline u_long
FUNC_0(const uint8_t *VAR_0, int VAR_1, u_long VAR_2)
{
 u_long VAR_3 = VAR_2;
 u_long VAR_4;

 while (VAR_1 > 0) {
  VAR_3 = (VAR_3 << 4) + *VAR_0++;
  VAR_4 = VAR_3 & 0xF0000000;
  if (VAR_4) {
   VAR_3 ^= VAR_4 >> 24;
  }
  VAR_3 &= ~VAR_4;
  VAR_1--;
 }
 return(VAR_3);
}
