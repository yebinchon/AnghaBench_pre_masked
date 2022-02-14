
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ s64 ;


 int FUNC_0 (unsigned long long*,unsigned long long*,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;
 int FUNC_2 (unsigned long long*,unsigned long long*,unsigned long long,unsigned long long) ;
 int FUNC_3 (unsigned long long*,unsigned long long*,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;

__attribute__((used)) static inline u64 FUNC_4(u64 VAR_0, u64 VAR_1, u64 VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_0 >= VAR_2)
  return ~0ULL;
 VAR_3 = VAR_2 >> 32;
 if (VAR_3 << 32 <= VAR_0) {
  VAR_9 = 0xffffffff00000000ULL;
 } else {
  VAR_9 = VAR_0;
  FUNC_1(VAR_9, VAR_3);
  VAR_9 <<= 32;
 }
 FUNC_2(&VAR_7, &VAR_8, VAR_2, VAR_9);
 FUNC_3(&VAR_5, &VAR_6, VAR_0, VAR_1, VAR_7, VAR_8);
 VAR_4 = VAR_2 << 32;
 while ((s64)VAR_5 < 0) {
  VAR_9 -= 0x100000000ULL;
  FUNC_0(&VAR_5, &VAR_6, VAR_5, VAR_6, VAR_3, VAR_4);
 }
 VAR_5 = (VAR_5 << 32) | (VAR_6 >> 32);
 if (VAR_3 << 32 <= VAR_5) {
  VAR_9 |= 0xffffffff;
 } else {
  FUNC_1(VAR_5, VAR_3);
  VAR_9 |= VAR_5;
 }
 return VAR_9;
}
