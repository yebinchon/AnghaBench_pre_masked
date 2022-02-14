
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef unsigned long long int64_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int64_t
FUNC_1(int64_t VAR_0, uint32_t VAR_1)
{
 FUNC_0(VAR_1 < 63);
 if (VAR_0 & (1ULL << VAR_1)) {

  VAR_0 |= ((~0ULL) & ~((1ULL << (VAR_1 + 1)) - 1ULL));
 }

 return VAR_0;
}
