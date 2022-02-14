
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void
FUNC_0(uint64_t *VAR_0, int VAR_1)
{
 uint64_t VAR_2;

 if (VAR_1 == 0)
  return;

 if (VAR_1 < 0) {
  VAR_1 = -VAR_1;
  if (VAR_1 >= 64) {
   VAR_0[0] = VAR_0[1] >> (VAR_1 - 64);
   VAR_0[1] = 0;
  } else {
   VAR_0[0] >>= VAR_1;
   VAR_2 = 1LL << (64 - VAR_1);
   VAR_2 -= 1;
   VAR_0[0] |= ((VAR_0[1] & VAR_2) << (64 - VAR_1));
   VAR_0[1] >>= VAR_1;
  }
 } else {
  if (VAR_1 >= 64) {
   VAR_0[1] = VAR_0[0] << (VAR_1 - 64);
   VAR_0[0] = 0;
  } else {
   VAR_0[1] <<= VAR_1;
   VAR_2 = VAR_0[0] >> (64 - VAR_1);
   VAR_0[1] |= VAR_2;
   VAR_0[0] <<= VAR_1;
  }
 }
}
