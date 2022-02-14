
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long long,unsigned long long,unsigned long long*,unsigned long long*) ;
 int FUNC_1 (unsigned long long,unsigned long long,int) ;

__attribute__((used)) static long long FUNC_2(long long VAR_0, long long VAR_1)
{
 unsigned long long VAR_2, VAR_3;
 unsigned long long VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_2 = VAR_0 & 0x7fffffffffffffffLL;
 VAR_3 = VAR_1 & 0x7fffffffffffffffLL;
 if (VAR_3 < 0x0010000000000000LL || VAR_2 == 0)
  return ((VAR_0 ^ VAR_1) & 0x8000000000000000LL);

 VAR_8 = (VAR_3 & 0x7ff0000000000000LL) >> 52;
 VAR_2 &= 0x000fffffffffffffLL;
 VAR_3 = (VAR_3 & 0x000fffffffffffffLL) | 0x0010000000000000LL;
 FUNC_0(VAR_2, VAR_3, &VAR_4, &VAR_5);
 VAR_6 = VAR_4;
 VAR_7 = VAR_5;
 VAR_9 = -1;
 if (VAR_6) {
  while (VAR_6) { VAR_6 >>= 1; VAR_9++;}
  VAR_9 += 64;
 } else
  while (VAR_7) { VAR_7 >>= 1; VAR_9++;}


 VAR_8 += VAR_9 - 1022 - 52 * 2;
 if (VAR_8 > 0)
  VAR_2 = (FUNC_1(VAR_4, VAR_5, VAR_9 - 52) & 0x000fffffffffffffLL)
   | ((long long)VAR_8 << 52);
 else if (VAR_8 + 51 >= 0)
  VAR_2 = FUNC_1(VAR_4, VAR_5, VAR_9 - 51 - VAR_8) & 0x000fffffffffffffLL;
 else
  VAR_2 = 0;

 VAR_2 |= (VAR_0 ^ VAR_1) & 0x8000000000000000LL;
 return VAR_2;
}
