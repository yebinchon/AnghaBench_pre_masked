
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_pta {int size; int base; } ;
typedef int u64 ;
struct thash_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

struct thash_data *FUNC_3(union ia64_pta VAR_1, u64 VAR_2, u64 VAR_3, u64 *VAR_4)
{
 u64 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_1.size - 5 - 8;
 VAR_6 = FUNC_0(VAR_2) >> FUNC_2(VAR_3);
 VAR_7 = FUNC_1(VAR_3);
 VAR_5 = ((VAR_7 & 0xff) << VAR_8)|(VAR_6 & ((1UL << VAR_8) - 1));
 *VAR_4 = ((VAR_7 >> 8) & 0xffff) | ((VAR_6 >> VAR_8) << 16);

 return (struct thash_data *)((VAR_1.base << VAR_0) +
    (VAR_5 << 5));
}
