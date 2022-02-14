
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long long,unsigned long long) ;
 unsigned long long FUNC_1 (unsigned long long,unsigned long long) ;

__attribute__((used)) static long long FUNC_2(long long VAR_0, long long VAR_1)
{
 unsigned long long VAR_2, VAR_3;
 long long VAR_4;

 if ((VAR_0 ^ VAR_1) & 0x8000000000000000LL) {
  VAR_4 = VAR_0 & 0x8000000000000000LL;
  VAR_2 = VAR_0 & 0x7fffffffffffffffLL;
  VAR_3 = VAR_1 & 0x7fffffffffffffffLL;
  if (VAR_3 < 0x0010000000000000LL) {
   VAR_2 = FUNC_1(VAR_2, VAR_3);
   if ((int) VAR_2 < 0) {
    VAR_2 = -VAR_2;
    VAR_4 ^= 0x8000000000000000LL;
   }
  } else {
   VAR_2 = FUNC_1(VAR_3, VAR_2);
   VAR_4 ^= 0x8000000000000000LL;
  }
 } else {
  VAR_4 = VAR_0 & 0x8000000000000000LL;
  VAR_2 = VAR_0 & 0x7fffffffffffffffLL;
  VAR_3 = VAR_1 & 0x7fffffffffffffffLL;
  if (VAR_3 < 0x0010000000000000LL)
   VAR_2 = FUNC_0(VAR_2, VAR_3);
  else
   VAR_2 = FUNC_0(VAR_3, VAR_2);
 }

 return VAR_4 | VAR_2;
}
